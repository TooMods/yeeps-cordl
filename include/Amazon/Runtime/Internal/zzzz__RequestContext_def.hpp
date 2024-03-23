#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__CapacityManager_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestContext)
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
class IRequestContext;
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
namespace Amazon::Runtime::Internal {
class RequestContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::RequestContext);
// Type: Amazon.Runtime.Internal::RequestContext
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::RequestContext*
class CORDL_TYPE RequestContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CSMCallAttempt, put = set_CSMCallAttempt))::Amazon::Runtime::Internal::MonitoringAPICallAttempt* CSMCallAttempt;

  __declspec(property(get = get_CSMCallEvent, put = set_CSMCallEvent))::Amazon::Runtime::Internal::MonitoringAPICallEvent* CSMCallEvent;

  __declspec(property(get = get_CSMEnabled, put = set_CSMEnabled)) bool CSMEnabled;

  __declspec(property(get = get_CancellationToken, put = set_CancellationToken))::System::Threading::CancellationToken CancellationToken;

  __declspec(property(get = get_ClientConfig, put = set_ClientConfig))::Amazon::Runtime::IClientConfig* ClientConfig;

  __declspec(property(get = get_EndpointDiscoveryRetries, put = set_EndpointDiscoveryRetries)) int32_t EndpointDiscoveryRetries;

  __declspec(property(get = get_ImmutableCredentials, put = set_ImmutableCredentials))::Amazon::Runtime::ImmutableCredentials* ImmutableCredentials;

  __declspec(property(get = get_InvocationId, put = set_InvocationId))::System::Guid InvocationId;

  __declspec(property(get = get_IsAsync, put = set_IsAsync)) bool IsAsync;

  __declspec(property(get = get_IsLastExceptionRetryable, put = set_IsLastExceptionRetryable)) bool IsLastExceptionRetryable;

  __declspec(property(get = get_IsSigned, put = set_IsSigned)) bool IsSigned;

  __declspec(property(get = get_LastCapacityType, put = set_LastCapacityType))::Amazon::Runtime::Internal::__CapacityManager__CapacityType LastCapacityType;

  __declspec(property(get = get_Marshaller,
                      put = set_Marshaller))::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* Marshaller;

  __declspec(property(get = get_Metrics, put = set_Metrics))::Amazon::Runtime::Internal::Util::RequestMetrics* Metrics;

  __declspec(property(get = get_Options, put = set_Options))::Amazon::Runtime::Internal::InvokeOptionsBase* Options;

  __declspec(property(get = get_OriginalRequest, put = set_OriginalRequest))::Amazon::Runtime::AmazonWebServiceRequest* OriginalRequest;

  __declspec(property(get = get_Request, put = set_Request))::Amazon::Runtime::Internal::IRequest* Request;

  __declspec(property(get = get_RequestName))::StringW RequestName;

  __declspec(property(get = get_Retries, put = set_Retries)) int32_t Retries;

  __declspec(property(get = get_ServiceMetaData, put = set_ServiceMetaData))::Amazon::Runtime::Internal::IServiceMetadata* ServiceMetaData;

  __declspec(property(get = get_Signer))::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Signer;

  __declspec(property(get = get_Unmarshaller, put = set_Unmarshaller))::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* Unmarshaller;

  /// @brief Field <CSMCallAttempt>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMCallAttempt_k__BackingField,
                      put = __cordl_internal_set__CSMCallAttempt_k__BackingField))::Amazon::Runtime::Internal::MonitoringAPICallAttempt* _CSMCallAttempt_k__BackingField;

  /// @brief Field <CSMCallEvent>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMCallEvent_k__BackingField,
                      put = __cordl_internal_set__CSMCallEvent_k__BackingField))::Amazon::Runtime::Internal::MonitoringAPICallEvent* _CSMCallEvent_k__BackingField;

  /// @brief Field <CSMEnabled>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__CSMEnabled_k__BackingField, put = __cordl_internal_set__CSMEnabled_k__BackingField)) bool _CSMEnabled_k__BackingField;

  /// @brief Field <CancellationToken>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__CancellationToken_k__BackingField,
                      put = __cordl_internal_set__CancellationToken_k__BackingField))::System::Threading::CancellationToken _CancellationToken_k__BackingField;

  /// @brief Field <ClientConfig>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientConfig_k__BackingField,
                      put = __cordl_internal_set__ClientConfig_k__BackingField))::Amazon::Runtime::IClientConfig* _ClientConfig_k__BackingField;

  /// @brief Field <EndpointDiscoveryRetries>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__EndpointDiscoveryRetries_k__BackingField,
                      put = __cordl_internal_set__EndpointDiscoveryRetries_k__BackingField)) int32_t _EndpointDiscoveryRetries_k__BackingField;

  /// @brief Field <ImmutableCredentials>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__ImmutableCredentials_k__BackingField,
                      put = __cordl_internal_set__ImmutableCredentials_k__BackingField))::Amazon::Runtime::ImmutableCredentials* _ImmutableCredentials_k__BackingField;

  /// @brief Field <InvocationId>k__BackingField, offset 0x8c, size 0x10
  __declspec(property(get = __cordl_internal_get__InvocationId_k__BackingField, put = __cordl_internal_set__InvocationId_k__BackingField))::System::Guid _InvocationId_k__BackingField;

  /// @brief Field <IsAsync>k__BackingField, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__IsAsync_k__BackingField, put = __cordl_internal_set__IsAsync_k__BackingField)) bool _IsAsync_k__BackingField;

  /// @brief Field <IsLastExceptionRetryable>k__BackingField, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get__IsLastExceptionRetryable_k__BackingField,
                      put = __cordl_internal_set__IsLastExceptionRetryable_k__BackingField)) bool _IsLastExceptionRetryable_k__BackingField;

  /// @brief Field <IsSigned>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__IsSigned_k__BackingField, put = __cordl_internal_set__IsSigned_k__BackingField)) bool _IsSigned_k__BackingField;

  /// @brief Field <LastCapacityType>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__LastCapacityType_k__BackingField,
                      put = __cordl_internal_set__LastCapacityType_k__BackingField))::Amazon::Runtime::Internal::__CapacityManager__CapacityType _LastCapacityType_k__BackingField;

  /// @brief Field <Marshaller>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Marshaller_k__BackingField, put = __cordl_internal_set__Marshaller_k__BackingField))::Amazon::Runtime::Internal::Transform::IMarshaller_2<
      ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* _Marshaller_k__BackingField;

  /// @brief Field <Metrics>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Metrics_k__BackingField,
                      put = __cordl_internal_set__Metrics_k__BackingField))::Amazon::Runtime::Internal::Util::RequestMetrics* _Metrics_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField,
                      put = __cordl_internal_set__Options_k__BackingField))::Amazon::Runtime::Internal::InvokeOptionsBase* _Options_k__BackingField;

  /// @brief Field <OriginalRequest>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__OriginalRequest_k__BackingField,
                      put = __cordl_internal_set__OriginalRequest_k__BackingField))::Amazon::Runtime::AmazonWebServiceRequest* _OriginalRequest_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField))::Amazon::Runtime::Internal::IRequest* _Request_k__BackingField;

  /// @brief Field <Retries>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__Retries_k__BackingField, put = __cordl_internal_set__Retries_k__BackingField)) int32_t _Retries_k__BackingField;

  /// @brief Field <Unmarshaller>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Unmarshaller_k__BackingField,
                      put = __cordl_internal_set__Unmarshaller_k__BackingField))::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* _Unmarshaller_k__BackingField;

  /// @brief Field _serviceMetadata, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__serviceMetadata, put = __cordl_internal_set__serviceMetadata))::Amazon::Runtime::Internal::IServiceMetadata* _serviceMetadata;

  /// @brief Field clientSigner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clientSigner, put = __cordl_internal_set_clientSigner))::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner;

  /// @brief Convert operator to "::Amazon::Runtime::IRequestContext"
  constexpr operator ::Amazon::Runtime::IRequestContext*() noexcept;

  static inline ::Amazon::Runtime::Internal::RequestContext* New_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  constexpr ::Amazon::Runtime::Internal::MonitoringAPICallAttempt*& __cordl_internal_get__CSMCallAttempt_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::MonitoringAPICallAttempt*> const& __cordl_internal_get__CSMCallAttempt_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::MonitoringAPICallEvent*& __cordl_internal_get__CSMCallEvent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::MonitoringAPICallEvent*> const& __cordl_internal_get__CSMCallEvent_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__CSMEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CSMEnabled_k__BackingField();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get__CancellationToken_k__BackingField() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get__CancellationToken_k__BackingField();

  constexpr ::Amazon::Runtime::IClientConfig*& __cordl_internal_get__ClientConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& __cordl_internal_get__ClientConfig_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__EndpointDiscoveryRetries_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__EndpointDiscoveryRetries_k__BackingField();

  constexpr ::Amazon::Runtime::ImmutableCredentials*& __cordl_internal_get__ImmutableCredentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const& __cordl_internal_get__ImmutableCredentials_k__BackingField() const;

  constexpr ::System::Guid const& __cordl_internal_get__InvocationId_k__BackingField() const;

  constexpr ::System::Guid& __cordl_internal_get__InvocationId_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsAsync_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsAsync_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsLastExceptionRetryable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsLastExceptionRetryable_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsSigned_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsSigned_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType const& __cordl_internal_get__LastCapacityType_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType& __cordl_internal_get__LastCapacityType_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*&
  __cordl_internal_get__Marshaller_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*> const&
  __cordl_internal_get__Marshaller_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::RequestMetrics*& __cordl_internal_get__Metrics_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::RequestMetrics*> const& __cordl_internal_get__Metrics_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::InvokeOptionsBase*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::InvokeOptionsBase*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::Amazon::Runtime::AmazonWebServiceRequest*& __cordl_internal_get__OriginalRequest_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceRequest*> const& __cordl_internal_get__OriginalRequest_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::IRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IRequest*> const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__Retries_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Retries_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*& __cordl_internal_get__Unmarshaller_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*> const& __cordl_internal_get__Unmarshaller_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::IServiceMetadata*& __cordl_internal_get__serviceMetadata();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IServiceMetadata*> const& __cordl_internal_get__serviceMetadata() const;

  constexpr ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*& __cordl_internal_get_clientSigner();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*> const& __cordl_internal_get_clientSigner() const;

  constexpr void __cordl_internal_set__CSMCallAttempt_k__BackingField(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* value);

  constexpr void __cordl_internal_set__CSMCallEvent_k__BackingField(::Amazon::Runtime::Internal::MonitoringAPICallEvent* value);

  constexpr void __cordl_internal_set__CSMEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CancellationToken_k__BackingField(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set__ClientConfig_k__BackingField(::Amazon::Runtime::IClientConfig* value);

  constexpr void __cordl_internal_set__EndpointDiscoveryRetries_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ImmutableCredentials_k__BackingField(::Amazon::Runtime::ImmutableCredentials* value);

  constexpr void __cordl_internal_set__InvocationId_k__BackingField(::System::Guid value);

  constexpr void __cordl_internal_set__IsAsync_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsLastExceptionRetryable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsSigned_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LastCapacityType_k__BackingField(::Amazon::Runtime::Internal::__CapacityManager__CapacityType value);

  constexpr void
  __cordl_internal_set__Marshaller_k__BackingField(::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value);

  constexpr void __cordl_internal_set__Metrics_k__BackingField(::Amazon::Runtime::Internal::Util::RequestMetrics* value);

  constexpr void __cordl_internal_set__Options_k__BackingField(::Amazon::Runtime::Internal::InvokeOptionsBase* value);

  constexpr void __cordl_internal_set__OriginalRequest_k__BackingField(::Amazon::Runtime::AmazonWebServiceRequest* value);

  constexpr void __cordl_internal_set__Request_k__BackingField(::Amazon::Runtime::Internal::IRequest* value);

  constexpr void __cordl_internal_set__Retries_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Unmarshaller_k__BackingField(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* value);

  constexpr void __cordl_internal_set__serviceMetadata(::Amazon::Runtime::Internal::IServiceMetadata* value);

  constexpr void __cordl_internal_set_clientSigner(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* value);

  /// @brief Method .ctor, addr 0x23dc980, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  /// @brief Method get_CSMCallAttempt, addr 0x23dcba4, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::MonitoringAPICallAttempt* get_CSMCallAttempt();

  /// @brief Method get_CSMCallEvent, addr 0x23dcbb4, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::MonitoringAPICallEvent* get_CSMCallEvent();

  /// @brief Method get_CSMEnabled, addr 0x23dcd0c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CSMEnabled();

  /// @brief Method get_CancellationToken, addr 0x23dcb68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Threading::CancellationToken get_CancellationToken();

  /// @brief Method get_ClientConfig, addr 0x23dca88, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IClientConfig* get_ClientConfig();

  /// @brief Method get_EndpointDiscoveryRetries, addr 0x23dcab8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_EndpointDiscoveryRetries();

  /// @brief Method get_ImmutableCredentials, addr 0x23dcb30, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::ImmutableCredentials* get_ImmutableCredentials();

  /// @brief Method get_InvocationId, addr 0x23dcd34, size 0x10, virtual true, abstract: false, final true
  inline ::System::Guid get_InvocationId();

  /// @brief Method get_IsAsync, addr 0x23dcadc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsAsync();

  /// @brief Method get_IsLastExceptionRetryable, addr 0x23dcd20, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsLastExceptionRetryable();

  /// @brief Method get_IsSigned, addr 0x23dcac8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSigned();

  /// @brief Method get_LastCapacityType, addr 0x23dcaa8, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::__CapacityManager__CapacityType get_LastCapacityType();

  /// @brief Method get_Marshaller, addr 0x23dcb00, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* get_Marshaller();

  /// @brief Method get_Metrics, addr 0x23dca78, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Util::RequestMetrics* get_Metrics();

  /// @brief Method get_Options, addr 0x23dcb20, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::InvokeOptionsBase* get_Options();

  /// @brief Method get_OriginalRequest, addr 0x23dcaf0, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_OriginalRequest();

  /// @brief Method get_Request, addr 0x23dca68, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IRequest* get_Request();

  /// @brief Method get_RequestName, addr 0x23dcb78, size 0x2c, virtual true, abstract: false, final true
  inline ::StringW get_RequestName();

  /// @brief Method get_Retries, addr 0x23dca98, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Retries();

  /// @brief Method get_ServiceMetaData, addr 0x23dcbc4, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::IServiceMetadata* get_ServiceMetaData();

  /// @brief Method get_Signer, addr 0x23dcb40, size 0x28, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* get_Signer();

  /// @brief Method get_Unmarshaller, addr 0x23dcb10, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* get_Unmarshaller();

  /// @brief Convert to "::Amazon::Runtime::IRequestContext"
  constexpr ::Amazon::Runtime::IRequestContext* i___Amazon__Runtime__IRequestContext() noexcept;

  /// @brief Method set_CSMCallAttempt, addr 0x23dcbac, size 0x8, virtual true, abstract: false, final true
  inline void set_CSMCallAttempt(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* value);

  /// @brief Method set_CSMCallEvent, addr 0x23dcbbc, size 0x8, virtual true, abstract: false, final true
  inline void set_CSMCallEvent(::Amazon::Runtime::Internal::MonitoringAPICallEvent* value);

  /// @brief Method set_CSMEnabled, addr 0x23dcd14, size 0xc, virtual false, abstract: false, final false
  inline void set_CSMEnabled(bool value);

  /// @brief Method set_CancellationToken, addr 0x23dcb70, size 0x8, virtual false, abstract: false, final false
  inline void set_CancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method set_ClientConfig, addr 0x23dca90, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientConfig(::Amazon::Runtime::IClientConfig* value);

  /// @brief Method set_EndpointDiscoveryRetries, addr 0x23dcac0, size 0x8, virtual true, abstract: false, final true
  inline void set_EndpointDiscoveryRetries(int32_t value);

  /// @brief Method set_ImmutableCredentials, addr 0x23dcb38, size 0x8, virtual true, abstract: false, final true
  inline void set_ImmutableCredentials(::Amazon::Runtime::ImmutableCredentials* value);

  /// @brief Method set_InvocationId, addr 0x23dcd44, size 0xc, virtual false, abstract: false, final false
  inline void set_InvocationId(::System::Guid value);

  /// @brief Method set_IsAsync, addr 0x23dcae4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsAsync(bool value);

  /// @brief Method set_IsLastExceptionRetryable, addr 0x23dcd28, size 0xc, virtual true, abstract: false, final true
  inline void set_IsLastExceptionRetryable(bool value);

  /// @brief Method set_IsSigned, addr 0x23dcad0, size 0xc, virtual true, abstract: false, final true
  inline void set_IsSigned(bool value);

  /// @brief Method set_LastCapacityType, addr 0x23dcab0, size 0x8, virtual true, abstract: false, final true
  inline void set_LastCapacityType(::Amazon::Runtime::Internal::__CapacityManager__CapacityType value);

  /// @brief Method set_Marshaller, addr 0x23dcb08, size 0x8, virtual false, abstract: false, final false
  inline void set_Marshaller(::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value);

  /// @brief Method set_Metrics, addr 0x23dca80, size 0x8, virtual false, abstract: false, final false
  inline void set_Metrics(::Amazon::Runtime::Internal::Util::RequestMetrics* value);

  /// @brief Method set_Options, addr 0x23dcb28, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::Amazon::Runtime::Internal::InvokeOptionsBase* value);

  /// @brief Method set_OriginalRequest, addr 0x23dcaf8, size 0x8, virtual false, abstract: false, final false
  inline void set_OriginalRequest(::Amazon::Runtime::AmazonWebServiceRequest* value);

  /// @brief Method set_Request, addr 0x23dca70, size 0x8, virtual true, abstract: false, final true
  inline void set_Request(::Amazon::Runtime::Internal::IRequest* value);

  /// @brief Method set_Retries, addr 0x23dcaa0, size 0x8, virtual true, abstract: false, final true
  inline void set_Retries(int32_t value);

  /// @brief Method set_ServiceMetaData, addr 0x23dcbcc, size 0x140, virtual false, abstract: false, final false
  inline void set_ServiceMetaData(::Amazon::Runtime::Internal::IServiceMetadata* value);

  /// @brief Method set_Unmarshaller, addr 0x23dcb18, size 0x8, virtual false, abstract: false, final false
  inline void set_Unmarshaller(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestContext(RequestContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestContext(RequestContext const&) = delete;

  /// @brief Field _serviceMetadata, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::IServiceMetadata* ____serviceMetadata;

  /// @brief Field clientSigner, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* ___clientSigner;

  /// @brief Field <Request>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::IRequest* ____Request_k__BackingField;

  /// @brief Field <Metrics>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::RequestMetrics* ____Metrics_k__BackingField;

  /// @brief Field <ClientConfig>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IClientConfig* ____ClientConfig_k__BackingField;

  /// @brief Field <Retries>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____Retries_k__BackingField;

  /// @brief Field <LastCapacityType>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::Amazon::Runtime::Internal::__CapacityManager__CapacityType ____LastCapacityType_k__BackingField;

  /// @brief Field <EndpointDiscoveryRetries>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____EndpointDiscoveryRetries_k__BackingField;

  /// @brief Field <IsSigned>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____IsSigned_k__BackingField;

  /// @brief Field <IsAsync>k__BackingField, offset: 0x45, size: 0x1, def value: None
  bool ____IsAsync_k__BackingField;

  /// @brief Field <OriginalRequest>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonWebServiceRequest* ____OriginalRequest_k__BackingField;

  /// @brief Field <Marshaller>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* ____Marshaller_k__BackingField;

  /// @brief Field <Unmarshaller>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* ____Unmarshaller_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::InvokeOptionsBase* ____Options_k__BackingField;

  /// @brief Field <ImmutableCredentials>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::Amazon::Runtime::ImmutableCredentials* ____ImmutableCredentials_k__BackingField;

  /// @brief Field <CancellationToken>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::CancellationToken ____CancellationToken_k__BackingField;

  /// @brief Field <CSMCallAttempt>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::MonitoringAPICallAttempt* ____CSMCallAttempt_k__BackingField;

  /// @brief Field <CSMCallEvent>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::MonitoringAPICallEvent* ____CSMCallEvent_k__BackingField;

  /// @brief Field <CSMEnabled>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____CSMEnabled_k__BackingField;

  /// @brief Field <IsLastExceptionRetryable>k__BackingField, offset: 0x89, size: 0x1, def value: None
  bool ____IsLastExceptionRetryable_k__BackingField;

  /// @brief Field <InvocationId>k__BackingField, offset: 0x8c, size: 0x10, def value: None
  ::System::Guid ____InvocationId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::RequestContext, 0xa0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____serviceMetadata) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ___clientSigner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____Request_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____Metrics_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____ClientConfig_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____Retries_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____LastCapacityType_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____EndpointDiscoveryRetries_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____IsSigned_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____IsAsync_k__BackingField) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____OriginalRequest_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____Marshaller_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____Unmarshaller_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____Options_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____ImmutableCredentials_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____CancellationToken_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____CSMCallAttempt_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____CSMCallEvent_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____CSMEnabled_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____IsLastExceptionRetryable_k__BackingField) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RequestContext, ____InvocationId_k__BackingField) == 0x8c, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::RequestContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::RequestContext*, "Amazon.Runtime.Internal", "RequestContext");
