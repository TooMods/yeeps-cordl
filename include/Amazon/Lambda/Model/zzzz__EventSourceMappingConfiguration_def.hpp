#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventSourceMappingConfiguration)
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
class EventSourceMappingConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::EventSourceMappingConfiguration);
// Type: Amazon.Lambda.Model::EventSourceMappingConfiguration
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::EventSourceMappingConfiguration*
class CORDL_TYPE EventSourceMappingConfiguration : public ::System::Object {
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

  /// @brief Field _batchSize, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__batchSize, put = __cordl_internal_set__batchSize))::System::Nullable_1<int32_t> _batchSize;

  /// @brief Field _bisectBatchOnFunctionError, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get__bisectBatchOnFunctionError, put = __cordl_internal_set__bisectBatchOnFunctionError))::System::Nullable_1<bool> _bisectBatchOnFunctionError;

  /// @brief Field _destinationConfig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationConfig, put = __cordl_internal_set__destinationConfig))::Amazon::Lambda::Model::DestinationConfig* _destinationConfig;

  /// @brief Field _eventSourceArn, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSourceArn, put = __cordl_internal_set__eventSourceArn))::StringW _eventSourceArn;

  /// @brief Field _functionArn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__functionArn, put = __cordl_internal_set__functionArn))::StringW _functionArn;

  /// @brief Field _functionResponseTypes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionResponseTypes, put = __cordl_internal_set__functionResponseTypes))::System::Collections::Generic::List_1<::StringW>* _functionResponseTypes;

  /// @brief Field _lastModified, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified))::System::Nullable_1<::System::DateTime> _lastModified;

  /// @brief Field _lastProcessingResult, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lastProcessingResult, put = __cordl_internal_set__lastProcessingResult))::StringW _lastProcessingResult;

  /// @brief Field _maximumBatchingWindowInSeconds, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumBatchingWindowInSeconds,
                      put = __cordl_internal_set__maximumBatchingWindowInSeconds))::System::Nullable_1<int32_t> _maximumBatchingWindowInSeconds;

  /// @brief Field _maximumRecordAgeInSeconds, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRecordAgeInSeconds, put = __cordl_internal_set__maximumRecordAgeInSeconds))::System::Nullable_1<int32_t> _maximumRecordAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRetryAttempts, put = __cordl_internal_set__maximumRetryAttempts))::System::Nullable_1<int32_t> _maximumRetryAttempts;

  /// @brief Field _parallelizationFactor, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__parallelizationFactor, put = __cordl_internal_set__parallelizationFactor))::System::Nullable_1<int32_t> _parallelizationFactor;

  /// @brief Field _queues, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__queues, put = __cordl_internal_set__queues))::System::Collections::Generic::List_1<::StringW>* _queues;

  /// @brief Field _selfManagedEventSource, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__selfManagedEventSource, put = __cordl_internal_set__selfManagedEventSource))::Amazon::Lambda::Model::SelfManagedEventSource* _selfManagedEventSource;

  /// @brief Field _sourceAccessConfigurations, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceAccessConfigurations,
                      put = __cordl_internal_set__sourceAccessConfigurations))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* _sourceAccessConfigurations;

  /// @brief Field _startingPosition, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__startingPosition, put = __cordl_internal_set__startingPosition))::Amazon::Lambda::EventSourcePosition* _startingPosition;

  /// @brief Field _startingPositionTimestamp, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__startingPositionTimestamp, put = __cordl_internal_set__startingPositionTimestamp))::System::Nullable_1<::System::DateTime> _startingPositionTimestamp;

  /// @brief Field _state, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::StringW _state;

  /// @brief Field _stateTransitionReason, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__stateTransitionReason, put = __cordl_internal_set__stateTransitionReason))::StringW _stateTransitionReason;

  /// @brief Field _topics, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__topics, put = __cordl_internal_set__topics))::System::Collections::Generic::List_1<::StringW>* _topics;

  /// @brief Field _tumblingWindowInSeconds, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__tumblingWindowInSeconds, put = __cordl_internal_set__tumblingWindowInSeconds))::System::Nullable_1<int32_t> _tumblingWindowInSeconds;

  /// @brief Field _uuid, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__uuid, put = __cordl_internal_set__uuid))::StringW _uuid;

  /// @brief Method IsSetBatchSize, addr 0x2bc815c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBatchSize();

  /// @brief Method IsSetBisectBatchOnFunctionError, addr 0x2bc823c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBisectBatchOnFunctionError();

  /// @brief Method IsSetDestinationConfig, addr 0x2bc8288, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestinationConfig();

  /// @brief Method IsSetEventSourceArn, addr 0x2bc82a8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEventSourceArn();

  /// @brief Method IsSetFunctionArn, addr 0x2bc82c8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionArn();

  /// @brief Method IsSetFunctionResponseTypes, addr 0x2bc82e8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFunctionResponseTypes();

  /// @brief Method IsSetLastModified, addr 0x2bc83e8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastModified();

  /// @brief Method IsSetLastProcessingResult, addr 0x2bc8434, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastProcessingResult();

  /// @brief Method IsSetMaximumBatchingWindowInSeconds, addr 0x2bc84e8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumBatchingWindowInSeconds();

  /// @brief Method IsSetMaximumRecordAgeInSeconds, addr 0x2bc85c8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRecordAgeInSeconds();

  /// @brief Method IsSetMaximumRetryAttempts, addr 0x2bc86a8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRetryAttempts();

  /// @brief Method IsSetParallelizationFactor, addr 0x2bc8788, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetParallelizationFactor();

  /// @brief Method IsSetQueues, addr 0x2bc87d4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetQueues();

  /// @brief Method IsSetSelfManagedEventSource, addr 0x2bc8838, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSelfManagedEventSource();

  /// @brief Method IsSetSourceAccessConfigurations, addr 0x2bc8858, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSourceAccessConfigurations();

  /// @brief Method IsSetStartingPosition, addr 0x2bc88bc, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStartingPosition();

  /// @brief Method IsSetStartingPositionTimestamp, addr 0x2bc89c8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetStartingPositionTimestamp();

  /// @brief Method IsSetState, addr 0x2bc8a14, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetState();

  /// @brief Method IsSetStateTransitionReason, addr 0x2bc8a34, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStateTransitionReason();

  /// @brief Method IsSetTopics, addr 0x2bc8a54, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTopics();

  /// @brief Method IsSetTumblingWindowInSeconds, addr 0x2bc8b4c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTumblingWindowInSeconds();

  /// @brief Method IsSetUUID, addr 0x2bc8b98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUUID();

  static inline ::Amazon::Lambda::Model::EventSourceMappingConfiguration* New_ctor();

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

  /// @brief Method .ctor, addr 0x2bc8ba8, size 0x100, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BatchSize, addr 0x2bc80b8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_BatchSize();

  /// @brief Method get_BisectBatchOnFunctionError, addr 0x2bc8198, size 0x3c, virtual false, abstract: false, final false
  inline bool get_BisectBatchOnFunctionError();

  /// @brief Method get_DestinationConfig, addr 0x2bc8278, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DestinationConfig* get_DestinationConfig();

  /// @brief Method get_EventSourceArn, addr 0x2bc8298, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventSourceArn();

  /// @brief Method get_FunctionArn, addr 0x2bc82b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionArn();

  /// @brief Method get_FunctionResponseTypes, addr 0x2bc82d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_FunctionResponseTypes();

  /// @brief Method get_LastModified, addr 0x2bc833c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastModified();

  /// @brief Method get_LastProcessingResult, addr 0x2bc8424, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastProcessingResult();

  /// @brief Method get_MaximumBatchingWindowInSeconds, addr 0x2bc8444, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumBatchingWindowInSeconds();

  /// @brief Method get_MaximumRecordAgeInSeconds, addr 0x2bc8524, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRecordAgeInSeconds();

  /// @brief Method get_MaximumRetryAttempts, addr 0x2bc8604, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRetryAttempts();

  /// @brief Method get_ParallelizationFactor, addr 0x2bc86e4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ParallelizationFactor();

  /// @brief Method get_Queues, addr 0x2bc87c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Queues();

  /// @brief Method get_SelfManagedEventSource, addr 0x2bc8828, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::SelfManagedEventSource* get_SelfManagedEventSource();

  /// @brief Method get_SourceAccessConfigurations, addr 0x2bc8848, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* get_SourceAccessConfigurations();

  /// @brief Method get_StartingPosition, addr 0x2bc88ac, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::EventSourcePosition* get_StartingPosition();

  /// @brief Method get_StartingPositionTimestamp, addr 0x2bc891c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_StartingPositionTimestamp();

  /// @brief Method get_State, addr 0x2bc8a04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_State();

  /// @brief Method get_StateTransitionReason, addr 0x2bc8a24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StateTransitionReason();

  /// @brief Method get_Topics, addr 0x2bc8a44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Topics();

  /// @brief Method get_TumblingWindowInSeconds, addr 0x2bc8aa8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_TumblingWindowInSeconds();

  /// @brief Method get_UUID, addr 0x2bc8b88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UUID();

  /// @brief Method set_BatchSize, addr 0x2bc80f4, size 0x68, virtual false, abstract: false, final false
  inline void set_BatchSize(int32_t value);

  /// @brief Method set_BisectBatchOnFunctionError, addr 0x2bc81d4, size 0x68, virtual false, abstract: false, final false
  inline void set_BisectBatchOnFunctionError(bool value);

  /// @brief Method set_DestinationConfig, addr 0x2bc8280, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  /// @brief Method set_EventSourceArn, addr 0x2bc82a0, size 0x8, virtual false, abstract: false, final false
  inline void set_EventSourceArn(::StringW value);

  /// @brief Method set_FunctionArn, addr 0x2bc82c0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionArn(::StringW value);

  /// @brief Method set_FunctionResponseTypes, addr 0x2bc82e0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionResponseTypes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_LastModified, addr 0x2bc8378, size 0x70, virtual false, abstract: false, final false
  inline void set_LastModified(::System::DateTime value);

  /// @brief Method set_LastProcessingResult, addr 0x2bc842c, size 0x8, virtual false, abstract: false, final false
  inline void set_LastProcessingResult(::StringW value);

  /// @brief Method set_MaximumBatchingWindowInSeconds, addr 0x2bc8480, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumBatchingWindowInSeconds(int32_t value);

  /// @brief Method set_MaximumRecordAgeInSeconds, addr 0x2bc8560, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRecordAgeInSeconds(int32_t value);

  /// @brief Method set_MaximumRetryAttempts, addr 0x2bc8640, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRetryAttempts(int32_t value);

  /// @brief Method set_ParallelizationFactor, addr 0x2bc8720, size 0x68, virtual false, abstract: false, final false
  inline void set_ParallelizationFactor(int32_t value);

  /// @brief Method set_Queues, addr 0x2bc87cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Queues(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_SelfManagedEventSource, addr 0x2bc8830, size 0x8, virtual false, abstract: false, final false
  inline void set_SelfManagedEventSource(::Amazon::Lambda::Model::SelfManagedEventSource* value);

  /// @brief Method set_SourceAccessConfigurations, addr 0x2bc8850, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceAccessConfigurations(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* value);

  /// @brief Method set_StartingPosition, addr 0x2bc88b4, size 0x8, virtual false, abstract: false, final false
  inline void set_StartingPosition(::Amazon::Lambda::EventSourcePosition* value);

  /// @brief Method set_StartingPositionTimestamp, addr 0x2bc8958, size 0x70, virtual false, abstract: false, final false
  inline void set_StartingPositionTimestamp(::System::DateTime value);

  /// @brief Method set_State, addr 0x2bc8a0c, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::StringW value);

  /// @brief Method set_StateTransitionReason, addr 0x2bc8a2c, size 0x8, virtual false, abstract: false, final false
  inline void set_StateTransitionReason(::StringW value);

  /// @brief Method set_Topics, addr 0x2bc8a4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Topics(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_TumblingWindowInSeconds, addr 0x2bc8ae4, size 0x68, virtual false, abstract: false, final false
  inline void set_TumblingWindowInSeconds(int32_t value);

  /// @brief Method set_UUID, addr 0x2bc8b90, size 0x8, virtual false, abstract: false, final false
  inline void set_UUID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSourceMappingConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSourceMappingConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSourceMappingConfiguration(EventSourceMappingConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSourceMappingConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSourceMappingConfiguration(EventSourceMappingConfiguration const&) = delete;

  /// @brief Field _batchSize, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____batchSize;

  /// @brief Field _bisectBatchOnFunctionError, offset: 0x18, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____bisectBatchOnFunctionError;

  /// @brief Field _destinationConfig, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DestinationConfig* ____destinationConfig;

  /// @brief Field _eventSourceArn, offset: 0x28, size: 0x8, def value: None
  ::StringW ____eventSourceArn;

  /// @brief Field _functionArn, offset: 0x30, size: 0x8, def value: None
  ::StringW ____functionArn;

  /// @brief Field _functionResponseTypes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____functionResponseTypes;

  /// @brief Field _lastModified, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____lastModified;

  /// @brief Field _lastProcessingResult, offset: 0x50, size: 0x8, def value: None
  ::StringW ____lastProcessingResult;

  /// @brief Field _maximumBatchingWindowInSeconds, offset: 0x58, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumBatchingWindowInSeconds;

  /// @brief Field _maximumRecordAgeInSeconds, offset: 0x60, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRecordAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset: 0x68, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRetryAttempts;

  /// @brief Field _parallelizationFactor, offset: 0x70, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____parallelizationFactor;

  /// @brief Field _queues, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____queues;

  /// @brief Field _selfManagedEventSource, offset: 0x80, size: 0x8, def value: None
  ::Amazon::Lambda::Model::SelfManagedEventSource* ____selfManagedEventSource;

  /// @brief Field _sourceAccessConfigurations, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* ____sourceAccessConfigurations;

  /// @brief Field _startingPosition, offset: 0x90, size: 0x8, def value: None
  ::Amazon::Lambda::EventSourcePosition* ____startingPosition;

  /// @brief Field _startingPositionTimestamp, offset: 0x98, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____startingPositionTimestamp;

  /// @brief Field _state, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____state;

  /// @brief Field _stateTransitionReason, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____stateTransitionReason;

  /// @brief Field _topics, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____topics;

  /// @brief Field _tumblingWindowInSeconds, offset: 0xc0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____tumblingWindowInSeconds;

  /// @brief Field _uuid, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::EventSourceMappingConfiguration, 0xd0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____batchSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____bisectBatchOnFunctionError) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____destinationConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____eventSourceArn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____functionArn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____functionResponseTypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____lastModified) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____lastProcessingResult) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____maximumBatchingWindowInSeconds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____maximumRecordAgeInSeconds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____maximumRetryAttempts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____parallelizationFactor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____queues) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____selfManagedEventSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____sourceAccessConfigurations) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____startingPosition) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____startingPositionTimestamp) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____state) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____stateTransitionReason) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____topics) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____tumblingWindowInSeconds) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EventSourceMappingConfiguration, ____uuid) == 0xc8, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::EventSourceMappingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::EventSourceMappingConfiguration*, "Amazon.Lambda.Model", "EventSourceMappingConfiguration");
