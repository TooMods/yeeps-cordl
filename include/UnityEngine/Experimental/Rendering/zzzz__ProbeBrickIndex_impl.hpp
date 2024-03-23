#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickIndex_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::*)(::UnityEngine::Vector3Int, int32_t)>(
    &::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23bec70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick)>(&::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23bec7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>"
constexpr UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::operator ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>"
constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*
UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::i___System__IEquatable_1___UnityEngine__Experimental__Rendering____ProbeBrickIndex__Brick_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::_ctor(::UnityEngine::Vector3Int position, int32_t subdivisionLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, subdivisionLevel);
}
inline bool UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::Equals(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "subdivisionLevel", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::__ProbeBrickIndex__Brick(::UnityEngine::Vector3Int position, int32_t subdivisionLevel) noexcept {
  this->position = position;
  this->subdivisionLevel = subdivisionLevel;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick::__ProbeBrickIndex__Brick() {}
// Ctor Parameters [CppParam { name: "brick", ty: "::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick", modifiers: "", def_value: Some("{}") }, CppParam { name: "flattenedIdx", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick::__ProbeBrickIndex__ReservedBrick(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick brick,
                                                                                                                     int32_t flattenedIdx) noexcept {
  this->brick = brick;
  this->flattenedIdx = flattenedIdx;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick::__ProbeBrickIndex__ReservedBrick() {}
// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId", modifiers: "", def_value: Some("{}") }, CppParam { name: "brickIndices", ty:
// "::System::Collections::Generic::List_1<uint16_t>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta::__ProbeBrickIndex__VoxelMeta(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id,
                                                                                                             ::System::Collections::Generic::List_1<uint16_t>* brickIndices) noexcept {
  this->id = id;
  this->brickIndices = brickIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta::__ProbeBrickIndex__VoxelMeta() {}
// Ctor Parameters [CppParam { name: "voxels", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "bricks", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta::__ProbeBrickIndex__BrickMeta(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>* voxels,
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>* bricks) noexcept {
  this->voxels = voxels;
  this->bricks = bricks;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta::__ProbeBrickIndex__BrickMeta() {}
// Ctor Parameters [CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numberOfChunks", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "minSubdivInCell", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minValidBrickIndexForCellAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "maxValidBrickIndexForCellAtMaxResPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cellPositionInBricksAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo::__ProbeBrickIndex__CellIndexUpdateInfo(int32_t firstChunkIndex, int32_t numberOfChunks,
                                                                                                                                 int32_t minSubdivInCell,
                                                                                                                                 ::UnityEngine::Vector3Int minValidBrickIndexForCellAtMaxRes,
                                                                                                                                 ::UnityEngine::Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne,
                                                                                                                                 ::UnityEngine::Vector3Int cellPositionInBricksAtMaxRes) noexcept {
  this->firstChunkIndex = firstChunkIndex;
  this->numberOfChunks = numberOfChunks;
  this->minSubdivInCell = minSubdivInCell;
  this->minValidBrickIndexForCellAtMaxRes = minValidBrickIndexForCellAtMaxRes;
  this->maxValidBrickIndexForCellAtMaxResPlusOne = maxValidBrickIndexForCellAtMaxResPlusOne;
  this->cellPositionInBricksAtMaxRes = cellPositionInBricksAtMaxRes;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo::__ProbeBrickIndex__CellIndexUpdateInfo() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23be314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0._AddBricks_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta)>(&::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::_AddBricks_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23becc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0*>::get(), "<AddBricks>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId& UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId const& UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::__cordl_internal_set_id(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*&
UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*> const&
UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::__cordl_internal_set___9__0(
    ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0* UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::_AddBricks_b__0(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta lhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0*>::get(), "<AddBricks>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lhs);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0::__ProbeBrickIndex____c__DisplayClass31_0() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23be93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0._RemoveBricks_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta)>(&::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::_RemoveBricks_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23bece4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0*>::get(), "<RemoveBricks>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId& UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId const& UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::__cordl_internal_set_id(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*&
UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*> const&
UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::__cordl_internal_set___9__0(
    ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0* UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0*>());
}
inline void UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::_RemoveBricks_b__0(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta lhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0*>::get(), "<RemoveBricks>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lhs);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0::__ProbeBrickIndex____c__DisplayClass32_0() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bcbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                               "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bcbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "set_estimatedVMemCost",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.GetVoxelSubdivLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::GetVoxelSubdivLevel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23bcbec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                               "GetVoxelSubdivLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.SizeOfPhysicalIndexFromBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget)>(&::UnityEngine::Experimental::Rendering::ProbeBrickIndex::SizeOfPhysicalIndexFromBudget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23bcc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "SizeOfPhysicalIndexFromBudget",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget)>(&::UnityEngine::Experimental::Rendering::ProbeBrickIndex::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x23bccd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.UploadIndexData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::UploadIndexData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23bcff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                               "UploadIndexData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::Clear)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23bcf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.MapBrickToVoxels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::MapBrickToVoxels)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x23bd024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "MapBrickToVoxels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.ClearVoxel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(&::UnityEngine::Experimental::Rendering::ProbeBrickIndex::ClearVoxel)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23bd35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "ClearVoxel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>)>(&::UnityEngine::Experimental::Rendering::ProbeBrickIndex::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23bd854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::Cleanup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23bd888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.MergeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(int32_t, int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::MergeIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23bd8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "MergeIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.AssignIndexChunksToCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, int32_t, ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::AssignIndexChunksToCell)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x23bd8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "AssignIndexChunksToCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.AddBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*, int32_t, int32_t, int32_t,
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(&::UnityEngine::Experimental::Rendering::ProbeBrickIndex::AddBricks)> {
  constexpr static std::size_t size = 0x8a4;
  constexpr static std::size_t addrs = 0x23bda70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.RemoveBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::RemoveBricks)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x23be534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "RemoveBricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.UpdateIndexForVoxel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(&::UnityEngine::Experimental::Rendering::ProbeBrickIndex::UpdateIndexForVoxel)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x23be330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "UpdateIndexForVoxel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.UpdatePhysicalIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, int32_t, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::UpdatePhysicalIndex)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x23bd5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "UpdatePhysicalIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.ClipToIndexSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Vector3Int, int32_t, ByRef<::UnityEngine::Vector3Int>, ByRef<::UnityEngine::Vector3Int>, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickIndex::ClipToIndexSpace)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x23bd404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "ClipToIndexSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickIndex.UpdateIndexForVoxel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickIndex::*)(
    ::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>*, ::System::Collections::Generic::List_1<uint16_t>*,
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo)>(&::UnityEngine::Experimental::Rendering::ProbeBrickIndex::UpdateIndexForVoxel)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x23be944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "UpdateIndexForVoxel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint16_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::BitArray*& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexChunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::BitArray*> const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexChunks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_IndexChunks(::System::Collections::BitArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexInChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexInChunks;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_IndexInChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexInChunks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_IndexInChunks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndexInChunks = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_NextFreeChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFreeChunk;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_NextFreeChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFreeChunk;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_NextFreeChunk(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextFreeChunk = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBuffer;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_PhysicalIndexBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PhysicalIndexBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBufferData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBufferData;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_PhysicalIndexBufferData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalIndexBufferData;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_PhysicalIndexBufferData(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PhysicalIndexBufferData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get__estimatedVMemCost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get__estimatedVMemCost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____estimatedVMemCost_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_CenterRS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterRS;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_CenterRS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterRS;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_CenterRS(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CenterRS = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>*&
UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_VoxelToBricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VoxelToBricks;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>*> const&
UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_VoxelToBricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VoxelToBricks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_VoxelToBricks(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VoxelToBricks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>*&
UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_BricksToVoxels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BricksToVoxels;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>*> const&
UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_BricksToVoxels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BricksToVoxels;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_BricksToVoxels(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BricksToVoxels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_NeedUpdateIndexComputeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateIndexComputeBuffer;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_get_m_NeedUpdateIndexComputeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedUpdateIndexComputeBuffer;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickIndex::__cordl_internal_set_m_NeedUpdateIndexComputeBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedUpdateIndexComputeBuffer = value;
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickIndex::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                             "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "set_estimatedVMemCost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickIndex::GetVoxelSubdivLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                             "GetVoxelSubdivLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickIndex::SizeOfPhysicalIndexFromBudget(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "SizeOfPhysicalIndexFromBudget",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, memoryBudget);
}
inline ::UnityEngine::Experimental::Rendering::ProbeBrickIndex*
UnityEngine::Experimental::Rendering::ProbeBrickIndex::New_ctor(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>(memoryBudget));
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::_ctor(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memoryBudget);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::UploadIndexData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                             "UploadIndexData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::MapBrickToVoxels(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick brick,
                                                                                    ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>* voxels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "MapBrickToVoxels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, brick, voxels);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::ClearVoxel(::UnityEngine::Vector3Int pos, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "ClearVoxel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, cellInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::GetRuntimeResources(ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources> rr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rr);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickIndex::MergeIndex(int32_t index, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "MergeIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index, size);
}
inline bool UnityEngine::Experimental::Rendering::ProbeBrickIndex::AssignIndexChunksToCell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell, int32_t bricksCount,
                                                                                           ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo> cellUpdateInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "AssignIndexChunksToCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell, bricksCount, cellUpdateInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::AddBricks(
    ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* bricks,
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* allocations, int32_t allocationSize, int32_t poolWidth, int32_t poolHeight,
    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, bricks, allocations, allocationSize, poolWidth, poolHeight, cellInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::RemoveBricks(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id,
                                                                                ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "RemoveBricks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, cellInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::UpdateIndexForVoxel(::UnityEngine::Vector3Int voxel,
                                                                                       ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "UpdateIndexForVoxel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, voxel, cellInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::UpdatePhysicalIndex(::UnityEngine::Vector3Int brickMin, ::UnityEngine::Vector3Int brickMax, int32_t value,
                                                                                       ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "UpdatePhysicalIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, brickMin, brickMax, value, cellInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::ClipToIndexSpace(::UnityEngine::Vector3Int pos, int32_t subdiv, ByRef<::UnityEngine::Vector3Int> outMinpos,
                                                                                    ByRef<::UnityEngine::Vector3Int> outMaxpos,
                                                                                    ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "ClipToIndexSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, subdiv, outMinpos, outMaxpos, cellInfo);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickIndex::UpdateIndexForVoxel(
    ::UnityEngine::Vector3Int voxel, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>* bricks,
    ::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*>::get(), "UpdateIndexForVoxel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint16_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, voxel, bricks, indices, cellInfo);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeBrickIndex::ProbeBrickIndex() {}
