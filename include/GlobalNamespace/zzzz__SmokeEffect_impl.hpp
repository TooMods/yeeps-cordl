#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SmokeEffect_def.hpp"
#include "GlobalNamespace/zzzz__PlayspaceData_def.hpp"
#include "GlobalNamespace/zzzz__SmokeCube_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmokeEffect.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmokeEffect::*)(float_t, int32_t)>(&::GlobalNamespace::SmokeEffect::Initialize)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x29c427c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmokeEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmokeEffect::*)()>(&::GlobalNamespace::SmokeEffect::Update)> {
  constexpr static std::size_t size = 0xa64;
  constexpr static std::size_t addrs = 0x29c6864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmokeEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmokeEffect::*)()>(&::GlobalNamespace::SmokeEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c72c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubePrefab;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubePrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeCubePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>*& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>*> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubes;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubes(::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeCubes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr ::GlobalNamespace::PlayspaceData*& GlobalNamespace::SmokeEffect::__cordl_internal_get_mapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayspaceData*> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_mapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapData;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_mapData(::GlobalNamespace::PlayspaceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr Il2CppObject*& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeGrid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeGrid;
}
constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeGrid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeGrid;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubeGrid(Il2CppObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeCubeGrid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::SmokeEffect::__cordl_internal_get_centerCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centerCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::SmokeEffect::__cordl_internal_get_centerCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centerCellPosition;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_centerCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___centerCellPosition = value;
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeGridLowerCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeGridLowerCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeGridLowerCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeGridLowerCellPosition;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubeGridLowerCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smokeCubeGridLowerCellPosition = value;
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeGridUpperCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeGridUpperCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeGridUpperCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeGridUpperCellPosition;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubeGridUpperCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smokeCubeGridUpperCellPosition = value;
}
constexpr int32_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeCount;
}
constexpr int32_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeCount;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smokeCubeCount = value;
}
constexpr int32_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_maxSmokeCubeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSmokeCubeCount;
}
constexpr int32_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_maxSmokeCubeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSmokeCubeCount;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_maxSmokeCubeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxSmokeCubeCount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*& GlobalNamespace::SmokeEffect::__cordl_internal_get_frontier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frontier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_frontier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frontier;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_frontier(::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frontier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr int32_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr int32_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_z(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
constexpr float_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_nextSmokeTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSmokeTime;
}
constexpr float_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_nextSmokeTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSmokeTime;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_nextSmokeTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextSmokeTime = value;
}
constexpr ::System::Random*& GlobalNamespace::SmokeEffect::__cordl_internal_get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_rand(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_frontierIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frontierIndex;
}
constexpr int32_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_frontierIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frontierIndex;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_frontierIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frontierIndex = value;
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::SmokeEffect::__cordl_internal_get_frontierCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frontierCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::SmokeEffect::__cordl_internal_get_frontierCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frontierCellPosition;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_frontierCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frontierCellPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmokeEffect::__cordl_internal_get_worldPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmokeEffect::__cordl_internal_get_worldPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldPosition;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_worldPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeTransform;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubeTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeCubeTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeMR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeMR;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeMR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeMR;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubeMR(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeCubeMR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SmokeEffect::__cordl_internal_get_smokeCubeMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeCubeMat;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_smokeCubeMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeCubeMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::SmokeEffect::__cordl_internal_get_neighborCellPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neighborCellPosition;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::SmokeEffect::__cordl_internal_get_neighborCellPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neighborCellPosition;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_neighborCellPosition(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___neighborCellPosition = value;
}
constexpr float_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_curSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSize;
}
constexpr float_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_curSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSize;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_curSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curSize = value;
}
constexpr float_t& GlobalNamespace::SmokeEffect::__cordl_internal_get_curLifetimeRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLifetimeRatio;
}
constexpr float_t const& GlobalNamespace::SmokeEffect::__cordl_internal_get_curLifetimeRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLifetimeRatio;
}
constexpr void GlobalNamespace::SmokeEffect::__cordl_internal_set_curLifetimeRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curLifetimeRatio = value;
}
inline void GlobalNamespace::SmokeEffect::setStaticF_activeSmokeEffectCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "activeSmokeEffectCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SmokeEffect::getStaticF_activeSmokeEffectCount() {
  return ::cordl_internals::getStaticField<int32_t, "activeSmokeEffectCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get>();
}
inline void GlobalNamespace::SmokeEffect::Initialize(float_t radius, int32_t seed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, radius, seed);
}
inline void GlobalNamespace::SmokeEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SmokeEffect* GlobalNamespace::SmokeEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SmokeEffect*>());
}
inline void GlobalNamespace::SmokeEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmokeEffect::SmokeEffect() {}
