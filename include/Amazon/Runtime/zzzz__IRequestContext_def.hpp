#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRequestContext)
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IMarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class ResponseUnmarshaller;
}
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime::Internal {
class IServiceMetadata;
}
namespace Amazon::Runtime::Internal {
class InvokeOptionsBase;
}
namespace Amazon::Runtime::Internal {
class MonitoringAPICallAttempt;
}
namespace Amazon::Runtime::Internal {
class MonitoringAPICallEvent;
}
namespace Amazon::Runtime::Internal {
struct __CapacityManager__CapacityType;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Amazon::Runtime {
class IRequestContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IRequestContext);
// Type: Amazon.Runtime::IRequestContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IRequestContext*
class CORDL_TYPE IRequestContext {
public:
  // Declarations
  __declspec(property(get = get_CSMCallAttempt, put = set_CSMCallAttempt))::Amazon::Runtime::Internal::MonitoringAPICallAttempt* CSMCallAttempt;

  __declspec(property(get = get_CSMCallEvent, put = set_CSMCallEvent))::Amazon::Runtime::Internal::MonitoringAPICallEvent* CSMCallEvent;

  __declspec(property(get = get_CSMEnabled)) bool CSMEnabled;

  __declspec(property(get = get_CancellationToken))::System::Threading::CancellationToken CancellationToken;

  __declspec(property(get = get_ClientConfig))::Amazon::Runtime::IClientConfig* ClientConfig;

  __declspec(property(get = get_EndpointDiscoveryRetries, put = set_EndpointDiscoveryRetries)) int32_t EndpointDiscoveryRetries;

  __declspec(property(get = get_ImmutableCredentials, put = set_ImmutableCredentials))::Amazon::Runtime::ImmutableCredentials* ImmutableCredentials;

  __declspec(property(get = get_InvocationId))::System::Guid InvocationId;

  __declspec(property(get = get_IsAsync)) bool IsAsync;

  __declspec(property(get = get_IsLastExceptionRetryable, put = set_IsLastExceptionRetryable)) bool IsLastExceptionRetryable;

  __declspec(property(get = get_IsSigned, put = set_IsSigned)) bool IsSigned;

  __declspec(property(get = get_LastCapacityType, put = set_LastCapacityType))::Amazon::Runtime::Internal::__CapacityManager__CapacityType LastCapacityType;

  __declspec(property(get = get_Marshaller))::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* Marshaller;

  __declspec(property(get = get_Metrics))::Amazon::Runtime::Internal::Util::RequestMetrics* Metrics;

  __declspec(property(get = get_Options))::Amazon::Runtime::Internal::InvokeOptionsBase* Options;

  __declspec(property(get = get_OriginalRequest))::Amazon::Runtime::AmazonWebServiceRequest* OriginalRequest;

  __declspec(property(get = get_Request, put = set_Request))::Amazon::Runtime::Internal::IRequest* Request;

  __declspec(property(get = get_RequestName))::StringW RequestName;

  __declspec(property(get = get_Retries, put = set_Retries)) int32_t Retries;

  __declspec(property(get = get_ServiceMetaData))::Amazon::Runtime::Internal::IServiceMetadata* ServiceMetaData;

  __declspec(property(get = get_Signer))::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Signer;

  __declspec(property(get = get_Unmarshaller))::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* Unmarshaller;

  /// @brief Method get_CSMCallAttempt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::MonitoringAPICallAttempt* get_CSMCallAttempt();

  /// @brief Method get_CSMCallEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::MonitoringAPICallEvent* get_CSMCallEvent();

  /// @brief Method get_CSMEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CSMEnabled();

  /// @brief Method get_CancellationToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::CancellationToken get_CancellationToken();

  /// @brief Method get_ClientConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IClientConfig* get_ClientConfig();

  /// @brief Method get_EndpointDiscoveryRetries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_EndpointDiscoveryRetries();

  /// @brief Method get_ImmutableCredentials, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::ImmutableCredentials* get_ImmutableCredentials();

  /// @brief Method get_InvocationId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Guid get_InvocationId();

  /// @brief Method get_IsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsAsync();

  /// @brief Method get_IsLastExceptionRetryable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsLastExceptionRetryable();

  /// @brief Method get_IsSigned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsSigned();

  /// @brief Method get_LastCapacityType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::__CapacityManager__CapacityType get_LastCapacityType();

  /// @brief Method get_Marshaller, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* get_Marshaller();

  /// @brief Method get_Metrics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Util::RequestMetrics* get_Metrics();

  /// @brief Method get_Options, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::InvokeOptionsBase* get_Options();

  /// @brief Method get_OriginalRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_OriginalRequest();

  /// @brief Method get_Request, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::IRequest* get_Request();

  /// @brief Method get_RequestName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RequestName();

  /// @brief Method get_Retries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Retries();

  /// @brief Method get_ServiceMetaData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::IServiceMetadata* get_ServiceMetaData();

  /// @brief Method get_Signer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* get_Signer();

  /// @brief Method get_Unmarshaller, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* get_Unmarshaller();

  /// @brief Method set_CSMCallAttempt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_CSMCallAttempt(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* value);

  /// @brief Method set_CSMCallEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_CSMCallEvent(::Amazon::Runtime::Internal::MonitoringAPICallEvent* value);

  /// @brief Method set_EndpointDiscoveryRetries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_EndpointDiscoveryRetries(int32_t value);

  /// @brief Method set_ImmutableCredentials, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ImmutableCredentials(::Amazon::Runtime::ImmutableCredentials* value);

  /// @brief Method set_IsLastExceptionRetryable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_IsLastExceptionRetryable(bool value);

  /// @brief Method set_IsSigned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_IsSigned(bool value);

  /// @brief Method set_LastCapacityType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_LastCapacityType(::Amazon::Runtime::Internal::__CapacityManager__CapacityType value);

  /// @brief Method set_Request, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Request(::Amazon::Runtime::Internal::IRequest* value);

  /// @brief Method set_Retries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Retries(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IRequestContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRequestContext(IRequestContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRequestContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRequestContext(IRequestContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IRequestContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IRequestContext*, "Amazon.Runtime", "IRequestContext");
