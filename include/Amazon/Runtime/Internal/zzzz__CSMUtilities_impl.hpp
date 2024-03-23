#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMUtilities_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICallAttempt_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICallEvent_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICall_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonWriter_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMUtilities.SerializetoJsonAndPostOverUDPAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Amazon::Runtime::Internal::MonitoringAPICall*)>(
    &::Amazon::Runtime::Internal::CSMUtilities::SerializetoJsonAndPostOverUDPAsync)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x23d3e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "SerializetoJsonAndPostOverUDPAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICall*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMUtilities.SerializetoJsonAndPostOverUDP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::Internal::MonitoringAPICall*)>(
    &::Amazon::Runtime::Internal::CSMUtilities::SerializetoJsonAndPostOverUDP)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x23d4768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "SerializetoJsonAndPostOverUDP", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICall*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMUtilities.GetApiNameFromRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, ::StringW)>(
    &::Amazon::Runtime::Internal::CSMUtilities::GetApiNameFromRequest)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x23d48dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "GetApiNameFromRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMUtilities.CreateUDPMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::Internal::MonitoringAPICallAttempt*, ByRef<::StringW>)>(
    &::Amazon::Runtime::Internal::CSMUtilities::CreateUDPMessage)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x23d4044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "CreateUDPMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallAttempt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMUtilities.CreateUDPMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::Internal::MonitoringAPICallEvent*, ByRef<::StringW>)>(
    &::Amazon::Runtime::Internal::CSMUtilities::CreateUDPMessage)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x23d4470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "CreateUDPMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallEvent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CSMUtilities.CreateUDPMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ThirdParty::Json::LitJson::JsonWriter* (*)(::Amazon::Runtime::Internal::MonitoringAPICall*, ::ThirdParty::Json::LitJson::JsonWriter*)>(
        &::Amazon::Runtime::Internal::CSMUtilities::CreateUDPMessage)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x23d4ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "CreateUDPMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* Amazon::Runtime::Internal::CSMUtilities::SerializetoJsonAndPostOverUDPAsync(::Amazon::Runtime::Internal::MonitoringAPICall* monitoringAPICall) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "SerializetoJsonAndPostOverUDPAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICall*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, monitoringAPICall);
}
inline void Amazon::Runtime::Internal::CSMUtilities::SerializetoJsonAndPostOverUDP(::Amazon::Runtime::Internal::MonitoringAPICall* monitoringAPICall) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "SerializetoJsonAndPostOverUDP", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICall*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, monitoringAPICall);
}
inline ::StringW Amazon::Runtime::Internal::CSMUtilities::GetApiNameFromRequest(::StringW requestName, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* serviceApiNameMapping,
                                                                                ::StringW serviceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "GetApiNameFromRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, requestName, serviceApiNameMapping, serviceName);
}
inline bool Amazon::Runtime::Internal::CSMUtilities::CreateUDPMessage(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* monitoringAPICallAttempt, ByRef<::StringW> response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "CreateUDPMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallAttempt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, monitoringAPICallAttempt, response);
}
inline bool Amazon::Runtime::Internal::CSMUtilities::CreateUDPMessage(::Amazon::Runtime::Internal::MonitoringAPICallEvent* monitoringAPICallEvent, ByRef<::StringW> response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "CreateUDPMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICallEvent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, monitoringAPICallEvent, response);
}
inline ::ThirdParty::Json::LitJson::JsonWriter* Amazon::Runtime::Internal::CSMUtilities::CreateUDPMessage(::Amazon::Runtime::Internal::MonitoringAPICall* monitoringAPICall,
                                                                                                          ::ThirdParty::Json::LitJson::JsonWriter* jw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CSMUtilities*>::get(), "CreateUDPMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::Json::LitJson::JsonWriter*, false>(nullptr, ___internal_method, monitoringAPICall, jw);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::CSMUtilities::CSMUtilities() {}
