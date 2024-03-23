#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryConfig_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::TelemetryConfig::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::TelemetryConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270db44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_TargetUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetUrl;
}
constexpr ::StringW const& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_TargetUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetUrl;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_set_TargetUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_ServicePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServicePath;
}
constexpr ::StringW const& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_ServicePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServicePath;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_set_ServicePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ServicePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_PayloadExpirationSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PayloadExpirationSeconds;
}
constexpr double_t const& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_PayloadExpirationSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PayloadExpirationSeconds;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_set_PayloadExpirationSeconds(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PayloadExpirationSeconds = value;
}
constexpr double_t& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_PayloadSendingMaxIntervalSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PayloadSendingMaxIntervalSeconds;
}
constexpr double_t const& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_PayloadSendingMaxIntervalSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PayloadSendingMaxIntervalSeconds;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_set_PayloadSendingMaxIntervalSeconds(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PayloadSendingMaxIntervalSeconds = value;
}
constexpr double_t& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_SafetyPersistenceIntervalSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafetyPersistenceIntervalSeconds;
}
constexpr double_t const& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_SafetyPersistenceIntervalSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafetyPersistenceIntervalSeconds;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_set_SafetyPersistenceIntervalSeconds(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SafetyPersistenceIntervalSeconds = value;
}
constexpr int32_t& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_MaxMetricCountPerPayload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxMetricCountPerPayload;
}
constexpr int32_t const& Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_get_MaxMetricCountPerPayload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxMetricCountPerPayload;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryConfig::__cordl_internal_set_MaxMetricCountPerPayload(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxMetricCountPerPayload = value;
}
inline ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* Unity::Services::Core::Telemetry::Internal::TelemetryConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>());
}
inline void Unity::Services::Core::Telemetry::Internal::TelemetryConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig::TelemetryConfig() {}
