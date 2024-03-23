#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetEventSourceMappingResponse)
namespace Amazon::Lambda::Model {
class DestinationConfig;
}
namespace Amazon::Lambda::Model {
class SelfManagedEventSource;
}
namespace Amazon::Lambda::Model {
class SourceAccessConfiguration;
}
namespace Amazon::Lambda {
class EventSourcePosition;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetEventSourceMappingResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetEventSourceMappingResponse);
// Type: Amazon.Lambda.Model::GetEventSourceMappingResponse
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetEventSourceMappingResponse*
class CORDL_TYPE GetEventSourceMappingResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_BatchSize, put = set_BatchSize)) int32_t BatchSize;

  __declspec(property(get = get_BisectBatchOnFunctionError, put = set_BisectBatchOnFunctionError)) bool BisectBatchOnFunctionError;

  __declspec(property(get = get_DestinationConfig, put = set_DestinationConfig))::Amazon::Lambda::Model::DestinationConfig* DestinationConfig;

  __declspec(property(get = get_EventSourceArn, put = set_EventSourceArn))::StringW EventSourceArn;

  __declspec(property(get = get_FunctionArn, put = set_FunctionArn))::StringW FunctionArn;

  __declspec(property(get = get_FunctionResponseTypes, put = set_FunctionResponseTypes))::System::Collections::Generic::List_1<::StringW>* FunctionResponseTypes;

  __declspec(property(get = get_LastModified, put = set_LastModified))::System::DateTime LastModified;

  __declspec(property(get = get_LastProcessingResult, put = set_LastProcessingResult))::StringW LastProcessingResult;

  __declspec(property(get = get_MaximumBatchingWindowInSeconds, put = set_MaximumBatchingWindowInSeconds)) int32_t MaximumBatchingWindowInSeconds;

  __declspec(property(get = get_MaximumRecordAgeInSeconds, put = set_MaximumRecordAgeInSeconds)) int32_t MaximumRecordAgeInSeconds;

  __declspec(property(get = get_MaximumRetryAttempts, put = set_MaximumRetryAttempts)) int32_t MaximumRetryAttempts;

  __declspec(property(get = get_ParallelizationFactor, put = set_ParallelizationFactor)) int32_t ParallelizationFactor;

  __declspec(property(get = get_Queues, put = set_Queues))::System::Collections::Generic::List_1<::StringW>* Queues;

  __declspec(property(get = get_SelfManagedEventSource, put = set_SelfManagedEventSource))::Amazon::Lambda::Model::SelfManagedEventSource* SelfManagedEventSource;

  __declspec(property(get = get_SourceAccessConfigurations,
                      put = set_SourceAccessConfigurations))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* SourceAccessConfigurations;

  __declspec(property(get = get_StartingPosition, put = set_StartingPosition))::Amazon::Lambda::EventSourcePosition* StartingPosition;

  __declspec(property(get = get_StartingPositionTimestamp, put = set_StartingPositionTimestamp))::System::DateTime StartingPositionTimestamp;

  __declspec(property(get = get_State, put = set_State))::StringW State;

  __declspec(property(get = get_StateTransitionReason, put = set_StateTransitionReason))::StringW StateTransitionReason;

  __declspec(property(get = get_Topics, put = set_Topics))::System::Collections::Generic::List_1<::StringW>* Topics;

  __declspec(property(get = get_TumblingWindowInSeconds, put = set_TumblingWindowInSeconds)) int32_t TumblingWindowInSeconds;

  __declspec(property(get = get_UUID, put = set_UUID))::StringW UUID;

  /// @brief Field _batchSize, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get__batchSize, put = __cordl_internal_set__batchSize))::System::Nullable_1<int32_t> _batchSize;

  /// @brief Field _bisectBatchOnFunctionError, offset 0x2c, size 0x2
  __declspec(property(get = __cordl_internal_get__bisectBatchOnFunctionError, put = __cordl_internal_set__bisectBatchOnFunctionError))::System::Nullable_1<bool> _bisectBatchOnFunctionError;

  /// @brief Field _destinationConfig, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationConfig, put = __cordl_internal_set__destinationConfig))::Amazon::Lambda::Model::DestinationConfig* _destinationConfig;

  /// @brief Field _eventSourceArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSourceArn, put = __cordl_internal_set__eventSourceArn))::StringW _eventSourceArn;

  /// @brief Field _functionArn, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__functionArn, put = __cordl_internal_set__functionArn))::StringW _functionArn;

  /// @brief Field _functionResponseTypes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__functionResponseTypes, put = __cordl_internal_set__functionResponseTypes))::System::Collections::Generic::List_1<::StringW>* _functionResponseTypes;

  /// @brief Field _lastModified, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified))::System::Nullable_1<::System::DateTime> _lastModified;

  /// @brief Field _lastProcessingResult, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__lastProcessingResult, put = __cordl_internal_set__lastProcessingResult))::StringW _lastProcessingResult;

  /// @brief Field _maximumBatchingWindowInSeconds, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumBatchingWindowInSeconds,
                      put = __cordl_internal_set__maximumBatchingWindowInSeconds))::System::Nullable_1<int32_t> _maximumBatchingWindowInSeconds;

  /// @brief Field _maximumRecordAgeInSeconds, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRecordAgeInSeconds, put = __cordl_internal_set__maximumRecordAgeInSeconds))::System::Nullable_1<int32_t> _maximumRecordAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRetryAttempts, put = __cordl_internal_set__maximumRetryAttempts))::System::Nullable_1<int32_t> _maximumRetryAttempts;

  /// @brief Field _parallelizationFactor, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__parallelizationFactor, put = __cordl_internal_set__parallelizationFactor))::System::Nullable_1<int32_t> _parallelizationFactor;

  /// @brief Field _queues, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__queues, put = __cordl_internal_set__queues))::System::Collections::Generic::List_1<::StringW>* _queues;

  /// @brief Field _selfManagedEventSource, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__selfManagedEventSource, put = __cordl_internal_set__selfManagedEventSource))::Amazon::Lambda::Model::SelfManagedEventSource* _selfManagedEventSource;

  /// @brief Field _sourceAccessConfigurations, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceAccessConfigurations,
                      put = __cordl_internal_set__sourceAccessConfigurations))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* _sourceAccessConfigurations;

  /// @brief Field _startingPosition, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__startingPosition, put = __cordl_internal_set__startingPosition))::Amazon::Lambda::EventSourcePosition* _startingPosition;

  /// @brief Field _startingPositionTimestamp, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__startingPositionTimestamp, put = __cordl_internal_set__startingPositionTimestamp))::System::Nullable_1<::System::DateTime> _startingPositionTimestamp;

  /// @brief Field _state, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::StringW _state;

  /// @brief Field _stateTransitionReason, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__stateTransitionReason, put = __cordl_internal_set__stateTransitionReason))::StringW _stateTransitionReason;

  /// @brief Field _topics, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__topics, put = __cordl_internal_set__topics))::System::Collections::Generic::List_1<::StringW>* _topics;

  /// @brief Field _tumblingWindowInSeconds, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__tumblingWindowInSeconds, put = __cordl_internal_set__tumblingWindowInSeconds))::System::Nullable_1<int32_t> _tumblingWindowInSeconds;

  /// @brief Field _uuid, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__uuid, put = __cordl_internal_set__uuid))::StringW _uuid;

  /// @brief Method IsSetBatchSize, addr 0x2bc9cdc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBatchSize();

  /// @brief Method IsSetBisectBatchOnFunctionError, addr 0x2bc9dbc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBisectBatchOnFunctionError();

  /// @brief Method IsSetDestinationConfig, addr 0x2bc9e08, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestinationConfig();

  /// @brief Method IsSetEventSourceArn, addr 0x2bc9e28, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEventSourceArn();

  /// @brief Method IsSetFunctionArn, addr 0x2bc9e48, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionArn();

  /// @brief Method IsSetFunctionResponseTypes, addr 0x2bc9e68, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFunctionResponseTypes();

  /// @brief Method IsSetLastModified, addr 0x2bc9f68, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastModified();

  /// @brief Method IsSetLastProcessingResult, addr 0x2bc9fb4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastProcessingResult();

  /// @brief Method IsSetMaximumBatchingWindowInSeconds, addr 0x2bca068, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumBatchingWindowInSeconds();

  /// @brief Method IsSetMaximumRecordAgeInSeconds, addr 0x2bca148, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRecordAgeInSeconds();

  /// @brief Method IsSetMaximumRetryAttempts, addr 0x2bca228, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRetryAttempts();

  /// @brief Method IsSetParallelizationFactor, addr 0x2bca308, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetParallelizationFactor();

  /// @brief Method IsSetQueues, addr 0x2bca354, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetQueues();

  /// @brief Method IsSetSelfManagedEventSource, addr 0x2bca3b8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSelfManagedEventSource();

  /// @brief Method IsSetSourceAccessConfigurations, addr 0x2bca3d8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSourceAccessConfigurations();

  /// @brief Method IsSetStartingPosition, addr 0x2bca43c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStartingPosition();

  /// @brief Method IsSetStartingPositionTimestamp, addr 0x2bca548, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetStartingPositionTimestamp();

  /// @brief Method IsSetState, addr 0x2bca594, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetState();

  /// @brief Method IsSetStateTransitionReason, addr 0x2bca5b4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStateTransitionReason();

  /// @brief Method IsSetTopics, addr 0x2bca5d4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTopics();

  /// @brief Method IsSetTumblingWindowInSeconds, addr 0x2bca6cc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTumblingWindowInSeconds();

  /// @brief Method IsSetUUID, addr 0x2bca718, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUUID();

  static inline ::Amazon::Lambda::Model::GetEventSourceMappingResponse* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__batchSize() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__batchSize();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__bisectBatchOnFunctionError() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__bisectBatchOnFunctionError();

  constexpr ::Amazon::Lambda::Model::DestinationConfig*& __cordl_internal_get__destinationConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DestinationConfig*> const& __cordl_internal_get__destinationConfig() const;

  constexpr ::StringW const& __cordl_internal_get__eventSourceArn() const;

  constexpr ::StringW& __cordl_internal_get__eventSourceArn();

  constexpr ::StringW const& __cordl_internal_get__functionArn() const;

  constexpr ::StringW& __cordl_internal_get__functionArn();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__functionResponseTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__functionResponseTypes() const;

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__lastModified() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__lastModified();

  constexpr ::StringW const& __cordl_internal_get__lastProcessingResult() const;

  constexpr ::StringW& __cordl_internal_get__lastProcessingResult();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumBatchingWindowInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumBatchingWindowInSeconds();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumRecordAgeInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumRecordAgeInSeconds();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumRetryAttempts() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumRetryAttempts();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__parallelizationFactor() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__parallelizationFactor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__queues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__queues() const;

  constexpr ::Amazon::Lambda::Model::SelfManagedEventSource*& __cordl_internal_get__selfManagedEventSource();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::SelfManagedEventSource*> const& __cordl_internal_get__selfManagedEventSource() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>*& __cordl_internal_get__sourceAccessConfigurations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>*> const&
  __cordl_internal_get__sourceAccessConfigurations() const;

  constexpr ::Amazon::Lambda::EventSourcePosition*& __cordl_internal_get__startingPosition();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::EventSourcePosition*> const& __cordl_internal_get__startingPosition() const;

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__startingPositionTimestamp() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__startingPositionTimestamp();

  constexpr ::StringW const& __cordl_internal_get__state() const;

  constexpr ::StringW& __cordl_internal_get__state();

  constexpr ::StringW const& __cordl_internal_get__stateTransitionReason() const;

  constexpr ::StringW& __cordl_internal_get__stateTransitionReason();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__topics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__topics() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__tumblingWindowInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__tumblingWindowInSeconds();

  constexpr ::StringW const& __cordl_internal_get__uuid() const;

  constexpr ::StringW& __cordl_internal_get__uuid();

  constexpr void __cordl_internal_set__batchSize(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__bisectBatchOnFunctionError(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__destinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  constexpr void __cordl_internal_set__eventSourceArn(::StringW value);

  constexpr void __cordl_internal_set__functionArn(::StringW value);

  constexpr void __cordl_internal_set__functionResponseTypes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__lastModified(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__lastProcessingResult(::StringW value);

  constexpr void __cordl_internal_set__maximumBatchingWindowInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__maximumRecordAgeInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__maximumRetryAttempts(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__parallelizationFactor(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__queues(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__selfManagedEventSource(::Amazon::Lambda::Model::SelfManagedEventSource* value);

  constexpr void __cordl_internal_set__sourceAccessConfigurations(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* value);

  constexpr void __cordl_internal_set__startingPosition(::Amazon::Lambda::EventSourcePosition* value);

  constexpr void __cordl_internal_set__startingPositionTimestamp(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__state(::StringW value);

  constexpr void __cordl_internal_set__stateTransitionReason(::StringW value);

  constexpr void __cordl_internal_set__topics(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__tumblingWindowInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__uuid(::StringW value);

  /// @brief Method .ctor, addr 0x2bca728, size 0x100, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BatchSize, addr 0x2bc9c38, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_BatchSize();

  /// @brief Method get_BisectBatchOnFunctionError, addr 0x2bc9d18, size 0x3c, virtual false, abstract: false, final false
  inline bool get_BisectBatchOnFunctionError();

  /// @brief Method get_DestinationConfig, addr 0x2bc9df8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DestinationConfig* get_DestinationConfig();

  /// @brief Method get_EventSourceArn, addr 0x2bc9e18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventSourceArn();

  /// @brief Method get_FunctionArn, addr 0x2bc9e38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionArn();

  /// @brief Method get_FunctionResponseTypes, addr 0x2bc9e58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_FunctionResponseTypes();

  /// @brief Method get_LastModified, addr 0x2bc9ebc, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastModified();

  /// @brief Method get_LastProcessingResult, addr 0x2bc9fa4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastProcessingResult();

  /// @brief Method get_MaximumBatchingWindowInSeconds, addr 0x2bc9fc4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumBatchingWindowInSeconds();

  /// @brief Method get_MaximumRecordAgeInSeconds, addr 0x2bca0a4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRecordAgeInSeconds();

  /// @brief Method get_MaximumRetryAttempts, addr 0x2bca184, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRetryAttempts();

  /// @brief Method get_ParallelizationFactor, addr 0x2bca264, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ParallelizationFactor();

  /// @brief Method get_Queues, addr 0x2bca344, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Queues();

  /// @brief Method get_SelfManagedEventSource, addr 0x2bca3a8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::SelfManagedEventSource* get_SelfManagedEventSource();

  /// @brief Method get_SourceAccessConfigurations, addr 0x2bca3c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* get_SourceAccessConfigurations();

  /// @brief Method get_StartingPosition, addr 0x2bca42c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::EventSourcePosition* get_StartingPosition();

  /// @brief Method get_StartingPositionTimestamp, addr 0x2bca49c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_StartingPositionTimestamp();

  /// @brief Method get_State, addr 0x2bca584, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_State();

  /// @brief Method get_StateTransitionReason, addr 0x2bca5a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StateTransitionReason();

  /// @brief Method get_Topics, addr 0x2bca5c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Topics();

  /// @brief Method get_TumblingWindowInSeconds, addr 0x2bca628, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_TumblingWindowInSeconds();

  /// @brief Method get_UUID, addr 0x2bca708, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UUID();

  /// @brief Method set_BatchSize, addr 0x2bc9c74, size 0x68, virtual false, abstract: false, final false
  inline void set_BatchSize(int32_t value);

  /// @brief Method set_BisectBatchOnFunctionError, addr 0x2bc9d54, size 0x68, virtual false, abstract: false, final false
  inline void set_BisectBatchOnFunctionError(bool value);

  /// @brief Method set_DestinationConfig, addr 0x2bc9e00, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  /// @brief Method set_EventSourceArn, addr 0x2bc9e20, size 0x8, virtual false, abstract: false, final false
  inline void set_EventSourceArn(::StringW value);

  /// @brief Method set_FunctionArn, addr 0x2bc9e40, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionArn(::StringW value);

  /// @brief Method set_FunctionResponseTypes, addr 0x2bc9e60, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionResponseTypes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_LastModified, addr 0x2bc9ef8, size 0x70, virtual false, abstract: false, final false
  inline void set_LastModified(::System::DateTime value);

  /// @brief Method set_LastProcessingResult, addr 0x2bc9fac, size 0x8, virtual false, abstract: false, final false
  inline void set_LastProcessingResult(::StringW value);

  /// @brief Method set_MaximumBatchingWindowInSeconds, addr 0x2bca000, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumBatchingWindowInSeconds(int32_t value);

  /// @brief Method set_MaximumRecordAgeInSeconds, addr 0x2bca0e0, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRecordAgeInSeconds(int32_t value);

  /// @brief Method set_MaximumRetryAttempts, addr 0x2bca1c0, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRetryAttempts(int32_t value);

  /// @brief Method set_ParallelizationFactor, addr 0x2bca2a0, size 0x68, virtual false, abstract: false, final false
  inline void set_ParallelizationFactor(int32_t value);

  /// @brief Method set_Queues, addr 0x2bca34c, size 0x8, virtual false, abstract: false, final false
  inline void set_Queues(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_SelfManagedEventSource, addr 0x2bca3b0, size 0x8, virtual false, abstract: false, final false
  inline void set_SelfManagedEventSource(::Amazon::Lambda::Model::SelfManagedEventSource* value);

  /// @brief Method set_SourceAccessConfigurations, addr 0x2bca3d0, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceAccessConfigurations(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* value);

  /// @brief Method set_StartingPosition, addr 0x2bca434, size 0x8, virtual false, abstract: false, final false
  inline void set_StartingPosition(::Amazon::Lambda::EventSourcePosition* value);

  /// @brief Method set_StartingPositionTimestamp, addr 0x2bca4d8, size 0x70, virtual false, abstract: false, final false
  inline void set_StartingPositionTimestamp(::System::DateTime value);

  /// @brief Method set_State, addr 0x2bca58c, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::StringW value);

  /// @brief Method set_StateTransitionReason, addr 0x2bca5ac, size 0x8, virtual false, abstract: false, final false
  inline void set_StateTransitionReason(::StringW value);

  /// @brief Method set_Topics, addr 0x2bca5cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Topics(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_TumblingWindowInSeconds, addr 0x2bca664, size 0x68, virtual false, abstract: false, final false
  inline void set_TumblingWindowInSeconds(int32_t value);

  /// @brief Method set_UUID, addr 0x2bca710, size 0x8, virtual false, abstract: false, final false
  inline void set_UUID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetEventSourceMappingResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetEventSourceMappingResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetEventSourceMappingResponse(GetEventSourceMappingResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetEventSourceMappingResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetEventSourceMappingResponse(GetEventSourceMappingResponse const&) = delete;

  /// @brief Field _batchSize, offset: 0x24, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____batchSize;

  /// @brief Field _bisectBatchOnFunctionError, offset: 0x2c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____bisectBatchOnFunctionError;

  /// @brief Field _destinationConfig, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DestinationConfig* ____destinationConfig;

  /// @brief Field _eventSourceArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____eventSourceArn;

  /// @brief Field _functionArn, offset: 0x40, size: 0x8, def value: None
  ::StringW ____functionArn;

  /// @brief Field _functionResponseTypes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____functionResponseTypes;

  /// @brief Field _lastModified, offset: 0x50, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____lastModified;

  /// @brief Field _lastProcessingResult, offset: 0x60, size: 0x8, def value: None
  ::StringW ____lastProcessingResult;

  /// @brief Field _maximumBatchingWindowInSeconds, offset: 0x68, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumBatchingWindowInSeconds;

  /// @brief Field _maximumRecordAgeInSeconds, offset: 0x70, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRecordAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset: 0x78, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRetryAttempts;

  /// @brief Field _parallelizationFactor, offset: 0x80, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____parallelizationFactor;

  /// @brief Field _queues, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____queues;

  /// @brief Field _selfManagedEventSource, offset: 0x90, size: 0x8, def value: None
  ::Amazon::Lambda::Model::SelfManagedEventSource* ____selfManagedEventSource;

  /// @brief Field _sourceAccessConfigurations, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* ____sourceAccessConfigurations;

  /// @brief Field _startingPosition, offset: 0xa0, size: 0x8, def value: None
  ::Amazon::Lambda::EventSourcePosition* ____startingPosition;

  /// @brief Field _startingPositionTimestamp, offset: 0xa8, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____startingPositionTimestamp;

  /// @brief Field _state, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____state;

  /// @brief Field _stateTransitionReason, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____stateTransitionReason;

  /// @brief Field _topics, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____topics;

  /// @brief Field _tumblingWindowInSeconds, offset: 0xd0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____tumblingWindowInSeconds;

  /// @brief Field _uuid, offset: 0xd8, size: 0x8, def value: None
  ::StringW ____uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetEventSourceMappingResponse, 0xe0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____batchSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____bisectBatchOnFunctionError) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____destinationConfig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____eventSourceArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____functionArn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____functionResponseTypes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____lastModified) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____lastProcessingResult) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____maximumBatchingWindowInSeconds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____maximumRecordAgeInSeconds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____maximumRetryAttempts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____parallelizationFactor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____queues) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____selfManagedEventSource) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____sourceAccessConfigurations) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____startingPosition) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____startingPositionTimestamp) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____state) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____stateTransitionReason) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____topics) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____tumblingWindowInSeconds) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetEventSourceMappingResponse, ____uuid) == 0xd8, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetEventSourceMappingResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetEventSourceMappingResponse*, "Amazon.Lambda.Model", "GetEventSourceMappingResponse");
