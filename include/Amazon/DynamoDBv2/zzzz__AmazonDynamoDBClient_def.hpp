#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonServiceClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AmazonDynamoDBClient)
namespace Amazon::DynamoDBv2::Model {
class AttributeDefinition;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class BatchExecuteStatementRequest;
}
namespace Amazon::DynamoDBv2::Model {
class BatchExecuteStatementResponse;
}
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class BatchWriteItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class BatchWriteItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class Condition;
}
namespace Amazon::DynamoDBv2::Model {
class CreateBackupRequest;
}
namespace Amazon::DynamoDBv2::Model {
class CreateBackupResponse;
}
namespace Amazon::DynamoDBv2::Model {
class CreateGlobalTableRequest;
}
namespace Amazon::DynamoDBv2::Model {
class CreateGlobalTableResponse;
}
namespace Amazon::DynamoDBv2::Model {
class CreateTableRequest;
}
namespace Amazon::DynamoDBv2::Model {
class CreateTableResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteBackupRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteBackupResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteTableRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteTableResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeBackupRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeBackupResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeContinuousBackupsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeContinuousBackupsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeContributorInsightsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeContributorInsightsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeEndpointsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeEndpointsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeExportRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeExportResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeGlobalTableRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeGlobalTableResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeGlobalTableSettingsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeGlobalTableSettingsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeKinesisStreamingDestinationRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeKinesisStreamingDestinationResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeLimitsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeLimitsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeTableReplicaAutoScalingRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeTableReplicaAutoScalingResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeTableRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeTableResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeTimeToLiveRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DescribeTimeToLiveResponse;
}
namespace Amazon::DynamoDBv2::Model {
class DisableKinesisStreamingDestinationRequest;
}
namespace Amazon::DynamoDBv2::Model {
class DisableKinesisStreamingDestinationResponse;
}
namespace Amazon::DynamoDBv2::Model {
class EnableKinesisStreamingDestinationRequest;
}
namespace Amazon::DynamoDBv2::Model {
class EnableKinesisStreamingDestinationResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ExecuteStatementRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ExecuteStatementResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ExecuteTransactionRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ExecuteTransactionResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ExportTableToPointInTimeRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ExportTableToPointInTimeResponse;
}
namespace Amazon::DynamoDBv2::Model {
class GetItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class GetItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class IDynamoDBv2PaginatorFactory;
}
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class KeysAndAttributes;
}
namespace Amazon::DynamoDBv2::Model {
class ListBackupsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListBackupsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ListContributorInsightsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListContributorInsightsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ListExportsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListExportsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ListGlobalTablesRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListGlobalTablesResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ListTablesRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListTablesResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ListTagsOfResourceRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ListTagsOfResourceResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
namespace Amazon::DynamoDBv2::Model {
class PutItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class PutItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class QueryRequest;
}
namespace Amazon::DynamoDBv2::Model {
class QueryResponse;
}
namespace Amazon::DynamoDBv2::Model {
class RestoreTableFromBackupRequest;
}
namespace Amazon::DynamoDBv2::Model {
class RestoreTableFromBackupResponse;
}
namespace Amazon::DynamoDBv2::Model {
class RestoreTableToPointInTimeRequest;
}
namespace Amazon::DynamoDBv2::Model {
class RestoreTableToPointInTimeResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ScanRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ScanResponse;
}
namespace Amazon::DynamoDBv2::Model {
class TagResourceRequest;
}
namespace Amazon::DynamoDBv2::Model {
class TagResourceResponse;
}
namespace Amazon::DynamoDBv2::Model {
class TransactGetItemsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class TransactGetItemsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class TransactWriteItemsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class TransactWriteItemsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UntagResourceRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UntagResourceResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateContinuousBackupsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateContinuousBackupsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateContributorInsightsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateContributorInsightsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableSettingsRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableSettingsResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateTableReplicaAutoScalingRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateTableReplicaAutoScalingResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateTableRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateTableResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateTimeToLiveRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateTimeToLiveResponse;
}
namespace Amazon::DynamoDBv2::Model {
class WriteRequest;
}
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBConfig;
}
namespace Amazon::DynamoDBv2 {
class IAmazonDynamoDB;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace Amazon::DynamoDBv2 {
class ReturnValue;
}
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime::Internal {
class DiscoveryEndpointBase;
}
namespace Amazon::Runtime::Internal {
class EndpointOperationContextBase;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class AmazonDynamoDBClient;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::AmazonDynamoDBClient);
// Type: Amazon.DynamoDBv2::AmazonDynamoDBClient
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::AmazonDynamoDBClient*
class CORDL_TYPE AmazonDynamoDBClient : public ::Amazon::Runtime::AmazonServiceClient {
public:
  // Declarations
  __declspec(property(get = get_Paginators))::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory* Paginators;

  __declspec(property(get = get_ServiceMetadata))::Amazon::Runtime::Internal::IServiceMetadata* ServiceMetadata;

  /// @brief Field _paginators, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__paginators, put = __cordl_internal_set__paginators))::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory* _paginators;

  /// @brief Field serviceMetadata, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serviceMetadata, put = setStaticF_serviceMetadata))::Amazon::Runtime::Internal::IServiceMetadata* serviceMetadata;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::IAmazonDynamoDB"
  constexpr operator ::Amazon::DynamoDBv2::IAmazonDynamoDB*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IAmazonService"
  constexpr operator ::Amazon::Runtime::IAmazonService*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Amazon.Runtime.IAmazonService.get_Config, addr 0x1222a74, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IClientConfig* Amazon_Runtime_IAmazonService_get_Config();

  /// @brief Method BatchExecuteStatement, addr 0x1214e04, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse* BatchExecuteStatement(::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest* request);

  /// @brief Method BatchExecuteStatementAsync, addr 0x1214f70, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::BatchExecuteStatementResponse*>* BatchExecuteStatementAsync(::Amazon::DynamoDBv2::Model::BatchExecuteStatementRequest* request,
                                                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BatchGetItem, addr 0x12150ec, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BatchGetItemResponse* BatchGetItem(::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request);

  /// @brief Method BatchGetItemAsync, addr 0x12154a8, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>* BatchGetItemAsync(::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BatchGetItemAsync, addr 0x1215424, size 0x84, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>*
  BatchGetItemAsync(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* requestItems, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BatchGetItemAsync, addr 0x1215318, size 0x90, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>*
  BatchGetItemAsync(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* requestItems,
                    ::Amazon::DynamoDBv2::ReturnConsumedCapacity* returnConsumedCapacity, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BatchWriteItem, addr 0x12156e4, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BatchWriteItemResponse* BatchWriteItem(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request);

  /// @brief Method BatchWriteItemAsync, addr 0x1215a10, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>* BatchWriteItemAsync(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BatchWriteItemAsync, addr 0x1215910, size 0x84, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>*
  BatchWriteItemAsync(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::WriteRequest*>*>* requestItems,
                      ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CreateBackup, addr 0x1215c4c, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::CreateBackupResponse* CreateBackup(::Amazon::DynamoDBv2::Model::CreateBackupRequest* request);

  /// @brief Method CreateBackupAsync, addr 0x1215e78, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>* CreateBackupAsync(::Amazon::DynamoDBv2::Model::CreateBackupRequest* request,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CreateGlobalTable, addr 0x12160b4, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::CreateGlobalTableResponse* CreateGlobalTable(::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest* request);

  /// @brief Method CreateGlobalTableAsync, addr 0x12162e0, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::CreateGlobalTableResponse*>* CreateGlobalTableAsync(::Amazon::DynamoDBv2::Model::CreateGlobalTableRequest* request,
                                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CreateSigner, addr 0x1214b54, size 0x5c, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* CreateSigner();

  /// @brief Method CreateTable, addr 0x121651c, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::CreateTableResponse* CreateTable(::Amazon::DynamoDBv2::Model::CreateTableRequest* request);

  /// @brief Method CreateTableAsync, addr 0x1216980, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::CreateTableResponse*>* CreateTableAsync(::Amazon::DynamoDBv2::Model::CreateTableRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CreateTableAsync, addr 0x1216748, size 0xac, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::CreateTableResponse*>*
  CreateTableAsync(::StringW tableName, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* keySchema,
                   ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* attributeDefinitions,
                   ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CustomizeRuntimePipeline, addr 0x1214bb0, size 0x150, virtual true, abstract: false, final false
  inline void CustomizeRuntimePipeline(::Amazon::Runtime::Internal::RuntimePipeline* pipeline);

  /// @brief Method DeleteBackup, addr 0x1216bbc, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DeleteBackupResponse* DeleteBackup(::Amazon::DynamoDBv2::Model::DeleteBackupRequest* request);

  /// @brief Method DeleteBackupAsync, addr 0x1216de8, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>* DeleteBackupAsync(::Amazon::DynamoDBv2::Model::DeleteBackupRequest* request,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItem, addr 0x1217024, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DeleteItemResponse* DeleteItem(::Amazon::DynamoDBv2::Model::DeleteItemRequest* request);

  /// @brief Method DeleteItemAsync, addr 0x12174a4, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DeleteItemResponse*>* DeleteItemAsync(::Amazon::DynamoDBv2::Model::DeleteItemRequest* request,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x1217250, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DeleteItemResponse*>*
  DeleteItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key,
                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x121740c, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DeleteItemResponse*>*
  DeleteItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key, ::Amazon::DynamoDBv2::ReturnValue* returnValues,
                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteTable, addr 0x12176e0, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DeleteTableResponse* DeleteTable(::Amazon::DynamoDBv2::Model::DeleteTableRequest* request);

  /// @brief Method DeleteTableAsync, addr 0x121799c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>* DeleteTableAsync(::Amazon::DynamoDBv2::Model::DeleteTableRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteTableAsync, addr 0x121790c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>* DeleteTableAsync(::StringW tableName, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeBackup, addr 0x1217bd8, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeBackupResponse* DescribeBackup(::Amazon::DynamoDBv2::Model::DescribeBackupRequest* request);

  /// @brief Method DescribeBackupAsync, addr 0x1217e04, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeBackupResponse*>* DescribeBackupAsync(::Amazon::DynamoDBv2::Model::DescribeBackupRequest* request,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeContinuousBackups, addr 0x1218040, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse* DescribeContinuousBackups(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest* request);

  /// @brief Method DescribeContinuousBackupsAsync, addr 0x121826c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>*
  DescribeContinuousBackupsAsync(::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeContributorInsights, addr 0x12184a8, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse* DescribeContributorInsights(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsRequest* request);

  /// @brief Method DescribeContributorInsightsAsync, addr 0x1218614, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeContributorInsightsResponse*>*
  DescribeContributorInsightsAsync(::Amazon::DynamoDBv2::Model::DescribeContributorInsightsRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeEndpoints, addr 0x1218790, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse* DescribeEndpoints(::Amazon::DynamoDBv2::Model::DescribeEndpointsRequest* request);

  /// @brief Method DescribeEndpointsAsync, addr 0x12188fc, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>* DescribeEndpointsAsync(::Amazon::DynamoDBv2::Model::DescribeEndpointsRequest* request,
                                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeExport, addr 0x1218a78, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeExportResponse* DescribeExport(::Amazon::DynamoDBv2::Model::DescribeExportRequest* request);

  /// @brief Method DescribeExportAsync, addr 0x1218be4, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeExportResponse*>* DescribeExportAsync(::Amazon::DynamoDBv2::Model::DescribeExportRequest* request,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeGlobalTable, addr 0x1218d60, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse* DescribeGlobalTable(::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest* request);

  /// @brief Method DescribeGlobalTableAsync, addr 0x1218f8c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>* DescribeGlobalTableAsync(::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest* request,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeGlobalTableSettings, addr 0x12191c8, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeGlobalTableSettingsResponse* DescribeGlobalTableSettings(::Amazon::DynamoDBv2::Model::DescribeGlobalTableSettingsRequest* request);

  /// @brief Method DescribeGlobalTableSettingsAsync, addr 0x12193f4, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeGlobalTableSettingsResponse*>*
  DescribeGlobalTableSettingsAsync(::Amazon::DynamoDBv2::Model::DescribeGlobalTableSettingsRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeKinesisStreamingDestination, addr 0x1219630, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse*
  DescribeKinesisStreamingDestination(::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest* request);

  /// @brief Method DescribeKinesisStreamingDestinationAsync, addr 0x121985c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationResponse*>*
  DescribeKinesisStreamingDestinationAsync(::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeLimits, addr 0x1219a98, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeLimitsResponse* DescribeLimits(::Amazon::DynamoDBv2::Model::DescribeLimitsRequest* request);

  /// @brief Method DescribeLimitsAsync, addr 0x1219cc4, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeLimitsResponse*>* DescribeLimitsAsync(::Amazon::DynamoDBv2::Model::DescribeLimitsRequest* request,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeTable, addr 0x1219f00, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeTableResponse* DescribeTable(::Amazon::DynamoDBv2::Model::DescribeTableRequest* request);

  /// @brief Method DescribeTableAsync, addr 0x121a1bc, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeTableResponse*>* DescribeTableAsync(::Amazon::DynamoDBv2::Model::DescribeTableRequest* request,
                                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeTableAsync, addr 0x121a12c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeTableResponse*>* DescribeTableAsync(::StringW tableName, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeTableReplicaAutoScaling, addr 0x121a3f8, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse* DescribeTableReplicaAutoScaling(::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingRequest* request);

  /// @brief Method DescribeTableReplicaAutoScalingAsync, addr 0x121a564, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>*
  DescribeTableReplicaAutoScalingAsync(::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeTimeToLive, addr 0x121a6e0, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse* DescribeTimeToLive(::Amazon::DynamoDBv2::Model::DescribeTimeToLiveRequest* request);

  /// @brief Method DescribeTimeToLiveAsync, addr 0x121a99c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>* DescribeTimeToLiveAsync(::Amazon::DynamoDBv2::Model::DescribeTimeToLiveRequest* request,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeTimeToLiveAsync, addr 0x121a90c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>* DescribeTimeToLiveAsync(::StringW tableName,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DisableKinesisStreamingDestination, addr 0x121abd8, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationResponse* DisableKinesisStreamingDestination(::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest* request);

  /// @brief Method DisableKinesisStreamingDestinationAsync, addr 0x121ae04, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationResponse*>*
  DisableKinesisStreamingDestinationAsync(::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x1214d58, size 0xc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableKinesisStreamingDestination, addr 0x121b040, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse* EnableKinesisStreamingDestination(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest* request);

  /// @brief Method EnableKinesisStreamingDestinationAsync, addr 0x121b26c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse*>*
  EnableKinesisStreamingDestinationAsync(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method EndpointOperation, addr 0x1214d64, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* EndpointOperation(::Amazon::Runtime::Internal::EndpointOperationContextBase* context);

  /// @brief Method ExecuteStatement, addr 0x121b4a8, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExecuteStatementResponse* ExecuteStatement(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest* request);

  /// @brief Method ExecuteStatementAsync, addr 0x121b614, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ExecuteStatementResponse*>* ExecuteStatementAsync(::Amazon::DynamoDBv2::Model::ExecuteStatementRequest* request,
                                                                                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteTransaction, addr 0x121b790, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse* ExecuteTransaction(::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest* request);

  /// @brief Method ExecuteTransactionAsync, addr 0x121b8fc, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ExecuteTransactionResponse*>* ExecuteTransactionAsync(::Amazon::DynamoDBv2::Model::ExecuteTransactionRequest* request,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExportTableToPointInTime, addr 0x121ba78, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse* ExportTableToPointInTime(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest* request);

  /// @brief Method ExportTableToPointInTimeAsync, addr 0x121bbe4, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>*
  ExportTableToPointInTimeAsync(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItem, addr 0x121bd60, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::GetItemResponse* GetItem(::Amazon::DynamoDBv2::Model::GetItemRequest* request);

  /// @brief Method GetItemAsync, addr 0x121c0d0, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetItemResponse*>* GetItemAsync(::Amazon::DynamoDBv2::Model::GetItemRequest* request,
                                                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemAsync, addr 0x121bf8c, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetItemResponse*>*
  GetItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key,
               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemAsync, addr 0x121c024, size 0xac, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetItemResponse*>*
  GetItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key, bool consistentRead,
               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListBackups, addr 0x121c30c, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListBackupsResponse* ListBackups(::Amazon::DynamoDBv2::Model::ListBackupsRequest* request);

  /// @brief Method ListBackupsAsync, addr 0x121c538, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListBackupsResponse*>* ListBackupsAsync(::Amazon::DynamoDBv2::Model::ListBackupsRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListContributorInsights, addr 0x121c774, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListContributorInsightsResponse* ListContributorInsights(::Amazon::DynamoDBv2::Model::ListContributorInsightsRequest* request);

  /// @brief Method ListContributorInsightsAsync, addr 0x121c8e0, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListContributorInsightsResponse*>*
  ListContributorInsightsAsync(::Amazon::DynamoDBv2::Model::ListContributorInsightsRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListExports, addr 0x121ca5c, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListExportsResponse* ListExports(::Amazon::DynamoDBv2::Model::ListExportsRequest* request);

  /// @brief Method ListExportsAsync, addr 0x121cbc8, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListExportsResponse*>* ListExportsAsync(::Amazon::DynamoDBv2::Model::ListExportsRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListGlobalTables, addr 0x121cd44, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse* ListGlobalTables(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest* request);

  /// @brief Method ListGlobalTablesAsync, addr 0x121cf70, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListGlobalTablesResponse*>* ListGlobalTablesAsync(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest* request,
                                                                                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListTables, addr 0x121d1ac, size 0x70, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListTablesResponse* ListTables();

  /// @brief Method ListTables, addr 0x121d21c, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListTablesResponse* ListTables(::Amazon::DynamoDBv2::Model::ListTablesRequest* request);

  /// @brief Method ListTablesAsync, addr 0x121d448, size 0x80, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListTablesResponse*>* ListTablesAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListTablesAsync, addr 0x121d4c8, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListTablesResponse*>* ListTablesAsync(::StringW exclusiveStartTableName,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListTablesAsync, addr 0x121d550, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListTablesResponse*>* ListTablesAsync(::StringW exclusiveStartTableName, int32_t limit,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListTablesAsync, addr 0x121d5f4, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListTablesResponse*>* ListTablesAsync(int32_t limit, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListTablesAsync, addr 0x121d688, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListTablesResponse*>* ListTablesAsync(::Amazon::DynamoDBv2::Model::ListTablesRequest* request,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ListTagsOfResource, addr 0x121d8c4, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse* ListTagsOfResource(::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest* request);

  /// @brief Method ListTagsOfResourceAsync, addr 0x121daf0, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse*>* ListTagsOfResourceAsync(::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest* request,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor();

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken,
                                                                     ::Amazon::DynamoDBv2::AmazonDynamoDBConfig* clientConfig);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::RegionEndpoint* region);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::DynamoDBv2::AmazonDynamoDBConfig* clientConfig);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::RegionEndpoint* region);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::Amazon::DynamoDBv2::AmazonDynamoDBConfig* config);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::Amazon::Runtime::AWSCredentials* credentials);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::DynamoDBv2::AmazonDynamoDBConfig* clientConfig);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::RegionEndpoint* region);

  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* New_ctor(::Amazon::RegionEndpoint* region);

  /// @brief Method PutItem, addr 0x121dd2c, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::PutItemResponse* PutItem(::Amazon::DynamoDBv2::Model::PutItemRequest* request);

  /// @brief Method PutItemAsync, addr 0x121e08c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::PutItemResponse*>* PutItemAsync(::Amazon::DynamoDBv2::Model::PutItemRequest* request,
                                                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PutItemAsync, addr 0x121df58, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::PutItemResponse*>*
  PutItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item,
               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PutItemAsync, addr 0x121dff0, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::PutItemResponse*>*
  PutItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item, ::Amazon::DynamoDBv2::ReturnValue* returnValues,
               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Query, addr 0x121e2c8, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::QueryResponse* Query(::Amazon::DynamoDBv2::Model::QueryRequest* request);

  /// @brief Method QueryAsync, addr 0x121e4f4, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::QueryResponse*>* QueryAsync(::Amazon::DynamoDBv2::Model::QueryRequest* request,
                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RestoreTableFromBackup, addr 0x121e730, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse* RestoreTableFromBackup(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest* request);

  /// @brief Method RestoreTableFromBackupAsync, addr 0x121e95c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse*>*
  RestoreTableFromBackupAsync(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RestoreTableToPointInTime, addr 0x121eb98, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeResponse* RestoreTableToPointInTime(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest* request);

  /// @brief Method RestoreTableToPointInTimeAsync, addr 0x121edc4, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeResponse*>*
  RestoreTableToPointInTimeAsync(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Scan, addr 0x121f000, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ScanResponse* Scan(::Amazon::DynamoDBv2::Model::ScanRequest* request);

  /// @brief Method ScanAsync, addr 0x121f3fc, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ScanResponse*>* ScanAsync(::Amazon::DynamoDBv2::Model::ScanRequest* request,
                                                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ScanAsync, addr 0x121f22c, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ScanResponse*>* ScanAsync(::StringW tableName, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ScanAsync, addr 0x121f35c, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ScanResponse*>*
  ScanAsync(::StringW tableName, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
            ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* scanFilter, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ScanAsync, addr 0x121f2c4, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ScanResponse*>*
  ScanAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* scanFilter,
            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TagResource, addr 0x121f638, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TagResourceResponse* TagResource(::Amazon::DynamoDBv2::Model::TagResourceRequest* request);

  /// @brief Method TagResourceAsync, addr 0x121f864, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::TagResourceResponse*>* TagResourceAsync(::Amazon::DynamoDBv2::Model::TagResourceRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TransactGetItems, addr 0x121faa0, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TransactGetItemsResponse* TransactGetItems(::Amazon::DynamoDBv2::Model::TransactGetItemsRequest* request);

  /// @brief Method TransactGetItemsAsync, addr 0x121fccc, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::TransactGetItemsResponse*>* TransactGetItemsAsync(::Amazon::DynamoDBv2::Model::TransactGetItemsRequest* request,
                                                                                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TransactWriteItems, addr 0x121ff08, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse* TransactWriteItems(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest* request);

  /// @brief Method TransactWriteItemsAsync, addr 0x1220134, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::TransactWriteItemsResponse*>* TransactWriteItemsAsync(::Amazon::DynamoDBv2::Model::TransactWriteItemsRequest* request,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UntagResource, addr 0x1220370, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UntagResourceResponse* UntagResource(::Amazon::DynamoDBv2::Model::UntagResourceRequest* request);

  /// @brief Method UntagResourceAsync, addr 0x122059c, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UntagResourceResponse*>* UntagResourceAsync(::Amazon::DynamoDBv2::Model::UntagResourceRequest* request,
                                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateContinuousBackups, addr 0x12207d8, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsResponse* UpdateContinuousBackups(::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest* request);

  /// @brief Method UpdateContinuousBackupsAsync, addr 0x1220a04, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsResponse*>*
  UpdateContinuousBackupsAsync(::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateContributorInsights, addr 0x1220c40, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateContributorInsightsResponse* UpdateContributorInsights(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest* request);

  /// @brief Method UpdateContributorInsightsAsync, addr 0x1220dac, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateContributorInsightsResponse*>*
  UpdateContributorInsightsAsync(::Amazon::DynamoDBv2::Model::UpdateContributorInsightsRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateGlobalTable, addr 0x1220f28, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse* UpdateGlobalTable(::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest* request);

  /// @brief Method UpdateGlobalTableAsync, addr 0x1221154, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateGlobalTableResponse*>* UpdateGlobalTableAsync(::Amazon::DynamoDBv2::Model::UpdateGlobalTableRequest* request,
                                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateGlobalTableSettings, addr 0x1221390, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse* UpdateGlobalTableSettings(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest* request);

  /// @brief Method UpdateGlobalTableSettingsAsync, addr 0x12215bc, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsResponse*>*
  UpdateGlobalTableSettingsAsync(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItem, addr 0x12217f8, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateItemResponse* UpdateItem(::Amazon::DynamoDBv2::Model::UpdateItemRequest* request);

  /// @brief Method UpdateItemAsync, addr 0x1221b70, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*>* UpdateItemAsync(::Amazon::DynamoDBv2::Model::UpdateItemRequest* request,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1221a24, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*>*
  UpdateItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key,
                  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* attributeUpdates,
                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1221ac4, size 0xac, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*>*
  UpdateItemAsync(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key,
                  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* attributeUpdates, ::Amazon::DynamoDBv2::ReturnValue* returnValues,
                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateTable, addr 0x1221dac, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateTableResponse* UpdateTable(::Amazon::DynamoDBv2::Model::UpdateTableRequest* request);

  /// @brief Method UpdateTableAsync, addr 0x1222070, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateTableResponse*>* UpdateTableAsync(::Amazon::DynamoDBv2::Model::UpdateTableRequest* request,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateTableAsync, addr 0x1221fd8, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateTableResponse*>*
  UpdateTableAsync(::StringW tableName, ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateTableReplicaAutoScaling, addr 0x12222ac, size 0x16c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse* UpdateTableReplicaAutoScaling(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest* request);

  /// @brief Method UpdateTableReplicaAutoScalingAsync, addr 0x1222418, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingResponse*>*
  UpdateTableReplicaAutoScalingAsync(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest* request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateTimeToLive, addr 0x1222594, size 0x22c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse* UpdateTimeToLive(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest* request);

  /// @brief Method UpdateTimeToLiveAsync, addr 0x12227c0, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>* UpdateTimeToLiveAsync(::Amazon::DynamoDBv2::Model::UpdateTimeToLiveRequest* request,
                                                                                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <EndpointOperation>b__21_0, addr 0x1222a7c, size 0x2f0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* _EndpointOperation_b__21_0();

  constexpr ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*& __cordl_internal_get__paginators();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*> const& __cordl_internal_get__paginators() const;

  constexpr void __cordl_internal_set__paginators(::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory* value);

  /// @brief Method .ctor, addr 0x12145c8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1214894, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  /// @brief Method .ctor, addr 0x12149b0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken);

  /// @brief Method .ctor, addr 0x1214a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::DynamoDBv2::AmazonDynamoDBConfig* clientConfig);

  /// @brief Method .ctor, addr 0x1214a44, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::RegionEndpoint* region);

  /// @brief Method .ctor, addr 0x1214910, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::DynamoDBv2::AmazonDynamoDBConfig* clientConfig);

  /// @brief Method .ctor, addr 0x1214918, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::RegionEndpoint* region);

  /// @brief Method .ctor, addr 0x121471c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::AmazonDynamoDBConfig* config);

  /// @brief Method .ctor, addr 0x1214790, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials);

  /// @brief Method .ctor, addr 0x1214804, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::DynamoDBv2::AmazonDynamoDBConfig* clientConfig);

  /// @brief Method .ctor, addr 0x121480c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::RegionEndpoint* region);

  /// @brief Method .ctor, addr 0x1214664, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::RegionEndpoint* region);

  static inline ::Amazon::Runtime::Internal::IServiceMetadata* getStaticF_serviceMetadata();

  /// @brief Method get_Paginators, addr 0x1214ae4, size 0x70, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory* get_Paginators();

  /// @brief Method get_ServiceMetadata, addr 0x1214d00, size 0x58, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::IServiceMetadata* get_ServiceMetadata();

  /// @brief Convert to "::Amazon::DynamoDBv2::IAmazonDynamoDB"
  constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDB* i___Amazon__DynamoDBv2__IAmazonDynamoDB() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IAmazonService"
  constexpr ::Amazon::Runtime::IAmazonService* i___Amazon__Runtime__IAmazonService() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_serviceMetadata(::Amazon::Runtime::Internal::IServiceMetadata* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonDynamoDBClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonDynamoDBClient(AmazonDynamoDBClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonDynamoDBClient(AmazonDynamoDBClient const&) = delete;

  /// @brief Field _paginators, offset: 0x70, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory* ____paginators;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::AmazonDynamoDBClient, 0x78>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::AmazonDynamoDBClient, ____paginators) == 0x70, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::AmazonDynamoDBClient);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::AmazonDynamoDBClient*, "Amazon.DynamoDBv2", "AmazonDynamoDBClient");
