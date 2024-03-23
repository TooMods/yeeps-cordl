#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsTestingManager_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsTestingManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isZipper", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData::__CosmeticsTestingManager__CosmeticTestData(::UnityW<::UnityEngine::Mesh> mesh, bool isZipper) noexcept {
  this->mesh = mesh;
  this->isZipper = isZipper;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData::__CosmeticsTestingManager__CosmeticTestData() {}
// Ctor Parameters [CppParam { name: "avatarReference", ty: "::UnityW<::UnityEngine::SkinnedMeshRenderer>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "zipperAnchor", ty:
// "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData::__CosmeticsTestingManager__AvatarTestData(::UnityW<::UnityEngine::SkinnedMeshRenderer> avatarReference,
                                                                                                                  ::UnityW<::UnityEngine::Transform> zipperAnchor) noexcept {
  this->avatarReference = avatarReference;
  this->zipperAnchor = zipperAnchor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData::__CosmeticsTestingManager__AvatarTestData() {}
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(&::GlobalNamespace::CosmeticsTestingManager::Start)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0x1442e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.TryCreateCosmetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CosmeticsTestingManager::*)(
    ::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::UnityEngine::Transform*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Transform*, ByRef<::UnityEngine::GameObject*>)>(
    &::GlobalNamespace::CosmeticsTestingManager::TryCreateCosmetic)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1443890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "TryCreateCosmetic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.OnCycleTorsoOverButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(
    &::GlobalNamespace::CosmeticsTestingManager::OnCycleTorsoOverButtonPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1443b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                               "OnCycleTorsoOverButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.OnCycleTorsoUnderButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(
    &::GlobalNamespace::CosmeticsTestingManager::OnCycleTorsoUnderButtonPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1443e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                               "OnCycleTorsoUnderButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.OnCycleSleeveOverButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(
    &::GlobalNamespace::CosmeticsTestingManager::OnCycleSleeveOverButtonPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1443e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                               "OnCycleSleeveOverButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.OnCycleSleeveUnderButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(
    &::GlobalNamespace::CosmeticsTestingManager::OnCycleSleeveUnderButtonPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1443e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "OnCycleSleeveUnderButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.OnCyclePantsButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(
    &::GlobalNamespace::CosmeticsTestingManager::OnCyclePantsButtonPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1443e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                               "OnCyclePantsButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.OnClearAllButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(
    &::GlobalNamespace::CosmeticsTestingManager::OnClearAllButtonPressed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1443e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                               "OnClearAllButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.DoCycle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ByRef<int32_t>, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>)>(
    &::GlobalNamespace::CosmeticsTestingManager::DoCycle)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1443b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "DoCycle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager.TryClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GlobalNamespace::CosmeticsTestingManager::TryClear)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1443ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "TryClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsTestingManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsTestingManager::*)()>(&::GlobalNamespace::CosmeticsTestingManager::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1444054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*>&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_testCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testCosmetics;
}
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*> const&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_testCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testCosmetics;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_testCosmetics(
    ::ArrayW<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData, ::Array<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___testCosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_testAvatars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testAvatars;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_testAvatars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testAvatars;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_testAvatars(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___testAvatars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_cosmeticMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_cosmeticMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticMaterial;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_cosmeticMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_cosmeticPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_cosmeticPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticPrefab;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_cosmeticPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_zipperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_zipperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperPrefab;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_zipperPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zipperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoOverMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoOverMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoOverMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoOverMeshes;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_torsoOverMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___torsoOverMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoUnderMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoUnderMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoUnderMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoUnderMeshes;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_torsoUnderMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___torsoUnderMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveOverMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveOverMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveOverMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveOverMeshes;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_sleeveOverMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sleeveOverMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveUnderMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveUnderMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveUnderMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveUnderMeshes;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_sleeveUnderMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sleeveUnderMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_pantsMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pantsMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_pantsMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pantsMeshes;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_pantsMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pantsMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>*& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_avatarTestDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarTestDatas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>*> const&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_avatarTestDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarTestDatas;
}
constexpr void
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_avatarTestDatas(::System::Collections::Generic::List_1<::GlobalNamespace::__CosmeticsTestingManager__AvatarTestData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avatarTestDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoOverIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoOverIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoOverIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoOverIndex;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_torsoOverIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___torsoOverIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curTorsoOverCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTorsoOverCosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curTorsoOverCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTorsoOverCosmetics;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_curTorsoOverCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curTorsoOverCosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoUnderIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoUnderIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_torsoUnderIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoUnderIndex;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_torsoUnderIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___torsoUnderIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curTorsoUnderCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTorsoUnderCosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curTorsoUnderCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTorsoUnderCosmetics;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_curTorsoUnderCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curTorsoUnderCosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveOverIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveOverIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveOverIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveOverIndex;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_sleeveOverIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sleeveOverIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curSleeveOverCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSleeveOverCosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curSleeveOverCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSleeveOverCosmetics;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_curSleeveOverCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curSleeveOverCosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveUnderIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveUnderIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_sleeveUnderIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sleeveUnderIndex;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_sleeveUnderIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sleeveUnderIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curSleeveUnderCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSleeveUnderCosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curSleeveUnderCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSleeveUnderCosmetics;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_curSleeveUnderCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curSleeveUnderCosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_pantsIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pantsIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_pantsIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pantsIndex;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_pantsIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pantsIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curPantsCosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPantsCosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::CosmeticsTestingManager::__cordl_internal_get_curPantsCosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPantsCosmetics;
}
constexpr void GlobalNamespace::CosmeticsTestingManager::__cordl_internal_set_curPantsCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curPantsCosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CosmeticsTestingManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticsTestingManager::TryCreateCosmetic(::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData cosmeticTestData, ::UnityEngine::Transform* container,
                                                                        ::UnityEngine::SkinnedMeshRenderer* avatarReference, ::UnityEngine::Transform* zipperAnchor,
                                                                        ByRef<::UnityEngine::GameObject*> cosmetic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "TryCreateCosmetic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CosmeticsTestingManager__CosmeticTestData>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cosmeticTestData, container, avatarReference, zipperAnchor, cosmetic);
}
inline void GlobalNamespace::CosmeticsTestingManager::OnCycleTorsoOverButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                             "OnCycleTorsoOverButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsTestingManager::OnCycleTorsoUnderButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                             "OnCycleTorsoUnderButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsTestingManager::OnCycleSleeveOverButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                             "OnCycleSleeveOverButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsTestingManager::OnCycleSleeveUnderButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                             "OnCycleSleeveUnderButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsTestingManager::OnCyclePantsButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                             "OnCyclePantsButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsTestingManager::OnClearAllButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(),
                                                                             "OnClearAllButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsTestingManager::DoCycle(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curCosmetics, ByRef<int32_t> index,
                                                              ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "DoCycle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curCosmetics, index, meshes);
}
inline void GlobalNamespace::CosmeticsTestingManager::TryClear(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* curCosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), "TryClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curCosmetics);
}
inline ::GlobalNamespace::CosmeticsTestingManager* GlobalNamespace::CosmeticsTestingManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CosmeticsTestingManager*>());
}
inline void GlobalNamespace::CosmeticsTestingManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsTestingManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsTestingManager::CosmeticsTestingManager() {}
