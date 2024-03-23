#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadLayoutItem2D_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__ExpressionController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__TapButton2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayoutItem2D.Display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayoutItem2D::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PlayerHeadLayoutItem2D::Display)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e058b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayoutItem2D.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayoutItem2D::*)()>(&::GlobalNamespace::PlayerHeadLayoutItem2D::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e05d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayoutItem2D.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayoutItem2D::*)()>(&::GlobalNamespace::PlayerHeadLayoutItem2D::DestroySelf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e0583c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), "DestroySelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadLayoutItem2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadLayoutItem2D::*)()>(&::GlobalNamespace::PlayerHeadLayoutItem2D::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e05d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Avatar>& GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_get_avatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr ::UnityW<::GlobalNamespace::Avatar> const& GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_get_avatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr void GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avatar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController>& GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_get_headVoiceChatSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headVoiceChatSource;
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_get_headVoiceChatSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headVoiceChatSource;
}
constexpr void GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_set_headVoiceChatSource(::UnityW<::GlobalNamespace::ExpressionController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headVoiceChatSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TapButton2D>& GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_get_tapButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapButton;
}
constexpr ::UnityW<::GlobalNamespace::TapButton2D> const& GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_get_tapButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapButton;
}
constexpr void GlobalNamespace::PlayerHeadLayoutItem2D::__cordl_internal_set_tapButton(::UnityW<::GlobalNamespace::TapButton2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tapButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerHeadLayoutItem2D::Display(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerHeadLayoutItem2D::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeadLayoutItem2D::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), "DestroySelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHeadLayoutItem2D* GlobalNamespace::PlayerHeadLayoutItem2D::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerHeadLayoutItem2D*>());
}
inline void GlobalNamespace::PlayerHeadLayoutItem2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadLayoutItem2D*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeadLayoutItem2D::PlayerHeadLayoutItem2D() {}
