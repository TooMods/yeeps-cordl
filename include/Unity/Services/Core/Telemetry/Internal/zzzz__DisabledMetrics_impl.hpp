#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DisabledMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledMetrics.Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
        &::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x270cacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(),
        "Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledMetrics.Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
        &::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x270cad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(),
        "Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledMetrics.Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
        &::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x270cad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DisabledMetrics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270cad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr Unity::Services::Core::Telemetry::Internal::DisabledMetrics::operator ::Unity::Services::Core::Telemetry::Internal::IMetrics*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* Unity::Services::Core::Telemetry::Internal::DisabledMetrics::i___Unity__Services__Core__Telemetry__Internal__IMetrics() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics*>(static_cast<void*>(this));
}
inline void Unity::Services::Core::Telemetry::Internal::DisabledMetrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric(
    ::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
inline void Unity::Services::Core::Telemetry::Internal::DisabledMetrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric(
    ::StringW name, double_t time, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(),
      "Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, time, tags);
}
inline void
Unity::Services::Core::Telemetry::Internal::DisabledMetrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric(::StringW name, double_t value,
                                                                                                                           ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
inline ::Unity::Services::Core::Telemetry::Internal::DisabledMetrics* Unity::Services::Core::Telemetry::Internal::DisabledMetrics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>());
}
inline void Unity::Services::Core::Telemetry::Internal::DisabledMetrics::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::DisabledMetrics::DisabledMetrics() {}
