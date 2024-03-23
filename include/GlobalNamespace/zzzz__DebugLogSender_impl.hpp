#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DebugLogSender_def.hpp"
#include "GlobalNamespace/zzzz__DebugLogSender_def.hpp"
#include "GlobalNamespace/zzzz__LogManager_def.hpp"
#include "GlobalNamespace/zzzz__SimpleButtonController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__DebugLogSender____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugLogSender____c::*)()>(&::GlobalNamespace::__DebugLogSender____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15477fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugLogSender____c._OnSendLogsButtonPressed_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugLogSender____c::*)()>(
    &::GlobalNamespace::__DebugLogSender____c::_OnSendLogsButtonPressed_b__5_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1547804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get(), "<OnSendLogsButtonPressed>b__5_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugLogSender____c._OnSendLogsButtonPressed_b__5_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugLogSender____c::*)(::StringW)>(
    &::GlobalNamespace::__DebugLogSender____c::_OnSendLogsButtonPressed_b__5_1)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x15478a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get(), "<OnSendLogsButtonPressed>b__5_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__DebugLogSender____c::setStaticF___9(::GlobalNamespace::__DebugLogSender____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugLogSender____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get>(
      std::forward<::GlobalNamespace::__DebugLogSender____c*>(value));
}
inline ::GlobalNamespace::__DebugLogSender____c* GlobalNamespace::__DebugLogSender____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugLogSender____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get>();
}
inline void GlobalNamespace::__DebugLogSender____c::setStaticF___9__5_0(::GlobalNamespace::__LogManager__OnSendLogsSuccess* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__LogManager__OnSendLogsSuccess*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get>(
      std::forward<::GlobalNamespace::__LogManager__OnSendLogsSuccess*>(value));
}
inline ::GlobalNamespace::__LogManager__OnSendLogsSuccess* GlobalNamespace::__DebugLogSender____c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__LogManager__OnSendLogsSuccess*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get>();
}
inline void GlobalNamespace::__DebugLogSender____c::setStaticF___9__5_1(::GlobalNamespace::__LogManager__OnSendLogsFailed* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__LogManager__OnSendLogsFailed*, "<>9__5_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get>(
      std::forward<::GlobalNamespace::__LogManager__OnSendLogsFailed*>(value));
}
inline ::GlobalNamespace::__LogManager__OnSendLogsFailed* GlobalNamespace::__DebugLogSender____c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__LogManager__OnSendLogsFailed*, "<>9__5_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get>();
}
inline ::GlobalNamespace::__DebugLogSender____c* GlobalNamespace::__DebugLogSender____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugLogSender____c*>());
}
inline void GlobalNamespace::__DebugLogSender____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugLogSender____c::_OnSendLogsButtonPressed_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get(),
                                                                             "<OnSendLogsButtonPressed>b__5_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugLogSender____c::_OnSendLogsButtonPressed_b__5_1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugLogSender____c*>::get(), "<OnSendLogsButtonPressed>b__5_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugLogSender____c::__DebugLogSender____c() {}
//  Writing Method size for method: ::GlobalNamespace::DebugLogSender.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugLogSender::*)()>(&::GlobalNamespace::DebugLogSender::OnEnable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x15473a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugLogSender*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugLogSender.OnSendLogsButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugLogSender::*)()>(&::GlobalNamespace::DebugLogSender::OnSendLogsButtonPressed)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x15474ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugLogSender*>::get(),
                                                                               "OnSendLogsButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugLogSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DebugLogSender::*)()>(&::GlobalNamespace::DebugLogSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1547790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugLogSender*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DebugLogSender::__cordl_internal_get_buttonContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DebugLogSender::__cordl_internal_get_buttonContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonContainer;
}
constexpr void GlobalNamespace::DebugLogSender::__cordl_internal_set_buttonContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::DebugLogSender::__cordl_internal_get_sendButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::DebugLogSender::__cordl_internal_get_sendButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendButton;
}
constexpr void GlobalNamespace::DebugLogSender::__cordl_internal_set_sendButton(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sendButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DebugLogSender::__cordl_internal_get_nextCanSendLogsTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextCanSendLogsTime;
}
constexpr float_t const& GlobalNamespace::DebugLogSender::__cordl_internal_get_nextCanSendLogsTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextCanSendLogsTime;
}
constexpr void GlobalNamespace::DebugLogSender::__cordl_internal_set_nextCanSendLogsTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextCanSendLogsTime = value;
}
inline void GlobalNamespace::DebugLogSender::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugLogSender*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DebugLogSender::OnSendLogsButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugLogSender*>::get(),
                                                                             "OnSendLogsButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DebugLogSender* GlobalNamespace::DebugLogSender::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DebugLogSender*>());
}
inline void GlobalNamespace::DebugLogSender::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugLogSender*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugLogSender::DebugLogSender() {}
