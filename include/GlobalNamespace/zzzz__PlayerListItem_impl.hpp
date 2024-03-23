#pragma once
#include "GlobalNamespace/zzzz__PlayerData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerListItem_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__ExpressionController_def.hpp"
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerListItem_def.hpp"
#include "GlobalNamespace/zzzz__ReportsManager_def.hpp"
#include "GlobalNamespace/zzzz__SimpleButtonController_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1552024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0._OnReportButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_OnReportButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1552e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(), "<OnReportButtonPressed>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0._OnReportButtonPressed_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_OnReportButtonPressed_b__1)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1552f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(),
                                                 "<OnReportButtonPressed>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0._OnReportButtonPressed_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::*)(::StringW)>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_OnReportButtonPressed_b__2)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1553038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(), "<OnReportButtonPressed>b__2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerListItem>& GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerListItem> const& GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerListItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerData& GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get_playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr ::GlobalNamespace::PlayerData const& GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get_playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_set_playerData(::GlobalNamespace::PlayerData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerData = value;
}
constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*& GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*> const&
GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_set___9__1(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountFailed*& GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountFailed*> const&
GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__cordl_internal_set___9__2(::GlobalNamespace::__ReportsManager__OnReportAccountFailed* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0* GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>());
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_OnReportButtonPressed_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(), "<OnReportButtonPressed>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_OnReportButtonPressed_b__1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(),
                                                                             "<OnReportButtonPressed>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::_OnReportButtonPressed_b__2(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*>::get(), "<OnReportButtonPressed>b__2",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0::__PlayerListItem____c__DisplayClass32_0() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15524cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0._OnKickButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::*)(bool)>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::_OnKickButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x15531b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0*>::get(), "<OnKickButtonPressed>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerData& GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::__cordl_internal_get_playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr ::GlobalNamespace::PlayerData const& GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::__cordl_internal_get_playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::__cordl_internal_set_playerData(::GlobalNamespace::PlayerData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerData = value;
}
inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0* GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0*>());
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::_OnKickButtonPressed_b__0(bool approved) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0*>::get(), "<OnKickButtonPressed>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, approved);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0::__PlayerListItem____c__DisplayClass33_0() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15524d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0._TryShowReportHistory_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::*)(int32_t, int32_t, int32_t, bool)>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::_TryShowReportHistory_b__0)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x1553230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*>::get(), "<TryShowReportHistory>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0._TryShowReportHistory_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::*)(::StringW)>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::_TryShowReportHistory_b__1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1553508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*>::get(), "<TryShowReportHistory>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerListItem>& GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerListItem> const& GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerListItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0* GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*>());
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::_TryShowReportHistory_b__0(int32_t reportCount, int32_t banCount, int32_t longestBanDuration, bool wasPermabanned) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*>::get(), "<TryShowReportHistory>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reportCount, banCount, longestBanDuration, wasPermabanned);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::_TryShowReportHistory_b__1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*>::get(), "<TryShowReportHistory>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0::__PlayerListItem____c__DisplayClass37_0() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1552700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0._OnWarnButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_OnWarnButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x155361c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(), "<OnWarnButtonPressed>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0._OnWarnButtonPressed_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_OnWarnButtonPressed_b__1)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x155374c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(),
                                                 "<OnWarnButtonPressed>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0._OnWarnButtonPressed_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::*)(::StringW)>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_OnWarnButtonPressed_b__2)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1553810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(), "<OnWarnButtonPressed>b__2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerData& GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_get_playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr ::GlobalNamespace::PlayerData const& GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_get_playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_set_playerData(::GlobalNamespace::PlayerData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerData = value;
}
constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*& GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*> const&
GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_set___9__1(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountFailed*& GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountFailed*> const&
GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__cordl_internal_set___9__2(::GlobalNamespace::__ReportsManager__OnReportAccountFailed* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0* GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>());
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_OnWarnButtonPressed_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(), "<OnWarnButtonPressed>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_OnWarnButtonPressed_b__1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(),
                                                                             "<OnWarnButtonPressed>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::_OnWarnButtonPressed_b__2(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*>::get(), "<OnWarnButtonPressed>b__2",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0::__PlayerListItem____c__DisplayClass39_0() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1552a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0._OnBanButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_OnBanButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x15538fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(), "<OnBanButtonPressed>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0._OnBanButtonPressed_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::*)()>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_OnBanButtonPressed_b__1)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1553a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(), "<OnBanButtonPressed>b__1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0._OnBanButtonPressed_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::*)(::StringW)>(
    &::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_OnBanButtonPressed_b__2)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1553b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(), "<OnBanButtonPressed>b__2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerData& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get_playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr ::GlobalNamespace::PlayerData const& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get_playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerData;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_set_playerData(::GlobalNamespace::PlayerData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerData = value;
}
constexpr int32_t& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get_durationDays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___durationDays;
}
constexpr int32_t const& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get_durationDays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___durationDays;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_set_durationDays(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___durationDays = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerListItem>& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerListItem> const& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerListItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*> const&
GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_set___9__1(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountFailed*& GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountFailed*> const&
GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__cordl_internal_set___9__2(::GlobalNamespace::__ReportsManager__OnReportAccountFailed* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0* GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>());
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_OnBanButtonPressed_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(), "<OnBanButtonPressed>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_OnBanButtonPressed_b__1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(),
                                                                             "<OnBanButtonPressed>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::_OnBanButtonPressed_b__2(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*>::get(), "<OnBanButtonPressed>b__2",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0::__PlayerListItem____c__DisplayClass40_0() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.Display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PlayerListItem::Display)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1550dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnCanKickOtherPlayersUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)(bool)>(
    &::GlobalNamespace::PlayerListItem::OnCanKickOtherPlayersUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1551b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnCanKickOtherPlayersUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1551b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::DestroySelf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1551270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "DestroySelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnMuteButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::OnMuteButtonPressed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1551ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnMuteButtonPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnUserMutedStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)(::StringW, bool)>(
    &::GlobalNamespace::PlayerListItem::OnUserMutedStateChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1551bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnUserMutedStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.SetIsMuted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)(bool)>(&::GlobalNamespace::PlayerListItem::SetIsMuted)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1551c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "SetIsMuted",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnReportButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::OnReportButtonPressed)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x1551cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(),
                                                                               "OnReportButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnKickButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::OnKickButtonPressed)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x155223c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnKickButtonPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.SetBanButtonsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)(bool)>(&::GlobalNamespace::PlayerListItem::SetBanButtonsActive)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1551acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "SetBanButtonsActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.TryShowReportHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::TryShowReportHistory)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x155202c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(),
                                                                               "TryShowReportHistory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnWarnButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::OnWarnButtonPressed)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x15524dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnWarnButtonPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnBanButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)(int32_t)>(&::GlobalNamespace::PlayerListItem::OnBanButtonPressed)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x1552708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnBanButtonPressed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnAddFriendButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::OnAddFriendButtonPressed)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x1552a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(),
                                                                               "OnAddFriendButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1552d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1552d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::Register)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x15517a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Register",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.Deregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::Deregister)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x15514c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Deregister",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.OnSpeakingVolumeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)(float_t)>(&::GlobalNamespace::PlayerListItem::OnSpeakingVolumeUpdated)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1552da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnSpeakingVolumeUpdated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PlayerListItem::*)(::GlobalNamespace::PlayerListItem*)>(
    &::GlobalNamespace::PlayerListItem::CompareTo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1551178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerListItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerListItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerListItem::*)()>(&::GlobalNamespace::PlayerListItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1552e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::PlayerListItem::__cordl_internal_get_playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNameText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNameText;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_playerNameText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::PlayerListItem::__cordl_internal_get_backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundImage;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_backgroundImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerListItem::__cordl_internal_get_seekerBorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekerBorder;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_seekerBorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekerBorder;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_seekerBorder(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seekerBorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController>& GlobalNamespace::PlayerListItem::__cordl_internal_get_headVoiceChatSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headVoiceChatSource;
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_headVoiceChatSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headVoiceChatSource;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_headVoiceChatSource(::UnityW<::GlobalNamespace::ExpressionController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headVoiceChatSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Avatar>& GlobalNamespace::PlayerListItem::__cordl_internal_get_avatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr ::UnityW<::GlobalNamespace::Avatar> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_avatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatar;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avatar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerListItem::__cordl_internal_get_headMutedContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headMutedContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_headMutedContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headMutedContainer;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_headMutedContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headMutedContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::PlayerListItem::__cordl_internal_get_muteButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___muteButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_muteButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___muteButton;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_muteButton(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___muteButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PlayerListItem::__cordl_internal_get_unmutedSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmutedSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_unmutedSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmutedSprite;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_unmutedSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unmutedSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PlayerListItem::__cordl_internal_get_unmutedSilentSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmutedSilentSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_unmutedSilentSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmutedSilentSprite;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_unmutedSilentSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unmutedSilentSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PlayerListItem::__cordl_internal_get_mutedSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mutedSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_mutedSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mutedSprite;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_mutedSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mutedSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerListItem::__cordl_internal_get_isMuted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMuted;
}
constexpr bool const& GlobalNamespace::PlayerListItem::__cordl_internal_get_isMuted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMuted;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_isMuted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMuted = value;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::PlayerListItem::__cordl_internal_get_reportButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_reportButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportButton;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_reportButton(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reportButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::PlayerListItem::__cordl_internal_get_kickButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_kickButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickButton;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_kickButton(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kickButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::PlayerListItem::__cordl_internal_get_addFriendButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addFriendButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_addFriendButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addFriendButton;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_addFriendButton(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___addFriendButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerListItem::__cordl_internal_get_banButtonContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banButtonContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_banButtonContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banButtonContainer;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_banButtonContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___banButtonContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::PlayerListItem::__cordl_internal_get_roleIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_roleIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleIcon;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_roleIcon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roleIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerListItem::__cordl_internal_get_nameContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_nameContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameContainer;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_nameContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerListItem::__cordl_internal_get_spectatorContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spectatorContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerListItem::__cordl_internal_get_spectatorContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spectatorContainer;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_spectatorContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spectatorContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerListItem::__cordl_internal_get_isMaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMaster;
}
constexpr bool const& GlobalNamespace::PlayerListItem::__cordl_internal_get_isMaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMaster;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_isMaster(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMaster = value;
}
constexpr ::StringW& GlobalNamespace::PlayerListItem::__cordl_internal_get_userID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userID;
}
constexpr ::StringW const& GlobalNamespace::PlayerListItem::__cordl_internal_get_userID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userID;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_userID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerListItem::__cordl_internal_get_registeredUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredUserID;
}
constexpr ::StringW const& GlobalNamespace::PlayerListItem::__cordl_internal_get_registeredUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredUserID;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_registeredUserID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registeredUserID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerListItem::__cordl_internal_get_sortName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortName;
}
constexpr ::StringW const& GlobalNamespace::PlayerListItem::__cordl_internal_get_sortName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortName;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_sortName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sortName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerListItem::__cordl_internal_get_isSpectator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSpectator;
}
constexpr bool const& GlobalNamespace::PlayerListItem::__cordl_internal_get_isSpectator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSpectator;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_isSpectator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSpectator = value;
}
constexpr bool& GlobalNamespace::PlayerListItem::__cordl_internal_get_isReportPromptActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReportPromptActive;
}
constexpr bool const& GlobalNamespace::PlayerListItem::__cordl_internal_get_isReportPromptActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReportPromptActive;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_isReportPromptActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReportPromptActive = value;
}
constexpr float_t& GlobalNamespace::PlayerListItem::__cordl_internal_get_nextCanShowReportHistoryTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextCanShowReportHistoryTime;
}
constexpr float_t const& GlobalNamespace::PlayerListItem::__cordl_internal_get_nextCanShowReportHistoryTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextCanShowReportHistoryTime;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_nextCanShowReportHistoryTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextCanShowReportHistoryTime = value;
}
constexpr bool& GlobalNamespace::PlayerListItem::__cordl_internal_get_wasHighEnergy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasHighEnergy;
}
constexpr bool const& GlobalNamespace::PlayerListItem::__cordl_internal_get_wasHighEnergy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasHighEnergy;
}
constexpr void GlobalNamespace::PlayerListItem::__cordl_internal_set_wasHighEnergy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasHighEnergy = value;
}
inline void GlobalNamespace::PlayerListItem::setStaticF_isModeratorActionPromptActive(bool value) {
  ::cordl_internals::setStaticField<bool, "isModeratorActionPromptActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::PlayerListItem::getStaticF_isModeratorActionPromptActive() {
  return ::cordl_internals::getStaticField<bool, "isModeratorActionPromptActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get>();
}
inline void GlobalNamespace::PlayerListItem::Display(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerListItem::OnCanKickOtherPlayersUpdated(bool newCanKickOtherPlayers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnCanKickOtherPlayersUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCanKickOtherPlayers);
}
inline void GlobalNamespace::PlayerListItem::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "DestroySelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnMuteButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnMuteButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnUserMutedStateChanged(::StringW userID, bool newMuted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnUserMutedStateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID, newMuted);
}
inline void GlobalNamespace::PlayerListItem::SetIsMuted(bool newIsMuted) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "SetIsMuted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsMuted);
}
inline void GlobalNamespace::PlayerListItem::OnReportButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnReportButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnKickButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnKickButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::SetBanButtonsActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "SetBanButtonsActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::PlayerListItem::TryShowReportHistory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "TryShowReportHistory",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnWarnButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnWarnButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnBanButtonPressed(int32_t durationDays) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnBanButtonPressed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, durationDays);
}
inline void GlobalNamespace::PlayerListItem::OnAddFriendButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(),
                                                                             "OnAddFriendButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::Register() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Register",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::Deregister() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "Deregister",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerListItem::OnSpeakingVolumeUpdated(float_t newEnergy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "OnSpeakingVolumeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newEnergy);
}
inline int32_t GlobalNamespace::PlayerListItem::CompareTo(::GlobalNamespace::PlayerListItem* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerListItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline ::GlobalNamespace::PlayerListItem* GlobalNamespace::PlayerListItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerListItem*>());
}
inline void GlobalNamespace::PlayerListItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerListItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerListItem::PlayerListItem() {}
