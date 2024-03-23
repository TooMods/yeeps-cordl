#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeCellIndices_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeCellIndices_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData.Pack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData::*)(
    ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>)>(&::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData::Pack)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23c06d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData>::get(), "Pack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData::Pack(ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> vals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData>::get(), "Pack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vals);
}
// Ctor Parameters [CppParam { name: "minLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData::__ProbeCellIndices__IndexMetaData(::UnityEngine::Vector3Int minLocalIdx, ::UnityEngine::Vector3Int maxLocalIdx,
                                                                                                                       int32_t firstChunkIndex, int32_t minSubdiv) noexcept {
  this->minLocalIdx = minLocalIdx;
  this->maxLocalIdx = maxLocalIdx;
  this->firstChunkIndex = firstChunkIndex;
  this->minSubdiv = minSubdiv;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData::__ProbeCellIndices__IndexMetaData() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                               "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "set_estimatedVMemCost",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.GetCellIndexDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::GetCellIndexDimension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c0330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                               "GetCellIndexDimension", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.GetCellMinPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::GetCellMinPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c0340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                               "GetCellMinPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.GetFlatIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)(::UnityEngine::Vector3Int)>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::GetFlatIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23c0350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "GetFlatIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, int32_t)>(&::UnityEngine::Experimental::Rendering::ProbeCellIndices::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x23c0364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.GetFlatIdxForCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)(::UnityEngine::Vector3Int)>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::GetFlatIdxForCell)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c053c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "GetFlatIdxForCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.AddCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)(
    int32_t, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(&::UnityEngine::Experimental::Rendering::ProbeCellIndices::AddCell)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x23c0568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "AddCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.MarkCellAsUnloaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::MarkCellAsUnloaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23c07dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "MarkCellAsUnloaded",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.PushComputeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::PushComputeData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c083c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                               "PushComputeData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)(
    ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>)>(&::UnityEngine::Experimental::Rendering::ProbeCellIndices::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23c0868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeCellIndices.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeCellIndices::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeCellIndices::Cleanup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23c089c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get__estimatedVMemCost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get__estimatedVMemCost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____estimatedVMemCost_k__BackingField = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_IndexOfIndicesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_IndexOfIndicesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesBuffer;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_set_m_IndexOfIndicesBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexOfIndicesBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_IndexOfIndicesData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesData;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_IndexOfIndicesData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOfIndicesData;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_set_m_IndexOfIndicesData(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexOfIndicesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_CellCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellCount;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_CellCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellCount;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_set_m_CellCount(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CellCount = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_CellMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellMin;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_CellMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellMin;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_set_m_CellMin(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CellMin = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_CellSizeInMinBricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellSizeInMinBricks;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_CellSizeInMinBricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellSizeInMinBricks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_set_m_CellSizeInMinBricks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CellSizeInMinBricks = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_NeedUpdateComputeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateComputeBuffer;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_get_m_NeedUpdateComputeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateComputeBuffer;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeCellIndices::__cordl_internal_set_m_NeedUpdateComputeBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedUpdateComputeBuffer = value;
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeCellIndices::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                             "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeCellIndices::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "set_estimatedVMemCost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3Int UnityEngine::Experimental::Rendering::ProbeCellIndices::GetCellIndexDimension() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                             "GetCellIndexDimension", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::Experimental::Rendering::ProbeCellIndices::GetCellMinPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                             "GetCellMinPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeCellIndices::GetFlatIndex(::UnityEngine::Vector3Int normalizedPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "GetFlatIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, normalizedPos);
}
inline ::UnityEngine::Experimental::Rendering::ProbeCellIndices* UnityEngine::Experimental::Rendering::ProbeCellIndices::New_ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax,
                                                                                                                                  int32_t cellSizeInMinBricks) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>(cellMin, cellMax, cellSizeInMinBricks));
}
inline void UnityEngine::Experimental::Rendering::ProbeCellIndices::_ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax, int32_t cellSizeInMinBricks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellMin, cellMax, cellSizeInMinBricks);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeCellIndices::GetFlatIdxForCell(::UnityEngine::Vector3Int cellPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "GetFlatIdxForCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cellPosition);
}
inline void UnityEngine::Experimental::Rendering::ProbeCellIndices::AddCell(int32_t cellFlatIdx, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellUpdateInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "AddCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellFlatIdx, cellUpdateInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeCellIndices::MarkCellAsUnloaded(int32_t cellFlatIdx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "MarkCellAsUnloaded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellFlatIdx);
}
inline void UnityEngine::Experimental::Rendering::ProbeCellIndices::PushComputeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                             "PushComputeData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeCellIndices::GetRuntimeResources(ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources> rr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rr);
}
inline void UnityEngine::Experimental::Rendering::ProbeCellIndices::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeCellIndices*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeCellIndices::ProbeCellIndices() {}
