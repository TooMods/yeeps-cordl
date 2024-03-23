#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NavigationSignPost_def.hpp"
#include "GlobalNamespace/zzzz__NavigationSign_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__RoomNavigation_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)()>(&::GlobalNamespace::NavigationSignPost::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x175c730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.SetFlips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)(bool, bool)>(&::GlobalNamespace::NavigationSignPost::SetFlips)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x175c790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetFlips", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.SetFlipsToFacePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::NavigationSignPost::SetFlipsToFacePosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x175cadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetFlipsToFacePosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.SetNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)(
    ::GlobalNamespace::RoomNavigation*, ::GlobalNamespace::__RoomManager__TravelDirection, int32_t)>(&::GlobalNamespace::NavigationSignPost::SetNavigation)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x175cb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetNavigation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.RemoveNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)(::GlobalNamespace::RoomNavigation*)>(
    &::GlobalNamespace::NavigationSignPost::RemoveNavigation)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x175ce74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "RemoveNavigation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.PositionSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)(
    ::GlobalNamespace::NavigationSign*, ::GlobalNamespace::__RoomManager__TravelDirection, int32_t)>(&::GlobalNamespace::NavigationSignPost::PositionSign)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x175c918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "PositionSign", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NavigationSign*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.UpdatePostHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)()>(&::GlobalNamespace::NavigationSignPost::UpdatePostHeight)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x175cd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(),
                                                                               "UpdatePostHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost.SetVerbose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)(bool)>(&::GlobalNamespace::NavigationSignPost::SetVerbose)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x175d07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetVerbose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationSignPost._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NavigationSignPost::*)()>(&::GlobalNamespace::NavigationSignPost::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x175d220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NavigationSignPost::__cordl_internal_get_verboseContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verboseContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_verboseContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verboseContainer;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_verboseContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___verboseContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::NavigationSignPost::__cordl_internal_get_directionContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directionContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_directionContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directionContainer;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_directionContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___directionContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::NavigationSignPost::__cordl_internal_get_signContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_signContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signContainer;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_signContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::NavigationSignPost::__cordl_internal_get_minPostHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minPostHeight;
}
constexpr float_t const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_minPostHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minPostHeight;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_minPostHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minPostHeight = value;
}
constexpr float_t& GlobalNamespace::NavigationSignPost::__cordl_internal_get_maxPostHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPostHeight;
}
constexpr float_t const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_maxPostHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPostHeight;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_maxPostHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxPostHeight = value;
}
constexpr float_t& GlobalNamespace::NavigationSignPost::__cordl_internal_get_postWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postWidth;
}
constexpr float_t const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_postWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postWidth;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_postWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postWidth = value;
}
constexpr bool& GlobalNamespace::NavigationSignPost::__cordl_internal_get_flipX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipX;
}
constexpr bool const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_flipX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipX;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_flipX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipX = value;
}
constexpr bool& GlobalNamespace::NavigationSignPost::__cordl_internal_get_flipZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipZ;
}
constexpr bool const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_flipZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipZ;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_flipZ(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipZ = value;
}
constexpr bool& GlobalNamespace::NavigationSignPost::__cordl_internal_get_isVerbose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isVerbose;
}
constexpr bool const& GlobalNamespace::NavigationSignPost::__cordl_internal_get_isVerbose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isVerbose;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_isVerbose(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isVerbose = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>*&
GlobalNamespace::NavigationSignPost::__cordl_internal_get_navigationSigns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationSigns;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>*> const&
GlobalNamespace::NavigationSignPost::__cordl_internal_get_navigationSigns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationSigns;
}
constexpr void GlobalNamespace::NavigationSignPost::__cordl_internal_set_navigationSigns(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___navigationSigns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NavigationSignPost::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NavigationSignPost::SetFlips(bool flipX, bool flipZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetFlips", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flipX, flipZ);
}
inline void GlobalNamespace::NavigationSignPost::SetFlipsToFacePosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetFlipsToFacePosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void GlobalNamespace::NavigationSignPost::SetNavigation(::GlobalNamespace::RoomNavigation* navigation, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, int32_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetNavigation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigation, travelDirection, distance);
}
inline void GlobalNamespace::NavigationSignPost::RemoveNavigation(::GlobalNamespace::RoomNavigation* navigation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "RemoveNavigation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigation);
}
inline void GlobalNamespace::NavigationSignPost::PositionSign(::GlobalNamespace::NavigationSign* sign, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "PositionSign", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NavigationSign*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sign, travelDirection, index);
}
inline void GlobalNamespace::NavigationSignPost::UpdatePostHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "UpdatePostHeight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NavigationSignPost::SetVerbose(bool newIsVerbose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), "SetVerbose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsVerbose);
}
inline ::GlobalNamespace::NavigationSignPost* GlobalNamespace::NavigationSignPost::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NavigationSignPost*>());
}
inline void GlobalNamespace::NavigationSignPost::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NavigationSignPost*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NavigationSignPost::NavigationSignPost() {}
