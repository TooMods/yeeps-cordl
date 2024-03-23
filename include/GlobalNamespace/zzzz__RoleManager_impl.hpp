#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__RoleManager_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticData_def.hpp"
#include "GlobalNamespace/zzzz__RoleManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__RoleManager__RoleData::__RoleManager__RoleData(::StringW key, ::UnityW<::UnityEngine::Sprite> icon) noexcept {
  this->key = key;
  this->icon = icon;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoleManager__RoleData::__RoleManager__RoleData() {}
//  Writing Method size for method: ::GlobalNamespace::RoleManager.TryGetRoleDataFromCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoleManager::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, ByRef<::GlobalNamespace::__RoleManager__RoleData>)>(&::GlobalNamespace::RoleManager::TryGetRoleDataFromCosmetics)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x17593bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoleManager*>::get(), "TryGetRoleDataFromCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoleManager__RoleData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoleManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoleManager::*)()>(&::GlobalNamespace::RoleManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1759544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoleManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*>& GlobalNamespace::RoleManager::__cordl_internal_get_roleDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*> const& GlobalNamespace::RoleManager::__cordl_internal_get_roleDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleDatas;
}
constexpr void GlobalNamespace::RoleManager::__cordl_internal_set_roleDatas(::ArrayW<::GlobalNamespace::__RoleManager__RoleData, ::Array<::GlobalNamespace::__RoleManager__RoleData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roleDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::RoleManager::TryGetRoleDataFromCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmeticDatas,
                                                                      ByRef<::GlobalNamespace::__RoleManager__RoleData> roleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoleManager*>::get(), "TryGetRoleDataFromCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoleManager__RoleData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cosmeticDatas, roleData);
}
inline ::GlobalNamespace::RoleManager* GlobalNamespace::RoleManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoleManager*>());
}
inline void GlobalNamespace::RoleManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoleManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoleManager::RoleManager() {}
