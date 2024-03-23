#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonServiceClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmazonDynamoDBStreamsClient)
namespace Amazon::DynamoDBv2::Model {
class DescribeStreamRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeStreamResponse;
}
namespace Amazon::DynamoDBv2::Model {
class GetRecordsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class GetRecordsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class GetShardIteratorRequest;
}
namespace Amazon::DynamoDBv2::Model {
class GetShardIteratorResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ListStreamsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListStreamsResponse;
}
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBStreamsConfig;
}
namespace Amazon::DynamoDBv2 {
class IAmazonDynamoDBStreams;
}
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime::Internal {
class IServiceMetadata;
}
namespace Amazon::Runtime::Internal {
class RuntimePipeline;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class IAmazonService;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBStreamsClient;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient);
// Type: Amazon.DynamoDBv2::AmazonDynamoDBStreamsClient
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::AmazonDynamoDBStreamsClient*
class CORDL_TYPE AmazonDynamoDBStreamsClient : public ::Amazon::Runtime::AmazonServiceClient {
public:
  // Declarations
  __declspec(property(get = get_ServiceMetadata))::Amazon::Runtime::Internal::IServiceMetadata* ServiceMetadata;

  /// @brief Field serviceMetadata, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serviceMetadata, put = setStaticF_serviceMetadata))::Amazon::Runtime::Internal::IServiceMetadata* serviceMetadata;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::IAmazonDynamoDBStreams"
  constexpr operator ::Amazon::DynamoDBv2::IAmazonDynamoDBStreams*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IAmazonService"
  constexpr operator ::Amazon::Runtime::IAmazonService*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Amazon.Runtime.IAmazonService.get_Config, addr 0x12242fc, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IClientConfig* Amazon_Runtime_IAmazonService_get_Config();

  /// @brief Method CreateSigner, addr 0x12232cc, size 0x5c, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* CreateSigner();

  /// @brief Method CustomizeRuntimePipeline, addr 0x1223328, size 0x150, virtual true, abstract: false, final false
  inline void CustomizeRuntimePipeline(::Amazon::Runtime::Internal::RuntimePipeline* pipeline);

  /// @brief Method DescribeStream, addr 0x12234dc, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeStreamResponse* DescribeStream(::Amazon::DynamoDBv2::Model::DescribeStreamRequest* request);

  /// @brief Method DescribeStreamAsync, addr 0x12236d8, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>* DescribeStreamAsync(::Amazon::DynamoDBv2::Model::DescribeStreamRequest* request,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeStreamAsync, addr 0x1223648, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>* DescribeStreamAsync(::StringW streamArn, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x12234d0, size 0xc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetRecords, addr 0x1223854, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::GetRecordsResponse* GetRecords(::Amazon::DynamoDBv2::Model::GetRecordsRequest* request);

  /// @brief Method GetRecordsAsync, addr 0x1223a48, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>* GetRecordsAsync(::Amazon::DynamoDBv2::Model::GetRecordsRequest* request,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRecordsAsync, addr 0x12239c0, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>* GetRecordsAsync(::StringW shardIterator, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetShardIterator, addr 0x1223bc4, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse* GetShardIterator(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest* request);

  /// @brief Method GetShardIteratorAsync, addr 0x1223d30, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>* GetShardIteratorAsync(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest* request,
                                                                                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListStreams, addr 0x1223eac, size 0x70, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListStreamsResponse* ListStreams();

  /// @brief Method ListStreams, addr 0x1223f1c, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListStreamsResponse* ListStreams(::Amazon::DynamoDBv2::Model::ListStreamsRequest* request);

  /// @brief Method ListStreamsAsync, addr 0x1224088, size 0x80, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>* ListStreamsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListStreamsAsync, addr 0x1224108, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>* ListStreamsAsync(::Amazon::DynamoDBv2::Model::ListStreamsRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor();

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken,
                                                                            ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::RegionEndpoint* region);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::RegionEndpoint* region);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* config);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::Amazon::Runtime::AWSCredentials* credentials);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::RegionEndpoint* region);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* New_ctor(::Amazon::RegionEndpoint* region);

  /// @brief Method .ctor, addr 0x1222db0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x122307c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  /// @brief Method .ctor, addr 0x1223198, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken);

  /// @brief Method .ctor, addr 0x1223224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig);

  /// @brief Method .ctor, addr 0x122322c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::RegionEndpoint* region);

  /// @brief Method .ctor, addr 0x12230f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig);

  /// @brief Method .ctor, addr 0x1223100, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::RegionEndpoint* region);

  /// @brief Method .ctor, addr 0x1222f04, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* config);

  /// @brief Method .ctor, addr 0x1222f78, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials);

  /// @brief Method .ctor, addr 0x1222fec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig);

  /// @brief Method .ctor, addr 0x1222ff4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::RegionEndpoint* region);

  /// @brief Method .ctor, addr 0x1222e4c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::RegionEndpoint* region);

  static inline ::Amazon::Runtime::Internal::IServiceMetadata* getStaticF_serviceMetadata();

  /// @brief Method get_ServiceMetadata, addr 0x1223478, size 0x58, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::IServiceMetadata* get_ServiceMetadata();

  /// @brief Convert to "::Amazon::DynamoDBv2::IAmazonDynamoDBStreams"
  constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDBStreams* i___Amazon__DynamoDBv2__IAmazonDynamoDBStreams() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IAmazonService"
  constexpr ::Amazon::Runtime::IAmazonService* i___Amazon__Runtime__IAmazonService() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_serviceMetadata(::Amazon::Runtime::Internal::IServiceMetadata* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonDynamoDBStreamsClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBStreamsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonDynamoDBStreamsClient(AmazonDynamoDBStreamsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBStreamsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonDynamoDBStreamsClient(AmazonDynamoDBStreamsClient const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient, 0x70>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*, "Amazon.DynamoDBv2", "AmazonDynamoDBStreamsClient");
