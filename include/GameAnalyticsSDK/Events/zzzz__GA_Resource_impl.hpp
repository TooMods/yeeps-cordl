#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GameAnalyticsSDK/Events/zzzz__GA_Resource_def.hpp"
#include "GameAnalyticsSDK/zzzz__GAResourceFlowType_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GameAnalyticsSDK::Events::GA_Resource.NewEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GameAnalyticsSDK::GAResourceFlowType, ::StringW, float_t, ::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*, bool)>(
        &::GameAnalyticsSDK::Events::GA_Resource::NewEvent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1082c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Resource*>::get(), "NewEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAResourceFlowType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GameAnalyticsSDK::Events::GA_Resource::NewEvent(::GameAnalyticsSDK::GAResourceFlowType flowType, ::StringW currency, float_t amount, ::StringW itemType, ::StringW itemId,
                                                            ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Events::GA_Resource*>::get(), "NewEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAResourceFlowType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, flowType, currency, amount, itemType, itemId, fields, mergeFields);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Events::GA_Resource::GA_Resource() {}
