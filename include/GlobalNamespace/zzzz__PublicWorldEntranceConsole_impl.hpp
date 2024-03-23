#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PublicWorldEntranceConsole_def.hpp"
#include "GlobalNamespace/zzzz__CodeInput_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PublicWorldEntranceConsole.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PublicWorldEntranceConsole::*)()>(&::GlobalNamespace::PublicWorldEntranceConsole::Start)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf2120c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PublicWorldEntranceConsole.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PublicWorldEntranceConsole::*)(bool)>(
    &::GlobalNamespace::PublicWorldEntranceConsole::SetActive)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xf212d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "SetActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PublicWorldEntranceConsole.OnCompleteCodeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PublicWorldEntranceConsole::*)(::StringW)>(
    &::GlobalNamespace::PublicWorldEntranceConsole::OnCompleteCodeUpdated)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xf2158c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "OnCompleteCodeUpdated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PublicWorldEntranceConsole.SelectDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PublicWorldEntranceConsole::*)(::StringW, bool)>(
    &::GlobalNamespace::PublicWorldEntranceConsole::SelectDestination)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xf213c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "SelectDestination", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PublicWorldEntranceConsole._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PublicWorldEntranceConsole::*)()>(&::GlobalNamespace::PublicWorldEntranceConsole::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf21600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*>& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationTexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> const& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationTexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexts;
}
constexpr void GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_set_destinationTexts(::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationTexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationSwitchParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSwitchParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationSwitchParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSwitchParticles;
}
constexpr void GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_set_destinationSwitchParticles(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationSwitchParticles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationSwitchSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSwitchSoundKey;
}
constexpr ::StringW const& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationSwitchSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSwitchSoundKey;
}
constexpr void GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_set_destinationSwitchSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationSwitchSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationPrefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationPrefixes;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_destinationPrefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationPrefixes;
}
constexpr void GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_set_destinationPrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationPrefixes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_activeContainers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_activeContainers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainers;
}
constexpr void GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_set_activeContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeContainers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CodeInput>& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_codeInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___codeInput;
}
constexpr ::UnityW<::GlobalNamespace::CodeInput> const& GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_get_codeInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___codeInput;
}
constexpr void GlobalNamespace::PublicWorldEntranceConsole::__cordl_internal_set_codeInput(::UnityW<::GlobalNamespace::CodeInput> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___codeInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PublicWorldEntranceConsole::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PublicWorldEntranceConsole::SetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "SetActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::PublicWorldEntranceConsole::OnCompleteCodeUpdated(::StringW newCompleteCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "OnCompleteCodeUpdated",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCompleteCode);
}
inline void GlobalNamespace::PublicWorldEntranceConsole::SelectDestination(::StringW code, bool fromLoad) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), "SelectDestination", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, fromLoad);
}
inline ::GlobalNamespace::PublicWorldEntranceConsole* GlobalNamespace::PublicWorldEntranceConsole::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PublicWorldEntranceConsole*>());
}
inline void GlobalNamespace::PublicWorldEntranceConsole::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PublicWorldEntranceConsole*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PublicWorldEntranceConsole::PublicWorldEntranceConsole() {}
