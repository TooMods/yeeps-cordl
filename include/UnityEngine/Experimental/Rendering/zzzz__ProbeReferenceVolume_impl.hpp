#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeCellIndices_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeAsset_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeDebug_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeShadingParameters_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSystemParameters_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_position(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_bricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bricks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*> const&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_bricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bricks;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_bricks(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bricks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_probePositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probePositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_probePositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probePositions;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_probePositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probePositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*>&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_sh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sh;
}
constexpr ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> const&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_sh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sh;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_sh(
    ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_validity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validity;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_validity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validity;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_validity(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_minSubdiv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minSubdiv;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_minSubdiv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minSubdiv;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_minSubdiv(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minSubdiv = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_flatIdxInCellIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatIdxInCellIndices;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_flatIdxInCellIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatIdxInCellIndices;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_flatIdxInCellIndices(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flatIdxInCellIndices = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_loaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loaded;
}
constexpr bool const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_get_loaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loaded;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__cordl_internal_set_loaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loaded = value;
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell::__ProbeReferenceVolume__Cell() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c1538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::__cordl_internal_get_chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> const&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::__cordl_internal_get_chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::__cordl_internal_set_chunks(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo::__ProbeReferenceVolume__CellChunkInfo() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::*)(::System::Object*)>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::CompareTo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23c6bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>::get(), "CompareTo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c25c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable"
constexpr UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr ::StringW& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_sourceAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceAsset;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_sourceAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceAsset;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_set_sourceAsset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sourceAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_cell() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cell;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*> const&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_cell() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cell;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_set_cell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cell)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_distanceToCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToCamera;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_distanceToCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToCamera;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_set_distanceToCamera(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceToCamera = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__cordl_internal_set_position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
inline int32_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::CompareTo(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>::get(), "CompareTo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo::__ProbeReferenceVolume__CellSortInfo() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)(
    ::UnityEngine::Matrix4x4, float_t, float_t)>(&::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23c6c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23c6d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume)>(&::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23c6db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume.CalculateAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::CalculateAABB)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23c6e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), "CalculateAABB",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume.CalculateCenterAndSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)(
    ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::CalculateCenterAndSize)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23c6f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(),
                                                 "CalculateCenterAndSize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume.Transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)(::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::Transform)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23c7114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), "Transform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::ToString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x23c71c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume)>(&::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::Equals)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23c73e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>"
constexpr UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::operator ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>"
constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>*
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::i___System__IEquatable_1___UnityEngine__Experimental__Rendering____ProbeReferenceVolume__Volume_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::_ctor(::UnityEngine::Matrix4x4 trs, float_t maxSubdivision, float_t minSubdivision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trs, maxSubdivision, minSubdivision);
}
/// @param maxSubdivision: float_t (default: 1.0)
/// @param minSubdivision: float_t (default: 0.0)
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::_ctor(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y, ::UnityEngine::Vector3 Z,
                                                                                        float_t maxSubdivision, float_t minSubdivision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, corner, X, Y, Z, maxSubdivision, minSubdivision);
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::_ctor(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume copy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, copy);
}
inline ::UnityEngine::Bounds UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::CalculateAABB() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), "CalculateAABB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::CalculateCenterAndSize(ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(),
                                               "CalculateCenterAndSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, center, size);
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::Transform(::UnityEngine::Matrix4x4 trs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), "Transform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trs);
}
inline ::StringW UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::Equals(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "corner", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "X", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Y", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Z", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "maxSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::__ProbeReferenceVolume__Volume(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y,
                                                                                                                 ::UnityEngine::Vector3 Z, float_t maxSubdivisionMultiplier,
                                                                                                                 float_t minSubdivisionMultiplier) noexcept {
  this->corner = corner;
  this->X = X;
  this->Y = Y;
  this->Z = Z;
  this->maxSubdivisionMultiplier = maxSubdivisionMultiplier;
  this->minSubdivisionMultiplier = minSubdivisionMultiplier;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume::__ProbeReferenceVolume__Volume() {}
// Ctor Parameters [CppParam { name: "refSpaceToWS", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "posWS", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform::__ProbeReferenceVolume__RefVolTransform(::UnityEngine::Matrix4x4 refSpaceToWS, ::UnityEngine::Vector3 posWS,
                                                                                                                                   ::UnityEngine::Quaternion rot, float_t scale) noexcept {
  this->refSpaceToWS = refSpaceToWS;
  this->posWS = posWS;
  this->rot = rot;
  this->scale = scale;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform::__ProbeReferenceVolume__RefVolTransform() {}
// Ctor Parameters [CppParam { name: "index", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cellIndices", ty: "::UnityEngine::ComputeBuffer*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "L0_L1rx", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "L1_G_ry", ty:
// "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "L1_B_rz", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "L2_0", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "L2_1", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "L2_2", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "L2_3", ty:
// "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources::__ProbeReferenceVolume__RuntimeResources(
    ::UnityEngine::ComputeBuffer* index, ::UnityEngine::ComputeBuffer* cellIndices, ::UnityW<::UnityEngine::Texture3D> L0_L1rx, ::UnityW<::UnityEngine::Texture3D> L1_G_ry,
    ::UnityW<::UnityEngine::Texture3D> L1_B_rz, ::UnityW<::UnityEngine::Texture3D> L2_0, ::UnityW<::UnityEngine::Texture3D> L2_1, ::UnityW<::UnityEngine::Texture3D> L2_2,
    ::UnityW<::UnityEngine::Texture3D> L2_3) noexcept {
  this->index = index;
  this->cellIndices = cellIndices;
  this->L0_L1rx = L0_L1rx;
  this->L1_G_ry = L1_G_ry;
  this->L1_B_rz = L1_B_rz;
  this->L2_0 = L2_0;
  this->L2_1 = L2_1;
  this->L2_2 = L2_2;
  this->L2_3 = L2_3;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources::__ProbeReferenceVolume__RuntimeResources() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c74e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId.Invalidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::Invalidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c74f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "Invalidate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId)>(
        &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23becd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId)>(
        &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c7500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::*)(::System::Object*)>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23c750c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c75ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), 2));
    return ___internal_method;
  }
};
inline bool UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::Invalidate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "Invalidate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::op_Equality(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId lhs,
                                                                                             ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::op_Inequality(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId lhs,
                                                                                               ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::__ProbeReferenceVolume__RegId(int32_t id) noexcept {
  this->id = id;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId::__ProbeReferenceVolume__RegId() {}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput::__ProbeReferenceVolume__ExtraDataActionInput() {}
// Ctor Parameters [CppParam { name: "pendingMinCellPosition", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "pendingMaxCellPosition", ty:
// "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo::__ProbeReferenceVolume__InitInfo(::UnityEngine::Vector3Int pendingMinCellPosition,
                                                                                                                     ::UnityEngine::Vector3Int pendingMaxCellPosition) noexcept {
  this->pendingMinCellPosition = pendingMinCellPosition;
  this->pendingMaxCellPosition = pendingMaxCellPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo::__ProbeReferenceVolume__InitInfo() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c68a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_probeBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeBuffers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*> const&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_probeBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeBuffers;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_set_probeBuffers(
    ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_props() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___props;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*> const&
UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_props() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___props;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_set_props(
    ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___props)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Hash128& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_cellHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellHash;
}
constexpr ::UnityEngine::Hash128 const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_cellHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellHash;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_set_cellHash(::UnityEngine::Hash128 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellHash = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_cellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_get_cellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellPosition;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__cordl_internal_set_cellPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellPosition = value;
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes::__ProbeReferenceVolume__CellInstancedDebugProbes() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c7658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c._RegisterDebug_b__119_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c7660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                                 "<RegisterDebug>b__119_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c._RegisterDebug_b__119_15
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_15)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c7668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                                 "<RegisterDebug>b__119_15", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c._RegisterDebug_b__119_16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c7674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                                 "<RegisterDebug>b__119_16", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c._RegisterDebug_b__119_21
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_21)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c767c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                                 "<RegisterDebug>b__119_21", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c._RegisterDebug_b__119_24
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_24)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c7684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                                 "<RegisterDebug>b__119_24", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c._RegisterDebug_b__119_25
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_25)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23c768c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                                 "<RegisterDebug>b__119_25", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::setStaticF___9(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>(value));
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::setStaticF___9__119_6(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__119_6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::getStaticF___9__119_6() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__119_6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::setStaticF___9__119_15(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__119_15",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::getStaticF___9__119_15() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__119_15",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::setStaticF___9__119_16(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__119_16",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::getStaticF___9__119_16() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__119_16",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::setStaticF___9__119_21(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__119_21",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::getStaticF___9__119_21() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__119_21",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::setStaticF___9__119_24(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__119_24",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::getStaticF___9__119_24() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__119_24",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::setStaticF___9__119_25(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__119_25",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::getStaticF___9__119_25() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__119_25",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get>();
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c* UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_6() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                               "<RegisterDebug>b__119_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_15() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                               "<RegisterDebug>b__119_15", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_16() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                               "<RegisterDebug>b__119_16", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_21() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                               "<RegisterDebug>b__119_21", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_24() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                               "<RegisterDebug>b__119_24", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::_RegisterDebug_b__119_25() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*>::get(),
                                               "<RegisterDebug>b__119_25", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c::__ProbeReferenceVolume____c() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.InvalidateAllCellRefs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::InvalidateAllCellRefs)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23c0900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "InvalidateAllCellRefs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_isInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.get_enabledBySRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_enabledBySRP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_enabledBySRP",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.get_shBands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands (
    ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_shBands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_shBands",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.get_memoryBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget (
    ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_memoryBudget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_memoryBudget",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* (*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23c0970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_instance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.SetNumberOfCellsLoadedPerFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetNumberOfCellsLoadedPerFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c09c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetNumberOfCellsLoadedPerFrame",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ByRef<::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters>)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::Initialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23c09d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.SetEnableStateFromSRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetEnableStateFromSRP)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c0dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetEnableStateFromSRP",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.ForceSHBand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ForceSHBand)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23c0dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ForceSHBand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c0e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetVideoMemoryCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetVideoMemoryCost)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23c0f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetVideoMemoryCost",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.RemoveCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RemoveCell)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x23c0fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RemoveCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.AddCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddCell)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x23c13b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.CheckCompatibilityWithCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CheckCompatibilityWithCollection)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x23c1540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CheckCompatibilityWithCollection",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.AddPendingAssetLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddPendingAssetLoading)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x23c17b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddPendingAssetLoading",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.AddPendingAssetRemoval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddPendingAssetRemoval)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23c1d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddPendingAssetRemoval",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.RemovePendingAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RemovePendingAsset)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x23c1de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RemovePendingAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.PerformPendingIndexChangeAndInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingIndexChangeAndInit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23c20a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "PerformPendingIndexChangeAndInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.SetMinBrickAndMaxSubdiv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(float_t, int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetMinBrickAndMaxSubdiv)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23c20e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetMinBrickAndMaxSubdiv",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.LoadAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::LoadAsset)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x23c231c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "LoadAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.PerformPendingLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingLoading)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x23c25d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "PerformPendingLoading",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.PerformPendingDeletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingDeletion)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x23c290c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "PerformPendingDeletion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetNumberOfBricksAtSubdiv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ByRef<::UnityEngine::Vector3Int>, ByRef<::UnityEngine::Vector3Int>)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetNumberOfBricksAtSubdiv)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x23c2ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetNumberOfBricksAtSubdiv",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetCellIndexUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetCellIndexUpdate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x23c307c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetCellIndexUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.LoadPendingCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::LoadPendingCells)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x23c31d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "LoadPendingCells",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.PerformPendingOperations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingOperations)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23c389c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "PerformPendingOperations",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.InitProbeReferenceVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    int32_t, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::InitProbeReferenceVolume)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23c0c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "InitProbeReferenceVolume",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.SortPendingCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SortPendingCells)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x23c38d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SortPendingCells", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_ctor)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x23c3a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources (
    ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetRuntimeResources)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23c3fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetRuntimeResources",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.SetTRS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetTRS)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23c21a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetTRS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.SetMaxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetMaxSubdivision)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23c22ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetMaxSubdivision",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CellSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23bd32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CellSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.BrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::BrickSize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23c4050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "BrickSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.MinBrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::MinBrickSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c3074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "MinBrickSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.MaxBrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::MaxBrickSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c25cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "MaxBrickSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetRefSpaceToWS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetRefSpaceToWS)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c40e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetRefSpaceToWS",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform (
    ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c4104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetTransform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c4114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetMaxSubdivision",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23c411c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetMaxSubdivision",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.GetDistanceBetweenProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetDistanceBetweenProbes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23c4194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetDistanceBetweenProbes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.MinDistanceBetweenProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::MinDistanceBetweenProbes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c41ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "MinDistanceBetweenProbes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.DataHasBeenLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::DataHasBeenLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c41c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "DataHasBeenLoaded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::Clear)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23c41d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.AddBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
        ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*, ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation,
        ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo,
        ByRef<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>)>(
        &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddBricks)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x23c3570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.ReleaseBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId)>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ReleaseBricks)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x23c11ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ReleaseBricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.UpdateConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters)>(
        &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::UpdateConstantBuffer)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x23c42ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "UpdateConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.CleanupLoadedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CleanupLoadedData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23c0e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CleanupLoadedData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.get_debugDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* (
    ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_debugDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c4468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_debugDisplay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.get_subdivisionDebugColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (
    ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_subdivisionDebugColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c4470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "get_subdivisionDebugColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.RenderDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RenderDebug)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23c4478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RenderDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.InitializeDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Mesh*, ::UnityEngine::Shader*)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::InitializeDebug)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23c0aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "InitializeDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.CleanupDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CleanupDebug)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23c0f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CleanupDebug",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.RegisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RegisterDebug)> {
  constexpr static std::size_t size = 0xfb0;
  constexpr static std::size_t addrs = 0x23c49d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RegisterDebug",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.UnregisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::UnregisterDebug)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23c5980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "UnregisterDebug",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.ShouldCullCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ShouldCullCell)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x23c5a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ShouldCullCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.DrawProbeDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::DrawProbeDebug)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x23c44e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "DrawProbeDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.ClearDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ClearDebugData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23c2020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ClearDebugData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.CreateInstancedProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CreateInstancedProbes)> {
  constexpr static std::size_t size = 0xbd8;
  constexpr static std::size_t addrs = 0x23c5cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CreateInstancedProbes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume.OnClearLightingdata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::OnClearLightingdata)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c68b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "OnClearLightingdata",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23c6930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23c696c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_4)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c698c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_5)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c69a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_5",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_7)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c69c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_7", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23c69e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_8",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_9)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_9", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_10)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_10",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_11)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_11", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_12)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_12",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_13
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_13)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_13", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_14
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_14)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_14",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_17
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_17)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_17", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_18
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_18)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_18",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_19
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_19)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_19", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_20
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_20)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_20",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_22
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_22)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c6b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                                 "<RegisterDebug>b__119_22", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume._RegisterDebug_b__119_23
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_23)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23c6b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_23",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IsInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInitialized;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IsInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInitialized;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_IsInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsInitialized = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ID;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ID;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ID = value;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_Transform(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Transform = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MaxSubdivision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubdivision;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MaxSubdivision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubdivision;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_MaxSubdivision(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSubdivision = value;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeBrickPool*& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeBrickPool*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_Pool(::UnityEngine::Experimental::Rendering::ProbeBrickPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeBrickIndex*& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_Index(::UnityEngine::Experimental::Rendering::ProbeBrickIndex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Index)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeCellIndices*& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellIndices;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeCellIndices*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellIndices;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CellIndices(::UnityEngine::Experimental::Rendering::ProbeCellIndices* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CellIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TmpSrcChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TmpSrcChunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TmpSrcChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TmpSrcChunks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TmpSrcChunks(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TmpSrcChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PositionOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionOffsets;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PositionOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionOffsets;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PositionOffsets(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionOffsets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                       ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Registry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Registry;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_Registry(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                 ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Bounds& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CurrGlobalBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrGlobalBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CurrGlobalBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrGlobalBounds;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CurrGlobalBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrGlobalBounds = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_cells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cells;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_cells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cells;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_cells(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ChunkInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ChunkInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkInfo;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ChunkInfo(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ChunkInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_sceneData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_sceneData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneData;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_sceneData(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_retrieveExtraDataAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retrieveExtraDataAction;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_retrieveExtraDataAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retrieveExtraDataAction;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_retrieveExtraDataAction(
    ::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___retrieveExtraDataAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BricksLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BricksLoaded;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BricksLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BricksLoaded;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_BricksLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BricksLoaded = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellToBricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellToBricks;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellToBricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellToBricks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CellToBricks(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CellToBricks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                       ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BricksToCellUpdateInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BricksToCellUpdateInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                                                           ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BricksToCellUpdateInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BricksToCellUpdateInfo;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_BricksToCellUpdateInfo(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BricksToCellUpdateInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingAssetsToBeLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingAssetsToBeLoaded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingAssetsToBeLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingAssetsToBeLoaded;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PendingAssetsToBeLoaded(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PendingAssetsToBeLoaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingAssetsToBeUnloaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingAssetsToBeUnloaded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingAssetsToBeUnloaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingAssetsToBeUnloaded;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PendingAssetsToBeUnloaded(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PendingAssetsToBeUnloaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ActiveAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ActiveAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveAssets;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ActiveAssets(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellsToBeLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellsToBeLoaded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellsToBeLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellsToBeLoaded;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CellsToBeLoaded(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CellsToBeLoaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellRefCounting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellRefCounting;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellRefCounting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellRefCounting;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CellRefCounting(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CellRefCounting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedLoadAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedLoadAsset;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedLoadAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedLoadAsset;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_NeedLoadAsset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedLoadAsset = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeReferenceVolumeInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeReferenceVolumeInit;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeReferenceVolumeInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeReferenceVolumeInit;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ProbeReferenceVolumeInit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeReferenceVolumeInit = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_EnabledBySRP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledBySRP;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_EnabledBySRP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledBySRP;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_EnabledBySRP(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnabledBySRP = value;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingInitInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingInitInfo;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingInitInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingInitInfo;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PendingInitInfo(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingInitInfo = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedsIndexRebuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsIndexRebuild;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedsIndexRebuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsIndexRebuild;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_NeedsIndexRebuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedsIndexRebuild = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_HasChangedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasChangedIndex;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_HasChangedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasChangedIndex;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_HasChangedIndex(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasChangedIndex = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CBShaderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CBShaderID;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CBShaderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CBShaderID;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CBShaderID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CBShaderID = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NumberOfCellsLoadedPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfCellsLoadedPerFrame;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NumberOfCellsLoadedPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfCellsLoadedPerFrame;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_NumberOfCellsLoadedPerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumberOfCellsLoadedPerFrame = value;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MemoryBudget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MemoryBudget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_MemoryBudget(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MemoryBudget = value;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SHBands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SHBands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_SHBands(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SHBands = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_clearAssetsOnVolumeClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearAssetsOnVolumeClear;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_clearAssetsOnVolumeClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearAssetsOnVolumeClear;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_clearAssetsOnVolumeClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearAssetsOnVolumeClear = value;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get__debugDisplay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugDisplay_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get__debugDisplay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugDisplay_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set__debugDisplay_k__BackingField(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugDisplay_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get__subdivisionDebugColors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subdivisionDebugColors_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get__subdivisionDebugColors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subdivisionDebugColors_k__BackingField;
}
constexpr void
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set__subdivisionDebugColors_k__BackingField(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subdivisionDebugColors_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*>&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugItems;
}
constexpr ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugItems;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugItems(
    ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMesh;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMaterial;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellDebugData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellDebugData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellDebugData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellDebugData;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CellDebugData(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CellDebugData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFrustumPlanes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFrustumPlanes;
}
constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFrustumPlanes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFrustumPlanes;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugFrustumPlanes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugFrustumPlanes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_dilationValidtyThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dilationValidtyThreshold;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_dilationValidtyThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dilationValidtyThreshold;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_dilationValidtyThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dilationValidtyThreshold = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume,
                                                       ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>*&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_realtimeSubdivisionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivisionInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>*> const&
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_get_realtimeSubdivisionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivisionInfo;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::__cordl_internal_set_realtimeSubdivisionInfo(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume,
                                                 ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___realtimeSubdivisionInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::setStaticF__instance(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>(value));
}
inline ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* UnityEngine::Experimental::Rendering::ProbeReferenceVolume::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get>();
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::InvalidateAllCellRefs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "InvalidateAllCellRefs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_isInitialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_isInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_enabledBySRP() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_enabledBySRP",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_shBands() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_shBands",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_memoryBudget() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_memoryBudget",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_instance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetNumberOfCellsLoadedPerFrame(int32_t numberOfCells) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetNumberOfCellsLoadedPerFrame",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfCells);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::Initialize(ByRef<::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetEnableStateFromSRP(bool srpEnablesPV) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetEnableStateFromSRP",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srpEnablesPV);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ForceSHBand(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ForceSHBand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shBands);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetVideoMemoryCost() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetVideoMemoryCost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RemoveCell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RemoveCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline void
UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddCell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* chunks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell, chunks);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CheckCompatibilityWithCollection(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CheckCompatibilityWithCollection",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asset, collection);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddPendingAssetLoading(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddPendingAssetLoading", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddPendingAssetRemoval(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddPendingAssetRemoval", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RemovePendingAsset(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RemovePendingAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingIndexChangeAndInit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                               "PerformPendingIndexChangeAndInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetMinBrickAndMaxSubdiv(float_t minBrickSize, int32_t maxSubdiv) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetMinBrickAndMaxSubdiv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minBrickSize, maxSubdiv);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::LoadAsset(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "LoadAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingLoading() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "PerformPendingLoading",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingDeletion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "PerformPendingDeletion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetNumberOfBricksAtSubdiv(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell,
                                                                                                     ByRef<::UnityEngine::Vector3Int> minValidLocalIdxAtMaxRes,
                                                                                                     ByRef<::UnityEngine::Vector3Int> sizeOfValidIndicesAtMaxRes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetNumberOfBricksAtSubdiv",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cell, minValidLocalIdxAtMaxRes, sizeOfValidIndicesAtMaxRes);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetCellIndexUpdate(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell,
                                                                                           ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo> cellUpdateInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetCellIndexUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell, cellUpdateInfo);
}
/// @param loadAll: bool (default: false)
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::LoadPendingCells(bool loadAll) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "LoadPendingCells",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadAll);
}
/// @param loadAllCells: bool (default: false)
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::PerformPendingOperations(bool loadAllCells) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "PerformPendingOperations",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadAllCells);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::InitProbeReferenceVolume(int32_t allocationSize,
                                                                                                 ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                                                                 ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "InitProbeReferenceVolume",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocationSize, memoryBudget, shBands);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SortPendingCells(::UnityEngine::Vector3 cameraPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SortPendingCells", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraPosition);
}
inline ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* UnityEngine::Experimental::Rendering::ProbeReferenceVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>());
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetRuntimeResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetRuntimeResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetTRS(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t minBrickSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetTRS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, minBrickSize);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::SetMaxSubdivision(int32_t maxSubdivision) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "SetMaxSubdivision",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxSubdivision);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CellSize(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CellSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::BrickSize(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "BrickSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::MinBrickSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "MinBrickSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::MaxBrickSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "MaxBrickSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetRefSpaceToWS() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetRefSpaceToWS",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetTransform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetTransform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetMaxSubdivision() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetMaxSubdivision",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetMaxSubdivision(float_t multiplier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetMaxSubdivision",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, multiplier);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::GetDistanceBetweenProbes(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "GetDistanceBetweenProbes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::MinDistanceBetweenProbes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "MinDistanceBetweenProbes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::DataHasBeenLoaded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "DataHasBeenLoaded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId UnityEngine::Experimental::Rendering::ProbeReferenceVolume::AddBricks(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* bricks, ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation dataloc,
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellUpdateInfo,
    ByRef<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> ch_list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, false>(this, ___internal_method, bricks, dataloc, cellUpdateInfo, ch_list);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ReleaseBricks(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ReleaseBricks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::UpdateConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                             ::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "UpdateConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, parameters);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CleanupLoadedData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CleanupLoadedData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_debugDisplay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "get_debugDisplay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::Experimental::Rendering::ProbeReferenceVolume::get_subdivisionDebugColors() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(),
                                               "get_subdivisionDebugColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RenderDebug(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RenderDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::InitializeDebug(::UnityEngine::Mesh* debugProbeMesh, ::UnityEngine::Shader* debugProbeShader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "InitializeDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugProbeMesh, debugProbeShader);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CleanupDebug() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CleanupDebug",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RefreshDebug(::UnityEngine::Rendering::__DebugUI__Field_1<T>* field, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RefreshDebug",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field, value);
}
template <typename T> inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::DebugCellIndexChanged(::UnityEngine::Rendering::__DebugUI__Field_1<T>* field, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "DebugCellIndexChanged",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field, value);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::RegisterDebug() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "RegisterDebug",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::UnregisterDebug(bool destroyPanel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "UnregisterDebug",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destroyPanel);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::UnityEngine::Transform* cameraTransform,
                                                                                       ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> frustumPlanes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ShouldCullCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellPosition, cameraTransform, frustumPlanes);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::DrawProbeDebug(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "DrawProbeDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ClearDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "ClearDebugData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::CreateInstancedProbes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "CreateInstancedProbes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::OnClearLightingdata() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "OnClearLightingdata",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_1(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_3(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_4() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_4",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_5(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_5",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_7() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_7",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_8(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_8",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_9() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_9",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_10(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_10",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_11() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_11",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_12(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_12",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_13() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_13",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_14(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_14",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_17() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_17",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_18(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_18",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_19() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_19",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_20(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_20",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_22() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_22",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeReferenceVolume::_RegisterDebug_b__119_23(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__119_23",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume::ProbeReferenceVolume() {}
