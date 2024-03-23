#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GameAnalyticsSDK/Events/zzzz__GA_Error_def.hpp"
#include "GameAnalyticsSDK/zzzz__GAErrorSeverity_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GameAnalyticsSDK::Events::GA_Error.NewEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::GameAnalyticsSDK::GAErrorSeverity, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*, bool)>(&::GameAnalyticsSDK::Events::GA_Error::NewEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1082664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Error*>::get(), "NewEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Events::GA_Error.CreateNewEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::GameAnalyticsSDK::GAErrorSeverity, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*, bool)>(&::GameAnalyticsSDK::Events::GA_Error::CreateNewEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x10828a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Error*>::get(), "CreateNewEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GameAnalyticsSDK::Events::GA_Error::NewEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message,
                                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Error*>::get(), "NewEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, severity, message, fields, mergeFields);
}
/// @param mergeFields: bool (default: false)
inline void GameAnalyticsSDK::Events::GA_Error::CreateNewEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message,
                                                               ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Error*>::get(), "CreateNewEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, severity, message, fields, mergeFields);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Events::GA_Error::GA_Error() {}
