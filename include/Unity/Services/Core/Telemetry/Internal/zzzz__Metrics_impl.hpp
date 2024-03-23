#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Metrics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricType_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Metric_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsHandler_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::MetricsHandler* (
    ::Unity::Services::Core::Telemetry::Internal::Metrics::*)()>(&::Unity::Services::Core::Telemetry::Internal::Metrics::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270cbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                                                                               "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics.get_PackageTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::Unity::Services::Core::Telemetry::Internal::Metrics::*)()>(&::Unity::Services::Core::Telemetry::Internal::Metrics::get_PackageTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270cbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                                                                               "get_PackageTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::Metrics::*)(
    ::Unity::Services::Core::Telemetry::Internal::MetricsHandler*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
    &::Unity::Services::Core::Telemetry::Internal::Metrics::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x270cbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics.CreateMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::Metric (::Unity::Services::Core::Telemetry::Internal::Metrics::*)(
    ::StringW, double_t, ::Unity::Services::Core::Telemetry::Internal::MetricType, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
    &::Unity::Services::Core::Telemetry::Internal::Metrics::CreateMetric)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x270cbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "CreateMetric", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::MetricType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics.Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Telemetry::Internal::Metrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
        &::Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x270cca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics.Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Telemetry::Internal::Metrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
        &::Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x270cd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics.Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Services::Core::Telemetry::Internal::Metrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
        &::Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x270ce08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr Unity::Services::Core::Telemetry::Internal::Metrics::operator ::Unity::Services::Core::Telemetry::Internal::IMetrics*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* Unity::Services::Core::Telemetry::Internal::Metrics::i___Unity__Services__Core__Telemetry__Internal__IMetrics() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsHandler*& Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_get__Handler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*> const&
Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_get__Handler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Handler_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_set__Handler_k__BackingField(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Handler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_get__PackageTags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PackageTags_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_get__PackageTags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PackageTags_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_set__PackageTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PackageTags_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* Unity::Services::Core::Telemetry::Internal::Metrics::get_Handler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                                                                             "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Unity::Services::Core::Telemetry::Internal::Metrics::get_PackageTags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                                                                             "get_PackageTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::Metrics*
Unity::Services::Core::Telemetry::Internal::Metrics::New_ctor(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* handler,
                                                              ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::Metrics*>(handler, packageTags));
}
inline void Unity::Services::Core::Telemetry::Internal::Metrics::_ctor(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* handler,
                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, packageTags);
}
inline ::Unity::Services::Core::Telemetry::Internal::Metric
Unity::Services::Core::Telemetry::Internal::Metrics::CreateMetric(::StringW name, double_t value, ::Unity::Services::Core::Telemetry::Internal::MetricType type,
                                                                  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "CreateMetric", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::MetricType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::Metric, false>(this, ___internal_method, name, value, type, tags);
}
inline void
Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric(::StringW name, double_t value,
                                                                                                                     ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
inline void
Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric(::StringW name, double_t time,
                                                                                                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, time, tags);
}
inline void
Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric(::StringW name, double_t value,
                                                                                                                   ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(), "Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::Metrics::Metrics() {}
