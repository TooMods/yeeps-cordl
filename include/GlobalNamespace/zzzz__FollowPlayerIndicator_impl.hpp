#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FollowPlayerIndicator_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__ExpressionController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FollowPlayerIndicator.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FollowPlayerIndicator::*)()>(&::GlobalNamespace::FollowPlayerIndicator::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3086254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FollowPlayerIndicator.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FollowPlayerIndicator::*)()>(&::GlobalNamespace::FollowPlayerIndicator::OnEnable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x308627c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FollowPlayerIndicator.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FollowPlayerIndicator::*)()>(&::GlobalNamespace::FollowPlayerIndicator::OnDisable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x308652c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FollowPlayerIndicator.OnPlayerToFollowUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FollowPlayerIndicator::*)(::StringW)>(
    &::GlobalNamespace::FollowPlayerIndicator::OnPlayerToFollowUpdated)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3086398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "OnPlayerToFollowUpdated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FollowPlayerIndicator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FollowPlayerIndicator::*)()>(&::GlobalNamespace::FollowPlayerIndicator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3086654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_isFollowingPlayerContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFollowingPlayerContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_isFollowingPlayerContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFollowingPlayerContainer;
}
constexpr void GlobalNamespace::FollowPlayerIndicator::__cordl_internal_set_isFollowingPlayerContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___isFollowingPlayerContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_notFollowingPlayerContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notFollowingPlayerContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_notFollowingPlayerContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notFollowingPlayerContainer;
}
constexpr void GlobalNamespace::FollowPlayerIndicator::__cordl_internal_set_notFollowingPlayerContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___notFollowingPlayerContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Avatar>& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_avatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr ::UnityW<::GlobalNamespace::Avatar> const& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_avatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr void GlobalNamespace::FollowPlayerIndicator::__cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avatar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController>& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_headVoiceChatSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headVoiceChatSource;
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& GlobalNamespace::FollowPlayerIndicator::__cordl_internal_get_headVoiceChatSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headVoiceChatSource;
}
constexpr void GlobalNamespace::FollowPlayerIndicator::__cordl_internal_set_headVoiceChatSource(::UnityW<::GlobalNamespace::ExpressionController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headVoiceChatSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FollowPlayerIndicator::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FollowPlayerIndicator::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FollowPlayerIndicator::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FollowPlayerIndicator::OnPlayerToFollowUpdated(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), "OnPlayerToFollowUpdated",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID);
}
inline ::GlobalNamespace::FollowPlayerIndicator* GlobalNamespace::FollowPlayerIndicator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FollowPlayerIndicator*>());
}
inline void GlobalNamespace::FollowPlayerIndicator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FollowPlayerIndicator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FollowPlayerIndicator::FollowPlayerIndicator() {}
