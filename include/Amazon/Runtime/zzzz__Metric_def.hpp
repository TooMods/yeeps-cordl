#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Metric)
// Forward declare root types
namespace Amazon::Runtime {
struct Metric;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Metric);
// Type: Amazon.Runtime::Metric
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::Amazon.Runtime::Metric
struct CORDL_TYPE Metric {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Metric_Unwrapped
  enum struct __Metric_Unwrapped : int32_t {
    __E_AWSErrorCode = static_cast<int32_t>(0x0),
    __E_AWSRequestID = static_cast<int32_t>(0x1),
    __E_AmzId2 = static_cast<int32_t>(0x2),
    __E_BytesProcessed = static_cast<int32_t>(0x3),
    __E_Exception = static_cast<int32_t>(0x4),
    __E_RedirectLocation = static_cast<int32_t>(0x5),
    __E_ResponseProcessingTime = static_cast<int32_t>(0x6),
    __E_ResponseUnmarshallTime = static_cast<int32_t>(0x7),
    __E_ResponseReadTime = static_cast<int32_t>(0x8),
    __E_StatusCode = static_cast<int32_t>(0x9),
    __E_AttemptCount = static_cast<int32_t>(0xa),
    __E_CredentialsRequestTime = static_cast<int32_t>(0xb),
    __E_HttpRequestTime = static_cast<int32_t>(0xc),
    __E_ProxyHost = static_cast<int32_t>(0xd),
    __E_ProxyPort = static_cast<int32_t>(0xe),
    __E_RequestSigningTime = static_cast<int32_t>(0xf),
    __E_RetryPauseTime = static_cast<int32_t>(0x10),
    __E_StringToSign = static_cast<int32_t>(0x11),
    __E_CanonicalRequest = static_cast<int32_t>(0x12),
    __E_CSMAttemptLatency = static_cast<int32_t>(0x13),
    __E_AsyncCall = static_cast<int32_t>(0x14),
    __E_ClientExecuteTime = static_cast<int32_t>(0x15),
    __E_MethodName = static_cast<int32_t>(0x16),
    __E_ServiceEndpoint = static_cast<int32_t>(0x17),
    __E_ServiceName = static_cast<int32_t>(0x18),
    __E_RequestSize = static_cast<int32_t>(0x19),
    __E_AmzCfId = static_cast<int32_t>(0x1a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Metric_Unwrapped() const noexcept {
    return static_cast<__Metric_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Metric();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Metric(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AWSErrorCode value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::Metric const AWSErrorCode;

  /// @brief Field AWSRequestID value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Metric const AWSRequestID;

  /// @brief Field AmzCfId value: static_cast<int32_t>(0x1a)
  static ::Amazon::Runtime::Metric const AmzCfId;

  /// @brief Field AmzId2 value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::Metric const AmzId2;

  /// @brief Field AsyncCall value: static_cast<int32_t>(0x14)
  static ::Amazon::Runtime::Metric const AsyncCall;

  /// @brief Field AttemptCount value: static_cast<int32_t>(0xa)
  static ::Amazon::Runtime::Metric const AttemptCount;

  /// @brief Field BytesProcessed value: static_cast<int32_t>(0x3)
  static ::Amazon::Runtime::Metric const BytesProcessed;

  /// @brief Field CSMAttemptLatency value: static_cast<int32_t>(0x13)
  static ::Amazon::Runtime::Metric const CSMAttemptLatency;

  /// @brief Field CanonicalRequest value: static_cast<int32_t>(0x12)
  static ::Amazon::Runtime::Metric const CanonicalRequest;

  /// @brief Field ClientExecuteTime value: static_cast<int32_t>(0x15)
  static ::Amazon::Runtime::Metric const ClientExecuteTime;

  /// @brief Field CredentialsRequestTime value: static_cast<int32_t>(0xb)
  static ::Amazon::Runtime::Metric const CredentialsRequestTime;

  /// @brief Field Exception value: static_cast<int32_t>(0x4)
  static ::Amazon::Runtime::Metric const Exception;

  /// @brief Field HttpRequestTime value: static_cast<int32_t>(0xc)
  static ::Amazon::Runtime::Metric const HttpRequestTime;

  /// @brief Field MethodName value: static_cast<int32_t>(0x16)
  static ::Amazon::Runtime::Metric const MethodName;

  /// @brief Field ProxyHost value: static_cast<int32_t>(0xd)
  static ::Amazon::Runtime::Metric const ProxyHost;

  /// @brief Field ProxyPort value: static_cast<int32_t>(0xe)
  static ::Amazon::Runtime::Metric const ProxyPort;

  /// @brief Field RedirectLocation value: static_cast<int32_t>(0x5)
  static ::Amazon::Runtime::Metric const RedirectLocation;

  /// @brief Field RequestSigningTime value: static_cast<int32_t>(0xf)
  static ::Amazon::Runtime::Metric const RequestSigningTime;

  /// @brief Field RequestSize value: static_cast<int32_t>(0x19)
  static ::Amazon::Runtime::Metric const RequestSize;

  /// @brief Field ResponseProcessingTime value: static_cast<int32_t>(0x6)
  static ::Amazon::Runtime::Metric const ResponseProcessingTime;

  /// @brief Field ResponseReadTime value: static_cast<int32_t>(0x8)
  static ::Amazon::Runtime::Metric const ResponseReadTime;

  /// @brief Field ResponseUnmarshallTime value: static_cast<int32_t>(0x7)
  static ::Amazon::Runtime::Metric const ResponseUnmarshallTime;

  /// @brief Field RetryPauseTime value: static_cast<int32_t>(0x10)
  static ::Amazon::Runtime::Metric const RetryPauseTime;

  /// @brief Field ServiceEndpoint value: static_cast<int32_t>(0x17)
  static ::Amazon::Runtime::Metric const ServiceEndpoint;

  /// @brief Field ServiceName value: static_cast<int32_t>(0x18)
  static ::Amazon::Runtime::Metric const ServiceName;

  /// @brief Field StatusCode value: static_cast<int32_t>(0x9)
  static ::Amazon::Runtime::Metric const StatusCode;

  /// @brief Field StringToSign value: static_cast<int32_t>(0x11)
  static ::Amazon::Runtime::Metric const StringToSign;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Metric, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Metric, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Metric, "Amazon.Runtime", "Metric");
