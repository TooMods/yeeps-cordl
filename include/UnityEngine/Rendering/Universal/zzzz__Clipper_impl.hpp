#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ClipType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ClipperBase_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyFillType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Clipper_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ClipType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Clipper_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Direction_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntersectNode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Join_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Maxima_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutPt_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutRec_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyFillType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyNode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyTree_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TEdge_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Clipper__NodeType::__Clipper__NodeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Clipper__NodeType::__Clipper__NodeType() {}
constexpr ::UnityEngine::Rendering::Universal::__Clipper__NodeType UnityEngine::Rendering::Universal::__Clipper__NodeType::ntAny{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__Clipper__NodeType UnityEngine::Rendering::Universal::__Clipper__NodeType::ntOpen{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::__Clipper__NodeType UnityEngine::Rendering::Universal::__Clipper__NodeType::ntClosed{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1e24514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.InsertMaxima
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(int64_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::InsertMaxima)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1e246a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "InsertMaxima",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.get_LastIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::get_LastIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e24770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "get_LastIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.set_LastIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::set_LastIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e24778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "set_LastIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.get_ReverseSolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::get_ReverseSolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e24780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "get_ReverseSolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.set_ReverseSolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Clipper::set_ReverseSolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1e24788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "set_ReverseSolution",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.get_StrictlySimple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::get_StrictlySimple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e24794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "get_StrictlySimple", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.set_StrictlySimple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Clipper::set_StrictlySimple)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1e2479c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "set_StrictlySimple",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::ClipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*,
    ::UnityEngine::Rendering::Universal::PolyFillType)>(&::UnityEngine::Rendering::Universal::Clipper::Execute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e247a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::ClipType, ::UnityEngine::Rendering::Universal::PolyTree*, ::UnityEngine::Rendering::Universal::PolyFillType)>(
    &::UnityEngine::Rendering::Universal::Clipper::Execute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e24954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::ClipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*,
    ::UnityEngine::Rendering::Universal::PolyFillType, ::UnityEngine::Rendering::Universal::PolyFillType)>(&::UnityEngine::Rendering::Universal::Clipper::Execute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1e247b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::ClipType, ::UnityEngine::Rendering::Universal::PolyTree*, ::UnityEngine::Rendering::Universal::PolyFillType,
    ::UnityEngine::Rendering::Universal::PolyFillType)>(&::UnityEngine::Rendering::Universal::Clipper::Execute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1e2495c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FixHoleLinkage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::FixHoleLinkage)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1e25568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixHoleLinkage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::ExecuteInternal)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x1e24a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "ExecuteInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.DisposeAllPolyPts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::DisposeAllPolyPts)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1e26928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "DisposeAllPolyPts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AddJoin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::IntPoint)>(&::UnityEngine::Rendering::Universal::Clipper::AddJoin)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1e269cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddJoin", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AddGhostJoin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::IntPoint)>(&::UnityEngine::Rendering::Universal::Clipper::AddGhostJoin)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1e26ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddGhostJoin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.InsertLocalMinimaIntoAEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(int64_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::InsertLocalMinimaIntoAEL)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x1e255c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "InsertLocalMinimaIntoAEL",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.InsertEdgeIntoAEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::Clipper::InsertEdgeIntoAEL)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1e26bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "InsertEdgeIntoAEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.E2InsertsBeforeE1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::Clipper::E2InsertsBeforeE1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1e27a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "E2InsertsBeforeE1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IsEvenOddFillType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::IsEvenOddFillType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1e27b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsEvenOddFillType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IsEvenOddAltFillType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::IsEvenOddAltFillType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1e27b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsEvenOddAltFillType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IsContributing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::IsContributing)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1e26ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsContributing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SetWindingCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::SetWindingCount)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x1e26c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SetWindingCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AddEdgeToSEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::AddEdgeToSEL)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1e273d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddEdgeToSEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.PopEdgeFromSEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(ByRef<::UnityEngine::Rendering::Universal::TEdge*>)>(
    &::UnityEngine::Rendering::Universal::Clipper::PopEdgeFromSEL)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1e27bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PopEdgeFromSEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::TEdge*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.CopyAELToSEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::CopyAELToSEL)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e27bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "CopyAELToSEL", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SwapPositionsInSEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::Clipper::SwapPositionsInSEL)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1e27c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapPositionsInSEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AddLocalMaxPoly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::Clipper::AddLocalMaxPoly)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1e27cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddLocalMaxPoly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AddLocalMinPoly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutPt* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::Clipper::AddLocalMinPoly)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x1e271e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddLocalMinPoly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AddOutPt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutPt* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::Clipper::AddOutPt)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1e2700c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddOutPt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetLastOutPt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutPt* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::Clipper::GetLastOutPt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1e280d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetLastOutPt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SwapPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ByRef<::UnityEngine::Rendering::Universal::IntPoint>, ByRef<::UnityEngine::Rendering::Universal::IntPoint>)>(&::UnityEngine::Rendering::Universal::Clipper::SwapPoints)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e28150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapPoints", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::IntPoint>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::IntPoint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.HorzSegmentsOverlap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(int64_t, int64_t, int64_t, int64_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::HorzSegmentsOverlap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1e2740c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "HorzSegmentsOverlap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SetHoleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::OutRec*)>(&::UnityEngine::Rendering::Universal::Clipper::SetHoleState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1e27ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SetHoleState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetDx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint)>(&::UnityEngine::Rendering::Universal::Clipper::GetDx)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1e28174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetDx", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FirstIsBottomPt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*)>(&::UnityEngine::Rendering::Universal::Clipper::FirstIsBottomPt)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1e281ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FirstIsBottomPt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetBottomPt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutPt* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutPt*)>(&::UnityEngine::Rendering::Universal::Clipper::GetBottomPt)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1e284b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetBottomPt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetLowermostRec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutRec* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::GetLowermostRec)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1e285b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetLowermostRec", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.OutRec1RightOfOutRec2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*)>(&::UnityEngine::Rendering::Universal::Clipper::OutRec1RightOfOutRec2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1e28684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "OutRec1RightOfOutRec2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetOutRec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutRec* (::UnityEngine::Rendering::Universal::Clipper::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::GetOutRec)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1e286b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetOutRec", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AppendPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::Clipper::AppendPolygon)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x1e27dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AppendPolygon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ReversePolyPtLinks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutPt*)>(
    &::UnityEngine::Rendering::Universal::Clipper::ReversePolyPtLinks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1e2614c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ReversePolyPtLinks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SwapSides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::SwapSides)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1e28754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapSides", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SwapPolyIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::SwapPolyIndexes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1e2877c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapPolyIndexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IntersectEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::Clipper::IntersectEdges)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x1e2743c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IntersectEdges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.DeleteFromSEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::DeleteFromSEL)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1e287a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DeleteFromSEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ProcessHorizontals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::ProcessHorizontals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1e25a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "ProcessHorizontals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetHorzDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ByRef<::UnityEngine::Rendering::Universal::Direction>, ByRef<int64_t>, ByRef<int64_t>)>(
    &::UnityEngine::Rendering::Universal::Clipper::GetHorzDirection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1e28f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetHorzDirection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Direction>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ProcessHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::ProcessHorizontal)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x1e287f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ProcessHorizontal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetNextInAEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TEdge* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::Direction)>(
    &::UnityEngine::Rendering::Universal::Clipper::GetNextInAEL)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1e28ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetNextInAEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IsMinima
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::IsMinima)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1e29024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsMinima", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IsMaxima
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*, double_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::IsMaxima)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1e29068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsMaxima", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IsIntermediate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*, double_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::IsIntermediate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1e29094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsIntermediate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetMaximaPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TEdge* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::Clipper::GetMaximaPair)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1e28f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetMaximaPair", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetMaximaPairEx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TEdge* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::Clipper::GetMaximaPairEx)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1e290cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetMaximaPairEx", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ProcessIntersections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(int64_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::ProcessIntersections)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1e25adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ProcessIntersections",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.BuildIntersectList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(int64_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::BuildIntersectList)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1e29108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "BuildIntersectList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.EdgesAdjacent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::IntersectNode*)>(
    &::UnityEngine::Rendering::Universal::Clipper::EdgesAdjacent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1e29988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "EdgesAdjacent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IntersectNodeSort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::Rendering::Universal::IntersectNode*, ::UnityEngine::Rendering::Universal::IntersectNode*)>(&::UnityEngine::Rendering::Universal::Clipper::IntersectNodeSort)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e299c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IntersectNodeSort", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FixupIntersectionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::FixupIntersectionOrder)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1e292ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "FixupIntersectionOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ProcessIntersectList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::ProcessIntersectList)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1e294e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "ProcessIntersectList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Round
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double_t)>(&::UnityEngine::Rendering::Universal::Clipper::Round)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1e299ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Round", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.TopX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::UnityEngine::Rendering::Universal::TEdge*, int64_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::TopX)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1e27aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "TopX", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.IntersectPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ByRef<::UnityEngine::Rendering::Universal::IntPoint>)>(
    &::UnityEngine::Rendering::Universal::Clipper::IntersectPoint)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1e295e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IntersectPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::IntPoint>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ProcessEdgesAtTopOfScanbeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(int64_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::ProcessEdgesAtTopOfScanbeam)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x1e25c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ProcessEdgesAtTopOfScanbeam",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.DoMaxima
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::Clipper::DoMaxima)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1e29a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DoMaxima", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ReversePaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*)>(&::UnityEngine::Rendering::Universal::Clipper::ReversePaths)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1e29c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ReversePaths", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Orientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*)>(
    &::UnityEngine::Rendering::Universal::Clipper::Orientation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1e29d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Orientation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.PointCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutPt*)>(
    &::UnityEngine::Rendering::Universal::Clipper::PointCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1e29ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointCount", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.BuildResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*)>(&::UnityEngine::Rendering::Universal::Clipper::BuildResult)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x1e24f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "BuildResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.BuildResult2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::PolyTree*)>(
    &::UnityEngine::Rendering::Universal::Clipper::BuildResult2)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x1e251fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "BuildResult2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FixupOutPolyline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::FixupOutPolyline)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1e264a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupOutPolyline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FixupOutPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::FixupOutPolygon)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1e26544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupOutPolygon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.DupOutPt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutPt* (
    ::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutPt*, bool)>(&::UnityEngine::Rendering::Universal::Clipper::DupOutPt)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1e29efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DupOutPt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.GetOverlap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    int64_t, int64_t, int64_t, int64_t, ByRef<int64_t>, ByRef<int64_t>)>(&::UnityEngine::Rendering::Universal::Clipper::GetOverlap)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1e29fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetOverlap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.JoinHorz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*,
    ::UnityEngine::Rendering::Universal::IntPoint, bool)>(&::UnityEngine::Rendering::Universal::Clipper::JoinHorz)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x1e2a0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "JoinHorz", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.JoinPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::Join*, ::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::JoinPoints)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x1e2a44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "JoinPoints", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Join*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.PointInPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::IntPoint, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*)>(
        &::UnityEngine::Rendering::Universal::Clipper::PointInPolygon)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1e2aa90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointInPolygon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.PointInPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::OutPt*)>(
    &::UnityEngine::Rendering::Universal::Clipper::PointInPolygon)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1e2ac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointInPolygon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Poly2ContainsPoly1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*)>(
    &::UnityEngine::Rendering::Universal::Clipper::Poly2ContainsPoly1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1e2ad60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Poly2ContainsPoly1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FixupFirstLefts1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*)>(&::UnityEngine::Rendering::Universal::Clipper::FixupFirstLefts1)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x1e2add0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupFirstLefts1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FixupFirstLefts2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*)>(&::UnityEngine::Rendering::Universal::Clipper::FixupFirstLefts2)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1e2af80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupFirstLefts2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.FixupFirstLefts3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(
    ::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*)>(&::UnityEngine::Rendering::Universal::Clipper::FixupFirstLefts3)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1e2b180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupFirstLefts3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ParseFirstLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutRec* (*)(::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::ParseFirstLeft)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1e2af68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ParseFirstLeft", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.JoinCommonEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::JoinCommonEdges)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x1e2617c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "JoinCommonEdges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.UpdateOutPtIdxs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::UpdateOutPtIdxs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1e2b2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "UpdateOutPtIdxs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.DoSimplePolygons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Clipper::*)()>(
    &::UnityEngine::Rendering::Universal::Clipper::DoSimplePolygons)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1e26724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                               "DoSimplePolygons", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Area
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*)>(
    &::UnityEngine::Rendering::Universal::Clipper::Area)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1e29da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Area", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Area
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutRec*)>(
    &::UnityEngine::Rendering::Universal::Clipper::Area)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1e26134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Area", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Area
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Rendering::Universal::Clipper::*)(::UnityEngine::Rendering::Universal::OutPt*)>(
    &::UnityEngine::Rendering::Universal::Clipper::Area)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1e2845c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Area", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SimplifyPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<
    ::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, ::UnityEngine::Rendering::Universal::PolyFillType)>(
    &::UnityEngine::Rendering::Universal::Clipper::SimplifyPolygon)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1e2b320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SimplifyPolygon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SimplifyPolygons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<
    ::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*,
                                                          ::UnityEngine::Rendering::Universal::PolyFillType)>(&::UnityEngine::Rendering::Universal::Clipper::SimplifyPolygons)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1e2b400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SimplifyPolygons", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.DistanceSqrd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::Clipper::DistanceSqrd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e2b4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DistanceSqrd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.DistanceFromLineSqrd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<double_t (*)(::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint)>(
        &::UnityEngine::Rendering::Universal::Clipper::DistanceFromLineSqrd)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1e2b500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DistanceFromLineSqrd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.SlopesNearCollinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, double_t)>(
        &::UnityEngine::Rendering::Universal::Clipper::SlopesNearCollinear)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x1e2b560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SlopesNearCollinear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.PointsAreClose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, double_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::PointsAreClose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1e2b828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointsAreClose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ExcludeOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutPt* (*)(::UnityEngine::Rendering::Universal::OutPt*)>(
    &::UnityEngine::Rendering::Universal::Clipper::ExcludeOp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1e2b850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ExcludeOp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.CleanPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                                                                           double_t)>(&::UnityEngine::Rendering::Universal::Clipper::CleanPolygon)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1e2b888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "CleanPolygon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.CleanPolygons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<
    ::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, double_t)>(
    &::UnityEngine::Rendering::Universal::Clipper::CleanPolygons)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1e2bcc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "CleanPolygons", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.Minkowski
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, bool, bool)>(
    &::UnityEngine::Rendering::Universal::Clipper::Minkowski)> {
  constexpr static std::size_t size = 0xafc;
  constexpr static std::size_t addrs = 0x1e2be20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Minkowski", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.MinkowskiSum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, bool)>(
    &::UnityEngine::Rendering::Universal::Clipper::MinkowskiSum)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1e2c91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "MinkowskiSum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.TranslatePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::Rendering::Universal::IntPoint>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::Clipper::TranslatePath)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1e2c9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "TranslatePath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.MinkowskiSum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<
    ::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                          ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, bool)>(
    &::UnityEngine::Rendering::Universal::Clipper::MinkowskiSum)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1e2cba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "MinkowskiSum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.MinkowskiDiff
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*)>(
    &::UnityEngine::Rendering::Universal::Clipper::MinkowskiDiff)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1e2cd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "MinkowskiDiff", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.PolyTreeToPaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::UnityEngine::Rendering::Universal::PolyTree*)>(
        &::UnityEngine::Rendering::Universal::Clipper::PolyTreeToPaths)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1e2ce24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PolyTreeToPaths", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.AddPolyNodeToPaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::PolyNode*, ::UnityEngine::Rendering::Universal::__Clipper__NodeType,
                         ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*)>(
        &::UnityEngine::Rendering::Universal::Clipper::AddPolyNodeToPaths)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1e2ced8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddPolyNodeToPaths", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Clipper__NodeType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.OpenPathsFromPolyTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::UnityEngine::Rendering::Universal::PolyTree*)>(
        &::UnityEngine::Rendering::Universal::Clipper::OpenPathsFromPolyTree)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1e2d0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "OpenPathsFromPolyTree", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Clipper.ClosedPathsFromPolyTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* (*)(::UnityEngine::Rendering::Universal::PolyTree*)>(
        &::UnityEngine::Rendering::Universal::Clipper::ClosedPathsFromPolyTree)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1e2d264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ClosedPathsFromPolyTree", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::ClipType& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_ClipType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipType;
}
constexpr ::UnityEngine::Rendering::Universal::ClipType const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_ClipType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipType;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_ClipType(::UnityEngine::Rendering::Universal::ClipType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipType = value;
}
constexpr ::UnityEngine::Rendering::Universal::Maxima*& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_Maxima() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Maxima;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Maxima*> const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_Maxima() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Maxima;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_Maxima(::UnityEngine::Rendering::Universal::Maxima* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Maxima)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::TEdge*& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_SortedEdges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedEdges;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_SortedEdges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedEdges;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_SortedEdges(::UnityEngine::Rendering::Universal::TEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortedEdges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>*& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_IntersectList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntersectList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>*> const&
UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_IntersectList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntersectList;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_IntersectList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IntersectList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*&
UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_IntersectNodeComparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntersectNodeComparer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*> const&
UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_IntersectNodeComparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntersectNodeComparer;
}
constexpr void
UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_IntersectNodeComparer(::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IntersectNodeComparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_ExecuteLocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecuteLocked;
}
constexpr bool const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_ExecuteLocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecuteLocked;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_ExecuteLocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecuteLocked = value;
}
constexpr ::UnityEngine::Rendering::Universal::PolyFillType& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_ClipFillType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipFillType;
}
constexpr ::UnityEngine::Rendering::Universal::PolyFillType const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_ClipFillType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipFillType;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_ClipFillType(::UnityEngine::Rendering::Universal::PolyFillType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipFillType = value;
}
constexpr ::UnityEngine::Rendering::Universal::PolyFillType& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_SubjFillType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubjFillType;
}
constexpr ::UnityEngine::Rendering::Universal::PolyFillType const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_SubjFillType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubjFillType;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_SubjFillType(::UnityEngine::Rendering::Universal::PolyFillType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubjFillType = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_Joins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Joins;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*> const&
UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_Joins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Joins;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_Joins(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Joins)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_GhostJoins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GhostJoins;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*> const&
UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_GhostJoins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GhostJoins;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_GhostJoins(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GhostJoins)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_UsingPolyTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsingPolyTree;
}
constexpr bool const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get_m_UsingPolyTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsingPolyTree;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set_m_UsingPolyTree(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsingPolyTree = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get__LastIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get__LastIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set__LastIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastIndex_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get__ReverseSolution_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReverseSolution_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get__ReverseSolution_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReverseSolution_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set__ReverseSolution_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReverseSolution_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get__StrictlySimple_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StrictlySimple_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Clipper::__cordl_internal_get__StrictlySimple_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StrictlySimple_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Clipper::__cordl_internal_set__StrictlySimple_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StrictlySimple_k__BackingField = value;
}
/// @param InitOptions: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::Rendering::Universal::Clipper* UnityEngine::Rendering::Universal::Clipper::New_ctor(int32_t InitOptions) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Clipper*>(InitOptions));
}
/// @param InitOptions: int32_t (default: static_cast<int32_t>(0x0))
inline void UnityEngine::Rendering::Universal::Clipper::_ctor(int32_t InitOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, InitOptions);
}
inline void UnityEngine::Rendering::Universal::Clipper::InsertMaxima(int64_t X) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "InsertMaxima",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, X);
}
inline int32_t UnityEngine::Rendering::Universal::Clipper::get_LastIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "get_LastIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::set_LastIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "set_LastIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Clipper::get_ReverseSolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "get_ReverseSolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::set_ReverseSolution(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "set_ReverseSolution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Clipper::get_StrictlySimple() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "get_StrictlySimple", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::set_StrictlySimple(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "set_StrictlySimple",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param FillType: ::UnityEngine::Rendering::Universal::PolyFillType (default: static_cast<int32_t>(0x0))
inline bool
UnityEngine::Rendering::Universal::Clipper::Execute(::UnityEngine::Rendering::Universal::ClipType clipType,
                                                    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* solution,
                                                    ::UnityEngine::Rendering::Universal::PolyFillType FillType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clipType, solution, FillType);
}
/// @param FillType: ::UnityEngine::Rendering::Universal::PolyFillType (default: static_cast<int32_t>(0x0))
inline bool UnityEngine::Rendering::Universal::Clipper::Execute(::UnityEngine::Rendering::Universal::ClipType clipType, ::UnityEngine::Rendering::Universal::PolyTree* polytree,
                                                                ::UnityEngine::Rendering::Universal::PolyFillType FillType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clipType, polytree, FillType);
}
inline bool
UnityEngine::Rendering::Universal::Clipper::Execute(::UnityEngine::Rendering::Universal::ClipType clipType,
                                                    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* solution,
                                                    ::UnityEngine::Rendering::Universal::PolyFillType subjFillType, ::UnityEngine::Rendering::Universal::PolyFillType clipFillType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clipType, solution, subjFillType, clipFillType);
}
inline bool UnityEngine::Rendering::Universal::Clipper::Execute(::UnityEngine::Rendering::Universal::ClipType clipType, ::UnityEngine::Rendering::Universal::PolyTree* polytree,
                                                                ::UnityEngine::Rendering::Universal::PolyFillType subjFillType, ::UnityEngine::Rendering::Universal::PolyFillType clipFillType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ClipType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clipType, polytree, subjFillType, clipFillType);
}
inline void UnityEngine::Rendering::Universal::Clipper::FixHoleLinkage(::UnityEngine::Rendering::Universal::OutRec* outRec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixHoleLinkage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outRec);
}
inline bool UnityEngine::Rendering::Universal::Clipper::ExecuteInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "ExecuteInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::DisposeAllPolyPts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "DisposeAllPolyPts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::AddJoin(::UnityEngine::Rendering::Universal::OutPt* Op1, ::UnityEngine::Rendering::Universal::OutPt* Op2,
                                                                ::UnityEngine::Rendering::Universal::IntPoint OffPt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddJoin", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Op1, Op2, OffPt);
}
inline void UnityEngine::Rendering::Universal::Clipper::AddGhostJoin(::UnityEngine::Rendering::Universal::OutPt* Op, ::UnityEngine::Rendering::Universal::IntPoint OffPt) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddGhostJoin", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Op, OffPt);
}
inline void UnityEngine::Rendering::Universal::Clipper::InsertLocalMinimaIntoAEL(int64_t botY) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "InsertLocalMinimaIntoAEL",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, botY);
}
inline void UnityEngine::Rendering::Universal::Clipper::InsertEdgeIntoAEL(::UnityEngine::Rendering::Universal::TEdge* edge, ::UnityEngine::Rendering::Universal::TEdge* startEdge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "InsertEdgeIntoAEL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edge, startEdge);
}
inline bool UnityEngine::Rendering::Universal::Clipper::E2InsertsBeforeE1(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "E2InsertsBeforeE1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e1, e2);
}
inline bool UnityEngine::Rendering::Universal::Clipper::IsEvenOddFillType(::UnityEngine::Rendering::Universal::TEdge* edge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsEvenOddFillType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, edge);
}
inline bool UnityEngine::Rendering::Universal::Clipper::IsEvenOddAltFillType(::UnityEngine::Rendering::Universal::TEdge* edge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsEvenOddAltFillType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, edge);
}
inline bool UnityEngine::Rendering::Universal::Clipper::IsContributing(::UnityEngine::Rendering::Universal::TEdge* edge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsContributing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, edge);
}
inline void UnityEngine::Rendering::Universal::Clipper::SetWindingCount(::UnityEngine::Rendering::Universal::TEdge* edge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SetWindingCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edge);
}
inline void UnityEngine::Rendering::Universal::Clipper::AddEdgeToSEL(::UnityEngine::Rendering::Universal::TEdge* edge) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddEdgeToSEL", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edge);
}
inline bool UnityEngine::Rendering::Universal::Clipper::PopEdgeFromSEL(ByRef<::UnityEngine::Rendering::Universal::TEdge*> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PopEdgeFromSEL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::TEdge*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::Clipper::CopyAELToSEL() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "CopyAELToSEL", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::SwapPositionsInSEL(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapPositionsInSEL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edge1, edge2);
}
inline void UnityEngine::Rendering::Universal::Clipper::AddLocalMaxPoly(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2,
                                                                        ::UnityEngine::Rendering::Universal::IntPoint pt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddLocalMaxPoly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e1, e2, pt);
}
inline ::UnityEngine::Rendering::Universal::OutPt* UnityEngine::Rendering::Universal::Clipper::AddLocalMinPoly(::UnityEngine::Rendering::Universal::TEdge* e1,
                                                                                                               ::UnityEngine::Rendering::Universal::TEdge* e2,
                                                                                                               ::UnityEngine::Rendering::Universal::IntPoint pt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddLocalMinPoly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutPt*, false>(this, ___internal_method, e1, e2, pt);
}
inline ::UnityEngine::Rendering::Universal::OutPt* UnityEngine::Rendering::Universal::Clipper::AddOutPt(::UnityEngine::Rendering::Universal::TEdge* e,
                                                                                                        ::UnityEngine::Rendering::Universal::IntPoint pt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddOutPt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutPt*, false>(this, ___internal_method, e, pt);
}
inline ::UnityEngine::Rendering::Universal::OutPt* UnityEngine::Rendering::Universal::Clipper::GetLastOutPt(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetLastOutPt", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutPt*, false>(this, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::Clipper::SwapPoints(ByRef<::UnityEngine::Rendering::Universal::IntPoint> pt1, ByRef<::UnityEngine::Rendering::Universal::IntPoint> pt2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapPoints", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::IntPoint>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::IntPoint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pt1, pt2);
}
inline bool UnityEngine::Rendering::Universal::Clipper::HorzSegmentsOverlap(int64_t seg1a, int64_t seg1b, int64_t seg2a, int64_t seg2b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "HorzSegmentsOverlap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, seg1a, seg1b, seg2a, seg2b);
}
inline void UnityEngine::Rendering::Universal::Clipper::SetHoleState(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::OutRec* outRec) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SetHoleState", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, outRec);
}
inline double_t UnityEngine::Rendering::Universal::Clipper::GetDx(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetDx", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, pt1, pt2);
}
inline bool UnityEngine::Rendering::Universal::Clipper::FirstIsBottomPt(::UnityEngine::Rendering::Universal::OutPt* btmPt1, ::UnityEngine::Rendering::Universal::OutPt* btmPt2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FirstIsBottomPt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, btmPt1, btmPt2);
}
inline ::UnityEngine::Rendering::Universal::OutPt* UnityEngine::Rendering::Universal::Clipper::GetBottomPt(::UnityEngine::Rendering::Universal::OutPt* pp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetBottomPt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutPt*, false>(this, ___internal_method, pp);
}
inline ::UnityEngine::Rendering::Universal::OutRec* UnityEngine::Rendering::Universal::Clipper::GetLowermostRec(::UnityEngine::Rendering::Universal::OutRec* outRec1,
                                                                                                                ::UnityEngine::Rendering::Universal::OutRec* outRec2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetLowermostRec", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutRec*, false>(this, ___internal_method, outRec1, outRec2);
}
inline bool UnityEngine::Rendering::Universal::Clipper::OutRec1RightOfOutRec2(::UnityEngine::Rendering::Universal::OutRec* outRec1, ::UnityEngine::Rendering::Universal::OutRec* outRec2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "OutRec1RightOfOutRec2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, outRec1, outRec2);
}
inline ::UnityEngine::Rendering::Universal::OutRec* UnityEngine::Rendering::Universal::Clipper::GetOutRec(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetOutRec",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutRec*, false>(this, ___internal_method, idx);
}
inline void UnityEngine::Rendering::Universal::Clipper::AppendPolygon(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AppendPolygon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e1, e2);
}
inline void UnityEngine::Rendering::Universal::Clipper::ReversePolyPtLinks(::UnityEngine::Rendering::Universal::OutPt* pp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ReversePolyPtLinks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pp);
}
inline void UnityEngine::Rendering::Universal::Clipper::SwapSides(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapSides", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, edge1, edge2);
}
inline void UnityEngine::Rendering::Universal::Clipper::SwapPolyIndexes(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SwapPolyIndexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, edge1, edge2);
}
inline void UnityEngine::Rendering::Universal::Clipper::IntersectEdges(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2,
                                                                       ::UnityEngine::Rendering::Universal::IntPoint pt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IntersectEdges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e1, e2, pt);
}
inline void UnityEngine::Rendering::Universal::Clipper::DeleteFromSEL(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DeleteFromSEL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::Clipper::ProcessHorizontals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "ProcessHorizontals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::GetHorzDirection(::UnityEngine::Rendering::Universal::TEdge* HorzEdge, ByRef<::UnityEngine::Rendering::Universal::Direction> Dir,
                                                                         ByRef<int64_t> Left, ByRef<int64_t> Right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetHorzDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Direction>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, HorzEdge, Dir, Left, Right);
}
inline void UnityEngine::Rendering::Universal::Clipper::ProcessHorizontal(::UnityEngine::Rendering::Universal::TEdge* horzEdge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ProcessHorizontal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, horzEdge);
}
inline ::UnityEngine::Rendering::Universal::TEdge* UnityEngine::Rendering::Universal::Clipper::GetNextInAEL(::UnityEngine::Rendering::Universal::TEdge* e,
                                                                                                            ::UnityEngine::Rendering::Universal::Direction Direction) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetNextInAEL", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TEdge*, false>(this, ___internal_method, e, Direction);
}
inline bool UnityEngine::Rendering::Universal::Clipper::IsMinima(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsMinima", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline bool UnityEngine::Rendering::Universal::Clipper::IsMaxima(::UnityEngine::Rendering::Universal::TEdge* e, double_t Y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsMaxima", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e, Y);
}
inline bool UnityEngine::Rendering::Universal::Clipper::IsIntermediate(::UnityEngine::Rendering::Universal::TEdge* e, double_t Y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IsIntermediate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e, Y);
}
inline ::UnityEngine::Rendering::Universal::TEdge* UnityEngine::Rendering::Universal::Clipper::GetMaximaPair(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetMaximaPair", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TEdge*, false>(this, ___internal_method, e);
}
inline ::UnityEngine::Rendering::Universal::TEdge* UnityEngine::Rendering::Universal::Clipper::GetMaximaPairEx(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetMaximaPairEx", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TEdge*, false>(this, ___internal_method, e);
}
inline bool UnityEngine::Rendering::Universal::Clipper::ProcessIntersections(int64_t topY) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ProcessIntersections",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, topY);
}
inline void UnityEngine::Rendering::Universal::Clipper::BuildIntersectList(int64_t topY) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "BuildIntersectList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topY);
}
inline bool UnityEngine::Rendering::Universal::Clipper::EdgesAdjacent(::UnityEngine::Rendering::Universal::IntersectNode* inode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "EdgesAdjacent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inode);
}
inline int32_t UnityEngine::Rendering::Universal::Clipper::IntersectNodeSort(::UnityEngine::Rendering::Universal::IntersectNode* node1, ::UnityEngine::Rendering::Universal::IntersectNode* node2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IntersectNodeSort", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntersectNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, node1, node2);
}
inline bool UnityEngine::Rendering::Universal::Clipper::FixupIntersectionOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "FixupIntersectionOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::ProcessIntersectList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "ProcessIntersectList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t UnityEngine::Rendering::Universal::Clipper::Round(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Round", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
inline int64_t UnityEngine::Rendering::Universal::Clipper::TopX(::UnityEngine::Rendering::Universal::TEdge* edge, int64_t currentY) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "TopX", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, edge, currentY);
}
inline void UnityEngine::Rendering::Universal::Clipper::IntersectPoint(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2,
                                                                       ByRef<::UnityEngine::Rendering::Universal::IntPoint> ip) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "IntersectPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::IntPoint>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edge1, edge2, ip);
}
inline void UnityEngine::Rendering::Universal::Clipper::ProcessEdgesAtTopOfScanbeam(int64_t topY) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ProcessEdgesAtTopOfScanbeam",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topY);
}
inline void UnityEngine::Rendering::Universal::Clipper::DoMaxima(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DoMaxima", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void
UnityEngine::Rendering::Universal::Clipper::ReversePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polys) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ReversePaths", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                     ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, polys);
}
inline bool UnityEngine::Rendering::Universal::Clipper::Orientation(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Orientation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, poly);
}
inline int32_t UnityEngine::Rendering::Universal::Clipper::PointCount(::UnityEngine::Rendering::Universal::OutPt* pts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointCount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pts);
}
inline void
UnityEngine::Rendering::Universal::Clipper::BuildResult(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polyg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "BuildResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, polyg);
}
inline void UnityEngine::Rendering::Universal::Clipper::BuildResult2(::UnityEngine::Rendering::Universal::PolyTree* polytree) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "BuildResult2", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, polytree);
}
inline void UnityEngine::Rendering::Universal::Clipper::FixupOutPolyline(::UnityEngine::Rendering::Universal::OutRec* outrec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupOutPolyline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outrec);
}
inline void UnityEngine::Rendering::Universal::Clipper::FixupOutPolygon(::UnityEngine::Rendering::Universal::OutRec* outRec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupOutPolygon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outRec);
}
inline ::UnityEngine::Rendering::Universal::OutPt* UnityEngine::Rendering::Universal::Clipper::DupOutPt(::UnityEngine::Rendering::Universal::OutPt* outPt, bool InsertAfter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DupOutPt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutPt*, false>(this, ___internal_method, outPt, InsertAfter);
}
inline bool UnityEngine::Rendering::Universal::Clipper::GetOverlap(int64_t a1, int64_t a2, int64_t b1, int64_t b2, ByRef<int64_t> Left, ByRef<int64_t> Right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "GetOverlap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a1, a2, b1, b2, Left, Right);
}
inline bool UnityEngine::Rendering::Universal::Clipper::JoinHorz(::UnityEngine::Rendering::Universal::OutPt* op1, ::UnityEngine::Rendering::Universal::OutPt* op1b,
                                                                 ::UnityEngine::Rendering::Universal::OutPt* op2, ::UnityEngine::Rendering::Universal::OutPt* op2b,
                                                                 ::UnityEngine::Rendering::Universal::IntPoint Pt, bool DiscardLeft) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "JoinHorz", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, op1, op1b, op2, op2b, Pt, DiscardLeft);
}
inline bool UnityEngine::Rendering::Universal::Clipper::JoinPoints(::UnityEngine::Rendering::Universal::Join* j, ::UnityEngine::Rendering::Universal::OutRec* outRec1,
                                                                   ::UnityEngine::Rendering::Universal::OutRec* outRec2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "JoinPoints", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Join*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, j, outRec1, outRec2);
}
inline int32_t UnityEngine::Rendering::Universal::Clipper::PointInPolygon(::UnityEngine::Rendering::Universal::IntPoint pt,
                                                                          ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointInPolygon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pt, path);
}
inline int32_t UnityEngine::Rendering::Universal::Clipper::PointInPolygon(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::OutPt* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointInPolygon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pt, op);
}
inline bool UnityEngine::Rendering::Universal::Clipper::Poly2ContainsPoly1(::UnityEngine::Rendering::Universal::OutPt* outPt1, ::UnityEngine::Rendering::Universal::OutPt* outPt2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Poly2ContainsPoly1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, outPt1, outPt2);
}
inline void UnityEngine::Rendering::Universal::Clipper::FixupFirstLefts1(::UnityEngine::Rendering::Universal::OutRec* OldOutRec, ::UnityEngine::Rendering::Universal::OutRec* NewOutRec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupFirstLefts1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OldOutRec, NewOutRec);
}
inline void UnityEngine::Rendering::Universal::Clipper::FixupFirstLefts2(::UnityEngine::Rendering::Universal::OutRec* innerOutRec, ::UnityEngine::Rendering::Universal::OutRec* outerOutRec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupFirstLefts2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerOutRec, outerOutRec);
}
inline void UnityEngine::Rendering::Universal::Clipper::FixupFirstLefts3(::UnityEngine::Rendering::Universal::OutRec* OldOutRec, ::UnityEngine::Rendering::Universal::OutRec* NewOutRec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "FixupFirstLefts3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, OldOutRec, NewOutRec);
}
inline ::UnityEngine::Rendering::Universal::OutRec* UnityEngine::Rendering::Universal::Clipper::ParseFirstLeft(::UnityEngine::Rendering::Universal::OutRec* FirstLeft) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ParseFirstLeft", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutRec*, false>(nullptr, ___internal_method, FirstLeft);
}
inline void UnityEngine::Rendering::Universal::Clipper::JoinCommonEdges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "JoinCommonEdges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Clipper::UpdateOutPtIdxs(::UnityEngine::Rendering::Universal::OutRec* outrec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "UpdateOutPtIdxs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outrec);
}
inline void UnityEngine::Rendering::Universal::Clipper::DoSimplePolygons() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(),
                                                                             "DoSimplePolygons", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline double_t UnityEngine::Rendering::Universal::Clipper::Area(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Area", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, poly);
}
inline double_t UnityEngine::Rendering::Universal::Clipper::Area(::UnityEngine::Rendering::Universal::OutRec* outRec) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Area", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutRec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, outRec);
}
inline double_t UnityEngine::Rendering::Universal::Clipper::Area(::UnityEngine::Rendering::Universal::OutPt* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Area", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, op);
}
/// @param fillType: ::UnityEngine::Rendering::Universal::PolyFillType (default: static_cast<int32_t>(0x0))
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::SimplifyPolygon(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly,
                                                            ::UnityEngine::Rendering::Universal::PolyFillType fillType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SimplifyPolygon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, poly, fillType);
}
/// @param fillType: ::UnityEngine::Rendering::Universal::PolyFillType (default: static_cast<int32_t>(0x0))
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::SimplifyPolygons(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polys,
                                                             ::UnityEngine::Rendering::Universal::PolyFillType fillType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SimplifyPolygons", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyFillType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, polys, fillType);
}
inline double_t UnityEngine::Rendering::Universal::Clipper::DistanceSqrd(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DistanceSqrd", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, pt1, pt2);
}
inline double_t UnityEngine::Rendering::Universal::Clipper::DistanceFromLineSqrd(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::IntPoint ln1,
                                                                                 ::UnityEngine::Rendering::Universal::IntPoint ln2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "DistanceFromLineSqrd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, pt, ln1, ln2);
}
inline bool UnityEngine::Rendering::Universal::Clipper::SlopesNearCollinear(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2,
                                                                            ::UnityEngine::Rendering::Universal::IntPoint pt3, double_t distSqrd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "SlopesNearCollinear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pt1, pt2, pt3, distSqrd);
}
inline bool UnityEngine::Rendering::Universal::Clipper::PointsAreClose(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2, double_t distSqrd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PointsAreClose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pt1, pt2, distSqrd);
}
inline ::UnityEngine::Rendering::Universal::OutPt* UnityEngine::Rendering::Universal::Clipper::ExcludeOp(::UnityEngine::Rendering::Universal::OutPt* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ExcludeOp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutPt*, false>(nullptr, ___internal_method, op);
}
/// @param distance: double_t (default: 1.415)
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
UnityEngine::Rendering::Universal::Clipper::CleanPolygon(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, double_t distance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "CleanPolygon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, false>(nullptr, ___internal_method, path, distance);
}
/// @param distance: double_t (default: 1.415)
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::CleanPolygons(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polys,
                                                          double_t distance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "CleanPolygons", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, polys, distance);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::Minkowski(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pattern,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, bool IsSum, bool IsClosed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "Minkowski", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, pattern, path, IsSum, IsClosed);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::MinkowskiSum(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pattern,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, bool pathIsClosed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "MinkowskiSum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, pattern, path, pathIsClosed);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
UnityEngine::Rendering::Universal::Clipper::TranslatePath(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path,
                                                          ::UnityEngine::Rendering::Universal::IntPoint delta) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "TranslatePath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, false>(nullptr, ___internal_method, path, delta);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::MinkowskiSum(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pattern,
                                                         ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* paths,
                                                         bool pathIsClosed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "MinkowskiSum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, pattern, paths, pathIsClosed);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::MinkowskiDiff(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly1,
                                                          ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "MinkowskiDiff", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, poly1, poly2);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::PolyTreeToPaths(::UnityEngine::Rendering::Universal::PolyTree* polytree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "PolyTreeToPaths", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, polytree);
}
inline void
UnityEngine::Rendering::Universal::Clipper::AddPolyNodeToPaths(::UnityEngine::Rendering::Universal::PolyNode* polynode, ::UnityEngine::Rendering::Universal::__Clipper__NodeType nt,
                                                               ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* paths) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "AddPolyNodeToPaths", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Clipper__NodeType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, polynode, nt, paths);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::OpenPathsFromPolyTree(::UnityEngine::Rendering::Universal::PolyTree* polytree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "OpenPathsFromPolyTree", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, polytree);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
UnityEngine::Rendering::Universal::Clipper::ClosedPathsFromPolyTree(::UnityEngine::Rendering::Universal::PolyTree* polytree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Clipper*>::get(), "ClosedPathsFromPolyTree", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyTree*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, false>(
      nullptr, ___internal_method, polytree);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Clipper::Clipper() {}
