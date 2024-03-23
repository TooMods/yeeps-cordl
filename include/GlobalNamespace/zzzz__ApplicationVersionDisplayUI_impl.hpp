#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ApplicationVersionDisplayUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ApplicationVersionDisplayUI.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ApplicationVersionDisplayUI::*)()>(&::GlobalNamespace::ApplicationVersionDisplayUI::Start)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x153fddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ApplicationVersionDisplayUI*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplicationVersionDisplayUI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ApplicationVersionDisplayUI::*)()>(&::GlobalNamespace::ApplicationVersionDisplayUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x153fee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ApplicationVersionDisplayUI*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::ApplicationVersionDisplayUI::__cordl_internal_get_versionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::ApplicationVersionDisplayUI::__cordl_internal_get_versionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionText;
}
constexpr void GlobalNamespace::ApplicationVersionDisplayUI::__cordl_internal_set_versionText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___versionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ApplicationVersionDisplayUI::__cordl_internal_get_alsoShowCompatabilityVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alsoShowCompatabilityVersion;
}
constexpr bool const& GlobalNamespace::ApplicationVersionDisplayUI::__cordl_internal_get_alsoShowCompatabilityVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alsoShowCompatabilityVersion;
}
constexpr void GlobalNamespace::ApplicationVersionDisplayUI::__cordl_internal_set_alsoShowCompatabilityVersion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alsoShowCompatabilityVersion = value;
}
inline void GlobalNamespace::ApplicationVersionDisplayUI::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ApplicationVersionDisplayUI*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ApplicationVersionDisplayUI* GlobalNamespace::ApplicationVersionDisplayUI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ApplicationVersionDisplayUI*>());
}
inline void GlobalNamespace::ApplicationVersionDisplayUI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ApplicationVersionDisplayUI*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ApplicationVersionDisplayUI::ApplicationVersionDisplayUI() {}
