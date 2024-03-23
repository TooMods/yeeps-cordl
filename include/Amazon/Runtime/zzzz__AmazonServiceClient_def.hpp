#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonServiceClient)
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
class Logger;
}
namespace Amazon::Runtime::Internal {
class DiscoveryEndpointBase;
}
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryResolverBase;
}
namespace Amazon::Runtime::Internal {
class EndpointOperationContextBase;
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
class RuntimePipeline;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
namespace Amazon::Runtime {
class ClientConfig;
}
namespace Amazon::Runtime {
class ExceptionEventHandler;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace Amazon::Runtime {
class PreRequestEventHandler;
}
namespace Amazon::Runtime {
class RequestEventHandler;
}
namespace Amazon::Runtime {
class ResponseEventHandler;
}
namespace Amazon::Runtime {
class __AmazonServiceClient____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class AmazonServiceClient;
}
namespace Amazon::Runtime {
class __AmazonServiceClient____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AmazonServiceClient);
MARK_REF_PTR_T(::Amazon::Runtime::__AmazonServiceClient____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::AmazonServiceClient::<>c*
class CORDL_TYPE __AmazonServiceClient____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::__AmazonServiceClient____c* __9;

  /// @brief Field <>9__62_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__62_0, put = setStaticF___9__62_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* __9__62_0;

  static inline ::Amazon::Runtime::__AmazonServiceClient____c* New_ctor();

  /// @brief Method <ComposeUrl>b__62_0, addr 0x1fde964, size 0x64, virtual false, abstract: false, final false
  inline bool _ComposeUrl_b__62_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> v);

  /// @brief Method .ctor, addr 0x1fde95c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::__AmazonServiceClient____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* getStaticF___9__62_0();

  static inline void setStaticF___9(::Amazon::Runtime::__AmazonServiceClient____c* value);

  static inline void setStaticF___9__62_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AmazonServiceClient____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AmazonServiceClient____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AmazonServiceClient____c(__AmazonServiceClient____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AmazonServiceClient____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AmazonServiceClient____c(__AmazonServiceClient____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__AmazonServiceClient____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::AmazonServiceClient
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AmazonServiceClient*
class CORDL_TYPE AmazonServiceClient : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::__AmazonServiceClient____c;

  __declspec(property(get = get_Config, put = set_Config))::Amazon::Runtime::IClientConfig* Config;

  __declspec(property(get = get_Credentials, put = set_Credentials))::Amazon::Runtime::AWSCredentials* Credentials;

  __declspec(property(get = get_EndpointDiscoveryResolver, put = set_EndpointDiscoveryResolver))::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* EndpointDiscoveryResolver;

  __declspec(property(get = get_RuntimePipeline, put = set_RuntimePipeline))::Amazon::Runtime::Internal::RuntimePipeline* RuntimePipeline;

  __declspec(property(get = get_ServiceMetadata))::Amazon::Runtime::Internal::IServiceMetadata* ServiceMetadata;

  __declspec(property(get = get_Signer, put = set_Signer))::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Signer;

  __declspec(property(get = get_SupportResponseLogging)) bool SupportResponseLogging;

  /// @brief Field <Config>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Config_k__BackingField, put = __cordl_internal_set__Config_k__BackingField))::Amazon::Runtime::IClientConfig* _Config_k__BackingField;

  /// @brief Field <Credentials>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Credentials_k__BackingField, put = __cordl_internal_set__Credentials_k__BackingField))::Amazon::Runtime::AWSCredentials* _Credentials_k__BackingField;

  /// @brief Field <EndpointDiscoveryResolver>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__EndpointDiscoveryResolver_k__BackingField,
                      put = __cordl_internal_set__EndpointDiscoveryResolver_k__BackingField))::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* _EndpointDiscoveryResolver_k__BackingField;

  /// @brief Field <RuntimePipeline>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__RuntimePipeline_k__BackingField,
                      put = __cordl_internal_set__RuntimePipeline_k__BackingField))::Amazon::Runtime::Internal::RuntimePipeline* _RuntimePipeline_k__BackingField;

  /// @brief Field <ServiceMetadata>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ServiceMetadata_k__BackingField,
                      put = __cordl_internal_set__ServiceMetadata_k__BackingField))::Amazon::Runtime::Internal::IServiceMetadata* _ServiceMetadata_k__BackingField;

  /// @brief Field <Signer>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__Signer_k__BackingField,
                      put = __cordl_internal_set__Signer_k__BackingField))::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* _Signer_k__BackingField;

  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field mAfterResponseEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mAfterResponseEvent, put = __cordl_internal_set_mAfterResponseEvent))::Amazon::Runtime::ResponseEventHandler* mAfterResponseEvent;

  /// @brief Field mBeforeMarshallingEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mBeforeMarshallingEvent, put = __cordl_internal_set_mBeforeMarshallingEvent))::Amazon::Runtime::PreRequestEventHandler* mBeforeMarshallingEvent;

  /// @brief Field mBeforeRequestEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mBeforeRequestEvent, put = __cordl_internal_set_mBeforeRequestEvent))::Amazon::Runtime::RequestEventHandler* mBeforeRequestEvent;

  /// @brief Field mExceptionEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mExceptionEvent, put = __cordl_internal_set_mExceptionEvent))::Amazon::Runtime::ExceptionEventHandler* mExceptionEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BuildRuntimePipeline, addr 0x1fdbd6c, size 0xd1c, virtual false, abstract: false, final false
  inline void BuildRuntimePipeline();

  /// @brief Method CloneConfig, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename C> inline C CloneConfig();

  /// @brief Method CloneConfig, addr 0x1fde2a0, size 0x3bc, virtual false, abstract: false, final false
  inline void CloneConfig(::Amazon::Runtime::ClientConfig* newConfig);

  /// @brief Method ComposeUrl, addr 0x1fdd70c, size 0xb90, virtual false, abstract: false, final false
  static inline ::System::Uri* ComposeUrl(::Amazon::Runtime::Internal::IRequest* iRequest);

  /// @brief Method CreateSigner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* CreateSigner();

  /// @brief Method CustomizeRuntimePipeline, addr 0x1fdd708, size 0x4, virtual true, abstract: false, final false
  inline void CustomizeRuntimePipeline(::Amazon::Runtime::Internal::RuntimePipeline* pipeline);

  /// @brief Method Dispose, addr 0x1fdd5e4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1fdd650, size 0x34, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DontUnescapePathDotsAndSlashes, addr 0x1fde29c, size 0x4, virtual false, abstract: false, final false
  static inline void DontUnescapePathDotsAndSlashes(::System::Uri* uri);

  /// @brief Method EndpointOperation, addr 0x1fdcd94, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* EndpointOperation(::Amazon::Runtime::Internal::EndpointOperationContextBase* context);

  /// @brief Method Initialize, addr 0x1fdcd90, size 0x4, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResponse> inline TResponse Invoke(::Amazon::Runtime::AmazonWebServiceRequest* request, ::Amazon::Runtime::Internal::InvokeOptionsBase* options);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRequest, typename TResponse>
  inline TResponse Invoke(TRequest request, ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* marshaller,
                          ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* unmarshaller);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResponse>
  inline ::System::Threading::Tasks::Task_1<TResponse>* InvokeAsync(::Amazon::Runtime::AmazonWebServiceRequest* request, ::Amazon::Runtime::Internal::InvokeOptionsBase* options,
                                                                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRequest, typename TResponse>
  inline ::System::Threading::Tasks::Task_1<TResponse>*
  InvokeAsync(TRequest request, ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* marshaller,
              ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* unmarshaller, ::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Runtime::AmazonServiceClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::Runtime::ClientConfig* config);

  static inline ::Amazon::Runtime::AmazonServiceClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::Runtime::ClientConfig* config);

  static inline ::Amazon::Runtime::AmazonServiceClient* New_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::Runtime::ClientConfig* config);

  /// @brief Method ProcessExceptionHandlers, addr 0x1fdd474, size 0x170, virtual true, abstract: false, final false
  inline void ProcessExceptionHandlers(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method ProcessPreRequestHandlers, addr 0x1fdcd9c, size 0x154, virtual false, abstract: false, final false
  inline void ProcessPreRequestHandlers(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ProcessRequestHandlers, addr 0x1fdcef0, size 0x25c, virtual false, abstract: false, final false
  inline void ProcessRequestHandlers(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ProcessResponseHandlers, addr 0x1fdd168, size 0x30c, virtual false, abstract: false, final false
  inline void ProcessResponseHandlers(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method SetupCSMHandler, addr 0x1fde7b8, size 0x140, virtual false, abstract: false, final false
  static inline void SetupCSMHandler(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method ThrowIfDisposed, addr 0x1fdd684, size 0x84, virtual false, abstract: false, final false
  inline void ThrowIfDisposed();

  constexpr ::Amazon::Runtime::IClientConfig*& __cordl_internal_get__Config_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& __cordl_internal_get__Config_k__BackingField() const;

  constexpr ::Amazon::Runtime::AWSCredentials*& __cordl_internal_get__Credentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AWSCredentials*> const& __cordl_internal_get__Credentials_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*& __cordl_internal_get__EndpointDiscoveryResolver_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase*> const& __cordl_internal_get__EndpointDiscoveryResolver_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::RuntimePipeline*& __cordl_internal_get__RuntimePipeline_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::RuntimePipeline*> const& __cordl_internal_get__RuntimePipeline_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::IServiceMetadata*& __cordl_internal_get__ServiceMetadata_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IServiceMetadata*> const& __cordl_internal_get__ServiceMetadata_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*& __cordl_internal_get__Signer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*> const& __cordl_internal_get__Signer_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr ::Amazon::Runtime::ResponseEventHandler*& __cordl_internal_get_mAfterResponseEvent();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ResponseEventHandler*> const& __cordl_internal_get_mAfterResponseEvent() const;

  constexpr ::Amazon::Runtime::PreRequestEventHandler*& __cordl_internal_get_mBeforeMarshallingEvent();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::PreRequestEventHandler*> const& __cordl_internal_get_mBeforeMarshallingEvent() const;

  constexpr ::Amazon::Runtime::RequestEventHandler*& __cordl_internal_get_mBeforeRequestEvent();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::RequestEventHandler*> const& __cordl_internal_get_mBeforeRequestEvent() const;

  constexpr ::Amazon::Runtime::ExceptionEventHandler*& __cordl_internal_get_mExceptionEvent();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ExceptionEventHandler*> const& __cordl_internal_get_mExceptionEvent() const;

  constexpr void __cordl_internal_set__Config_k__BackingField(::Amazon::Runtime::IClientConfig* value);

  constexpr void __cordl_internal_set__Credentials_k__BackingField(::Amazon::Runtime::AWSCredentials* value);

  constexpr void __cordl_internal_set__EndpointDiscoveryResolver_k__BackingField(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* value);

  constexpr void __cordl_internal_set__RuntimePipeline_k__BackingField(::Amazon::Runtime::Internal::RuntimePipeline* value);

  constexpr void __cordl_internal_set__ServiceMetadata_k__BackingField(::Amazon::Runtime::Internal::IServiceMetadata* value);

  constexpr void __cordl_internal_set__Signer_k__BackingField(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set_mAfterResponseEvent(::Amazon::Runtime::ResponseEventHandler* value);

  constexpr void __cordl_internal_set_mBeforeMarshallingEvent(::Amazon::Runtime::PreRequestEventHandler* value);

  constexpr void __cordl_internal_set_mBeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value);

  constexpr void __cordl_internal_set_mExceptionEvent(::Amazon::Runtime::ExceptionEventHandler* value);

  /// @brief Method .ctor, addr 0x1fdca98, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::Runtime::ClientConfig* config);

  /// @brief Method .ctor, addr 0x1fdcc74, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::Runtime::ClientConfig* config);

  /// @brief Method .ctor, addr 0x1fdbbc4, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::Runtime::ClientConfig* config);

  /// @brief Method add_AfterResponseEvent, addr 0x1fdb724, size 0x128, virtual false, abstract: false, final false
  inline void add_AfterResponseEvent(::Amazon::Runtime::ResponseEventHandler* value);

  /// @brief Method add_BeforeMarshallingEvent, addr 0x1fdb284, size 0x128, virtual false, abstract: false, final false
  inline void add_BeforeMarshallingEvent(::Amazon::Runtime::PreRequestEventHandler* value);

  /// @brief Method add_BeforeRequestEvent, addr 0x1fdb4d4, size 0x128, virtual false, abstract: false, final false
  inline void add_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value);

  /// @brief Method add_ExceptionEvent, addr 0x1fdb974, size 0x128, virtual false, abstract: false, final false
  inline void add_ExceptionEvent(::Amazon::Runtime::ExceptionEventHandler* value);

  /// @brief Method get_Config, addr 0x1fdb264, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::IClientConfig* get_Config();

  /// @brief Method get_Credentials, addr 0x1fdb254, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* get_Credentials();

  /// @brief Method get_EndpointDiscoveryResolver, addr 0x1fdb234, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* get_EndpointDiscoveryResolver();

  /// @brief Method get_RuntimePipeline, addr 0x1fdb244, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::RuntimePipeline* get_RuntimePipeline();

  /// @brief Method get_ServiceMetadata, addr 0x1fdb274, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::IServiceMetadata* get_ServiceMetadata();

  /// @brief Method get_Signer, addr 0x1fdca88, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* get_Signer();

  /// @brief Method get_SupportResponseLogging, addr 0x1fdb27c, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportResponseLogging();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_AfterResponseEvent, addr 0x1fdb84c, size 0x128, virtual false, abstract: false, final false
  inline void remove_AfterResponseEvent(::Amazon::Runtime::ResponseEventHandler* value);

  /// @brief Method remove_BeforeMarshallingEvent, addr 0x1fdb3ac, size 0x128, virtual false, abstract: false, final false
  inline void remove_BeforeMarshallingEvent(::Amazon::Runtime::PreRequestEventHandler* value);

  /// @brief Method remove_BeforeRequestEvent, addr 0x1fdb5fc, size 0x128, virtual false, abstract: false, final false
  inline void remove_BeforeRequestEvent(::Amazon::Runtime::RequestEventHandler* value);

  /// @brief Method remove_ExceptionEvent, addr 0x1fdba9c, size 0x128, virtual false, abstract: false, final false
  inline void remove_ExceptionEvent(::Amazon::Runtime::ExceptionEventHandler* value);

  /// @brief Method set_Config, addr 0x1fdb26c, size 0x8, virtual false, abstract: false, final false
  inline void set_Config(::Amazon::Runtime::IClientConfig* value);

  /// @brief Method set_Credentials, addr 0x1fdb25c, size 0x8, virtual false, abstract: false, final false
  inline void set_Credentials(::Amazon::Runtime::AWSCredentials* value);

  /// @brief Method set_EndpointDiscoveryResolver, addr 0x1fdb23c, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointDiscoveryResolver(::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* value);

  /// @brief Method set_RuntimePipeline, addr 0x1fdb24c, size 0x8, virtual false, abstract: false, final false
  inline void set_RuntimePipeline(::Amazon::Runtime::Internal::RuntimePipeline* value);

  /// @brief Method set_Signer, addr 0x1fdca90, size 0x8, virtual false, abstract: false, final false
  inline void set_Signer(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonServiceClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonServiceClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonServiceClient(AmazonServiceClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonServiceClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonServiceClient(AmazonServiceClient const&) = delete;

  /// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _logger, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field <EndpointDiscoveryResolver>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase* ____EndpointDiscoveryResolver_k__BackingField;

  /// @brief Field <RuntimePipeline>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::RuntimePipeline* ____RuntimePipeline_k__BackingField;

  /// @brief Field <Credentials>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::AWSCredentials* ____Credentials_k__BackingField;

  /// @brief Field <Config>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::IClientConfig* ____Config_k__BackingField;

  /// @brief Field <ServiceMetadata>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::IServiceMetadata* ____ServiceMetadata_k__BackingField;

  /// @brief Field mBeforeMarshallingEvent, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Runtime::PreRequestEventHandler* ___mBeforeMarshallingEvent;

  /// @brief Field mBeforeRequestEvent, offset: 0x50, size: 0x8, def value: None
  ::Amazon::Runtime::RequestEventHandler* ___mBeforeRequestEvent;

  /// @brief Field mAfterResponseEvent, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Runtime::ResponseEventHandler* ___mAfterResponseEvent;

  /// @brief Field mExceptionEvent, offset: 0x60, size: 0x8, def value: None
  ::Amazon::Runtime::ExceptionEventHandler* ___mExceptionEvent;

  /// @brief Field <Signer>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* ____Signer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AmazonServiceClient, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____EndpointDiscoveryResolver_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____RuntimePipeline_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____Credentials_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____Config_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____ServiceMetadata_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ___mBeforeMarshallingEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ___mBeforeRequestEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ___mAfterResponseEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ___mExceptionEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AmazonServiceClient, ____Signer_k__BackingField) == 0x68, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AmazonServiceClient);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AmazonServiceClient*, "Amazon.Runtime", "AmazonServiceClient");
NEED_NO_BOX(::Amazon::Runtime::__AmazonServiceClient____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__AmazonServiceClient____c*, "Amazon.Runtime", "AmazonServiceClient/<>c");
