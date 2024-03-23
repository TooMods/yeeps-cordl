#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GameAnalyticsSDK/Events/zzzz__GA_Debug_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GameAnalyticsSDK::Events::GA_Debug.HandleLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GameAnalyticsSDK::Events::GA_Debug::HandleLog)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x10822e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get(), "HandleLog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Events::GA_Debug.SubmitError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::LogType)>(&::GameAnalyticsSDK::Events::GA_Debug::SubmitError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1082634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get(), "SubmitError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Events::GA_Debug.EnabledLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GameAnalyticsSDK::Events::GA_Debug::EnabledLog)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x108266c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get(), "EnabledLog",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GameAnalyticsSDK::Events::GA_Debug::setStaticF_MaxErrorCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxErrorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>(std::forward<int32_t>(value));
}
inline int32_t GameAnalyticsSDK::Events::GA_Debug::getStaticF_MaxErrorCount() {
  return ::cordl_internals::getStaticField<int32_t, "MaxErrorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>();
}
inline void GameAnalyticsSDK::Events::GA_Debug::setStaticF__errorCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_errorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>(std::forward<int32_t>(value));
}
inline int32_t GameAnalyticsSDK::Events::GA_Debug::getStaticF__errorCount() {
  return ::cordl_internals::getStaticField<int32_t, "_errorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>();
}
inline void GameAnalyticsSDK::Events::GA_Debug::setStaticF__showLogOnGUI(bool value) {
  ::cordl_internals::setStaticField<bool, "_showLogOnGUI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>(std::forward<bool>(value));
}
inline bool GameAnalyticsSDK::Events::GA_Debug::getStaticF__showLogOnGUI() {
  return ::cordl_internals::getStaticField<bool, "_showLogOnGUI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>();
}
inline void GameAnalyticsSDK::Events::GA_Debug::setStaticF_Messages(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "Messages", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GameAnalyticsSDK::Events::GA_Debug::getStaticF_Messages() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "Messages",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get>();
}
inline void GameAnalyticsSDK::Events::GA_Debug::HandleLog(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get(), "HandleLog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logString, stackTrace, type);
}
inline void GameAnalyticsSDK::Events::GA_Debug::SubmitError(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get(), "SubmitError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, type);
}
inline void GameAnalyticsSDK::Events::GA_Debug::EnabledLog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Debug*>::get(), "EnabledLog",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Events::GA_Debug::GA_Debug() {}
