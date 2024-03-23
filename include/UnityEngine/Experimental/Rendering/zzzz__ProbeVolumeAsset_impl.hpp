#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::__ProbeVolumeAsset__AssetVersion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::__ProbeVolumeAsset__AssetVersion() {}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::First{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::AddProbeVolumesAtlasEncodingModes{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::PV2{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::ChunkBasedIndex{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::Max{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion::Current{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c79e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset.get_maxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::get_maxSubdivision)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c25b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                               "get_maxSubdivision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset.get_minBrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::get_minBrickSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c259c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                               "get_minBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset.CompatibleWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*)>(&::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::CompatibleWith)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23c1748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(), "CompatibleWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset.GetSerializedFullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::GetSerializedFullPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c79ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                               "GetSerializedFullPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23c79f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*&
UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_cells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cells;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_cells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cells;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_cells(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_maxCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_maxCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCellPosition;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_maxCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCellPosition = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_minCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_minCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCellPosition;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_minCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minCellPosition = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_globalBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_globalBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalBounds;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_globalBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___globalBounds = value;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_bands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bands;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_bands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bands;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_bands(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bands = value;
}
constexpr ::StringW& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_m_AssetFullPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetFullPath;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_m_AssetFullPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetFullPath;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_m_AssetFullPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetFullPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_cellSizeInBricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSizeInBricks;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_cellSizeInBricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSizeInBricks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_cellSizeInBricks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellSizeInBricks = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_minDistanceBetweenProbes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDistanceBetweenProbes;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_minDistanceBetweenProbes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDistanceBetweenProbes;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_minDistanceBetweenProbes(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minDistanceBetweenProbes = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_simplificationLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simplificationLevels;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_get_simplificationLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simplificationLevels;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::__cordl_internal_set_simplificationLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simplificationLevels = value;
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeVolumeAsset::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeVolumeAsset::get_maxSubdivision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                             "get_maxSubdivision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::ProbeVolumeAsset::get_minBrickSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                             "get_minBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::ProbeVolumeAsset::CompatibleWith(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* otherAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(), "CompatibleWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, otherAsset);
}
inline ::StringW UnityEngine::Experimental::Rendering::ProbeVolumeAsset::GetSerializedFullPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                             "GetSerializedFullPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* UnityEngine::Experimental::Rendering::ProbeVolumeAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>());
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset::ProbeVolumeAsset() {}
