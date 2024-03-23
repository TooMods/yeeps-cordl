#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExponentialBackOffRetryPolicy)
namespace Unity::Services::Core::Telemetry::Internal {
struct WebRequest;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class ExponentialBackOffRetryPolicy;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy);
// Type: Unity.Services.Core.Telemetry.Internal::ExponentialBackOffRetryPolicy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::ExponentialBackOffRetryPolicy*
class CORDL_TYPE ExponentialBackOffRetryPolicy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseDelaySeconds)) float_t BaseDelaySeconds;

  __declspec(property(get = get_MaxTryCount)) int32_t MaxTryCount;

  /// @brief Field m_BaseDelaySeconds, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BaseDelaySeconds, put = __cordl_internal_set_m_BaseDelaySeconds)) float_t m_BaseDelaySeconds;

  /// @brief Field m_MaxTryCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxTryCount, put = __cordl_internal_set_m_MaxTryCount)) int32_t m_MaxTryCount;

  /// @brief Method CanRetry, addr 0x270d45c, size 0x44, virtual false, abstract: false, final false
  inline bool CanRetry(::Unity::Services::Core::Telemetry::Internal::WebRequest webRequest, int32_t sendCount);

  /// @brief Method GetDelayBeforeSendingSeconds, addr 0x270d4e8, size 0x30, virtual false, abstract: false, final false
  inline float_t GetDelayBeforeSendingSeconds(int32_t sendCount);

  /// @brief Method IsTransientError, addr 0x270d4a0, size 0x38, virtual false, abstract: false, final false
  static inline bool IsTransientError(::Unity::Services::Core::Telemetry::Internal::WebRequest webRequest);

  static inline ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* New_ctor();

  /// @brief Method <IsTransientError>g__IsServerErrorCode|9_0, addr 0x270d4d8, size 0x10, virtual false, abstract: false, final false
  static inline bool _IsTransientError_g__IsServerErrorCode_9_0(int64_t responseCode);

  constexpr float_t const& __cordl_internal_get_m_BaseDelaySeconds() const;

  constexpr float_t& __cordl_internal_get_m_BaseDelaySeconds();

  constexpr int32_t const& __cordl_internal_get_m_MaxTryCount() const;

  constexpr int32_t& __cordl_internal_get_m_MaxTryCount();

  constexpr void __cordl_internal_set_m_BaseDelaySeconds(float_t value);

  constexpr void __cordl_internal_set_m_MaxTryCount(int32_t value);

  /// @brief Method .ctor, addr 0x270d518, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseDelaySeconds, addr 0x270d454, size 0x8, virtual false, abstract: false, final false
  inline float_t get_BaseDelaySeconds();

  /// @brief Method get_MaxTryCount, addr 0x270d44c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxTryCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExponentialBackOffRetryPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExponentialBackOffRetryPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExponentialBackOffRetryPolicy(ExponentialBackOffRetryPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExponentialBackOffRetryPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExponentialBackOffRetryPolicy(ExponentialBackOffRetryPolicy const&) = delete;

  /// @brief Field m_MaxTryCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_MaxTryCount;

  /// @brief Field m_BaseDelaySeconds, offset: 0x14, size: 0x4, def value: None
  float_t ___m_BaseDelaySeconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy, ___m_MaxTryCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy, ___m_BaseDelaySeconds) == 0x14, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*, "Unity.Services.Core.Telemetry.Internal", "ExponentialBackOffRetryPolicy");
