#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RecentPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__RecentPlayersManager_def.hpp"
// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__RecentPlayersManager__RecentPlayerData::__RecentPlayersManager__RecentPlayerData(::StringW displayName, ::StringW accountID) noexcept {
  this->displayName = displayName;
  this->accountID = accountID;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RecentPlayersManager__RecentPlayerData::__RecentPlayersManager__RecentPlayerData() {}
//  Writing Method size for method: ::GlobalNamespace::RecentPlayersManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecentPlayersManager::*)()>(&::GlobalNamespace::RecentPlayersManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c82064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecentPlayersManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::RecentPlayersManager* GlobalNamespace::RecentPlayersManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecentPlayersManager*>());
}
inline void GlobalNamespace::RecentPlayersManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecentPlayersManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecentPlayersManager::RecentPlayersManager() {}
