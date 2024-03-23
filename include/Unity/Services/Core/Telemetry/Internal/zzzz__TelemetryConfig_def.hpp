#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetryConfig)
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetryConfig;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig);
// Type: Unity.Services.Core.Telemetry.Internal::TelemetryConfig
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::TelemetryConfig*
class CORDL_TYPE TelemetryConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field MaxMetricCountPerPayload, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxMetricCountPerPayload, put = __cordl_internal_set_MaxMetricCountPerPayload)) int32_t MaxMetricCountPerPayload;

  /// @brief Field PayloadExpirationSeconds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PayloadExpirationSeconds, put = __cordl_internal_set_PayloadExpirationSeconds)) double_t PayloadExpirationSeconds;

  /// @brief Field PayloadSendingMaxIntervalSeconds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PayloadSendingMaxIntervalSeconds, put = __cordl_internal_set_PayloadSendingMaxIntervalSeconds)) double_t PayloadSendingMaxIntervalSeconds;

  /// @brief Field SafetyPersistenceIntervalSeconds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_SafetyPersistenceIntervalSeconds, put = __cordl_internal_set_SafetyPersistenceIntervalSeconds)) double_t SafetyPersistenceIntervalSeconds;

  /// @brief Field ServicePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ServicePath, put = __cordl_internal_set_ServicePath))::StringW ServicePath;

  /// @brief Field TargetUrl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TargetUrl, put = __cordl_internal_set_TargetUrl))::StringW TargetUrl;

  static inline ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* New_ctor();

  constexpr int32_t const& __cordl_internal_get_MaxMetricCountPerPayload() const;

  constexpr int32_t& __cordl_internal_get_MaxMetricCountPerPayload();

  constexpr double_t const& __cordl_internal_get_PayloadExpirationSeconds() const;

  constexpr double_t& __cordl_internal_get_PayloadExpirationSeconds();

  constexpr double_t const& __cordl_internal_get_PayloadSendingMaxIntervalSeconds() const;

  constexpr double_t& __cordl_internal_get_PayloadSendingMaxIntervalSeconds();

  constexpr double_t const& __cordl_internal_get_SafetyPersistenceIntervalSeconds() const;

  constexpr double_t& __cordl_internal_get_SafetyPersistenceIntervalSeconds();

  constexpr ::StringW const& __cordl_internal_get_ServicePath() const;

  constexpr ::StringW& __cordl_internal_get_ServicePath();

  constexpr ::StringW const& __cordl_internal_get_TargetUrl() const;

  constexpr ::StringW& __cordl_internal_get_TargetUrl();

  constexpr void __cordl_internal_set_MaxMetricCountPerPayload(int32_t value);

  constexpr void __cordl_internal_set_PayloadExpirationSeconds(double_t value);

  constexpr void __cordl_internal_set_PayloadSendingMaxIntervalSeconds(double_t value);

  constexpr void __cordl_internal_set_SafetyPersistenceIntervalSeconds(double_t value);

  constexpr void __cordl_internal_set_ServicePath(::StringW value);

  constexpr void __cordl_internal_set_TargetUrl(::StringW value);

  /// @brief Method .ctor, addr 0x270db44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryConfig(TelemetryConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryConfig(TelemetryConfig const&) = delete;

  /// @brief Field TargetUrl, offset: 0x10, size: 0x8, def value: None
  ::StringW ___TargetUrl;

  /// @brief Field ServicePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ServicePath;

  /// @brief Field PayloadExpirationSeconds, offset: 0x20, size: 0x8, def value: None
  double_t ___PayloadExpirationSeconds;

  /// @brief Field PayloadSendingMaxIntervalSeconds, offset: 0x28, size: 0x8, def value: None
  double_t ___PayloadSendingMaxIntervalSeconds;

  /// @brief Field SafetyPersistenceIntervalSeconds, offset: 0x30, size: 0x8, def value: None
  double_t ___SafetyPersistenceIntervalSeconds;

  /// @brief Field MaxMetricCountPerPayload, offset: 0x38, size: 0x4, def value: None
  int32_t ___MaxMetricCountPerPayload;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig, ___TargetUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig, ___ServicePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig, ___PayloadExpirationSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig, ___PayloadSendingMaxIntervalSeconds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig, ___SafetyPersistenceIntervalSeconds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig, ___MaxMetricCountPerPayload) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*, "Unity.Services.Core.Telemetry.Internal", "TelemetryConfig");
