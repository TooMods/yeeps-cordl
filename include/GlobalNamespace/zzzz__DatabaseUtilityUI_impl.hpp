#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DatabaseUtilityUI_def.hpp"
#include "GlobalNamespace/zzzz__DatabaseUtilityUI_def.hpp"
#include "GlobalNamespace/zzzz__DatabaseUtility_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::*)()>(
    &::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x276c7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x276ca80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::DatabaseUtilityUI>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::__DatabaseUtilityUI___HandleButtonPressed_d__5(int32_t __1__state,
                                                                                                                            ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                            ::UnityW<::GlobalNamespace::DatabaseUtilityUI> __4__this,
                                                                                                                            ::StringW password,
                                                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->password = password;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5::__DatabaseUtilityUI___HandleButtonPressed_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::DatabaseUtilityUI.LinkToUtility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DatabaseUtilityUI::*)(::GlobalNamespace::DatabaseUtility*)>(
    &::GlobalNamespace::DatabaseUtilityUI::LinkToUtility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(), "LinkToUtility", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DatabaseUtility*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DatabaseUtilityUI.OnSubmitButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DatabaseUtilityUI::*)()>(&::GlobalNamespace::DatabaseUtilityUI::OnSubmitButtonPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x276c710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(),
                                                                               "OnSubmitButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DatabaseUtilityUI.HandleButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DatabaseUtilityUI::*)(::StringW)>(
    &::GlobalNamespace::DatabaseUtilityUI::HandleButtonPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x276c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(), "HandleButtonPressed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DatabaseUtilityUI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DatabaseUtilityUI::*)()>(&::GlobalNamespace::DatabaseUtilityUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::InputField>& GlobalNamespace::DatabaseUtilityUI::__cordl_internal_get_passwordField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passwordField;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& GlobalNamespace::DatabaseUtilityUI::__cordl_internal_get_passwordField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passwordField;
}
constexpr void GlobalNamespace::DatabaseUtilityUI::__cordl_internal_set_passwordField(::UnityW<::UnityEngine::UI::InputField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passwordField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::DatabaseUtilityUI::__cordl_internal_get_submitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___submitButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::DatabaseUtilityUI::__cordl_internal_get_submitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___submitButton;
}
constexpr void GlobalNamespace::DatabaseUtilityUI::__cordl_internal_set_submitButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___submitButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::DatabaseUtility>& GlobalNamespace::DatabaseUtilityUI::__cordl_internal_get_utility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___utility;
}
constexpr ::UnityW<::GlobalNamespace::DatabaseUtility> const& GlobalNamespace::DatabaseUtilityUI::__cordl_internal_get_utility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___utility;
}
constexpr void GlobalNamespace::DatabaseUtilityUI::__cordl_internal_set_utility(::UnityW<::GlobalNamespace::DatabaseUtility> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___utility)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DatabaseUtilityUI::LinkToUtility(::GlobalNamespace::DatabaseUtility* utility) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(), "LinkToUtility", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DatabaseUtility*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, utility);
}
inline void GlobalNamespace::DatabaseUtilityUI::OnSubmitButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(),
                                                                             "OnSubmitButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DatabaseUtilityUI::HandleButtonPressed(::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(), "HandleButtonPressed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
inline ::GlobalNamespace::DatabaseUtilityUI* GlobalNamespace::DatabaseUtilityUI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DatabaseUtilityUI*>());
}
inline void GlobalNamespace::DatabaseUtilityUI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DatabaseUtilityUI*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DatabaseUtilityUI::DatabaseUtilityUI() {}
