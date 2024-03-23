#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryUtils_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__IEnvironments_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ICachePersister_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetricsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryConfig_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetryUtils.CreateMetricsFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Core::Telemetry::Internal::
                    IMetricsFactory* (*)(::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*,
                                         ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Core::Environments::Internal::IEnvironments*)>(
        &::Unity::Services::Core::Telemetry::Internal::TelemetryUtils::CreateMetricsFactory)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x270db4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "CreateMetricsFactory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetryUtils.CreateDiagnosticsFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Core::Telemetry::Internal::
                    IDiagnosticsFactory* (*)(::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*,
                                             ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Core::Environments::Internal::IEnvironments*)>(
        &::Unity::Services::Core::Telemetry::Internal::TelemetryUtils::CreateDiagnosticsFactory)> {
  constexpr static std::size_t size = 0x15bd8;
  constexpr static std::size_t addrs = 0x270e334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "CreateDiagnosticsFactory",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetryUtils.IsTelemetryDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*)>(
    &::Unity::Services::Core::Telemetry::Internal::TelemetryUtils::IsTelemetryDisabled)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x270de70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "IsTelemetryDisabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetryUtils.CreateTelemetryConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* (*)(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*)>(
        &::Unity::Services::Core::Telemetry::Internal::TelemetryUtils::CreateTelemetryConfig)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x270df2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "CreateTelemetryConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetryUtils.LogTelemetryException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*, bool)>(
    &::Unity::Services::Core::Telemetry::Internal::TelemetryUtils::LogTelemetryException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270bd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "LogTelemetryException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* Unity::Services::Core::Telemetry::Internal::TelemetryUtils::CreateMetricsFactory(
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "CreateMetricsFactory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*, false>(nullptr, ___internal_method, scheduler, projectConfiguration, cloudProjectId,
                                                                                                                    environments);
}
inline ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* Unity::Services::Core::Telemetry::Internal::TelemetryUtils::CreateDiagnosticsFactory(
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "CreateDiagnosticsFactory",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*, false>(nullptr, ___internal_method, scheduler, projectConfiguration, cloudProjectId,
                                                                                                                        environments);
}
inline bool Unity::Services::Core::Telemetry::Internal::TelemetryUtils::IsTelemetryDisabled(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "IsTelemetryDisabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, projectConfiguration);
}
template <typename TPayload>
inline ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*
Unity::Services::Core::Telemetry::Internal::TelemetryUtils::CreateCachePersister(::StringW fileName, ::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "CreateCachePersister",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*, false>(nullptr, ___internal_method, fileName, platform);
}
inline ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*
Unity::Services::Core::Telemetry::Internal::TelemetryUtils::CreateTelemetryConfig(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "CreateTelemetryConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*, false>(nullptr, ___internal_method, projectConfiguration);
}
/// @param predicateValue: bool (default: false)
inline bool Unity::Services::Core::Telemetry::Internal::TelemetryUtils::LogTelemetryException(::System::Exception* e, bool predicateValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*>::get(), "LogTelemetryException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, e, predicateValue);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetryUtils::TelemetryUtils() {}
