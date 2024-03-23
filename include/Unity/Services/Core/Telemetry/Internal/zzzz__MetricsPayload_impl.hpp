#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsPayload_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ITelemetryEvent_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ITelemetryPayload_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Metric_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsPayload.Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (::Unity::Services::Core::Telemetry::Internal::MetricsPayload::*)()>(
        &::Unity::Services::Core::Telemetry::Internal::MetricsPayload::Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270d258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>::get(),
                                    "Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsPayload.Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Core::Telemetry::Internal::MetricsPayload::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::MetricsPayload::Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x270d260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>::get(),
                                    "Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsPayload.Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::MetricsPayload::*)(
    ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*)>(&::Unity::Services::Core::Telemetry::Internal::MetricsPayload::Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x270d2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>::get(), "Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload"
constexpr Unity::Services::Core::Telemetry::Internal::MetricsPayload::operator ::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload*() {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload"
constexpr ::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload*
Unity::Services::Core::Telemetry::Internal::MetricsPayload::i___Unity__Services__Core__Telemetry__Internal__ITelemetryPayload() {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ITelemetryPayload*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*
Unity::Services::Core::Telemetry::Internal::MetricsPayload::Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>::get(),
                                  "Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline int32_t Unity::Services::Core::Telemetry::Internal::MetricsPayload::Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>::get(),
                                  "Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Telemetry::Internal::MetricsPayload::Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add(
    ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* telemetryEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>::get(),
                                  "Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, telemetryEvent);
}
// Ctor Parameters [CppParam { name: "Metrics", ty: "::System::Collections::Generic::List_1<::Unity::Services::Core::Telemetry::Internal::Metric>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "CommonTags", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "MetricsCommonTags", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsPayload::MetricsPayload(::System::Collections::Generic::List_1<::Unity::Services::Core::Telemetry::Internal::Metric>* Metrics,
                                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CommonTags,
                                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* MetricsCommonTags) noexcept {
  this->Metrics = Metrics;
  this->CommonTags = CommonTags;
  this->MetricsCommonTags = MetricsCommonTags;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsPayload::MetricsPayload() {}
