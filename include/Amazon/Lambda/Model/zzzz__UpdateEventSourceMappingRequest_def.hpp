#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateEventSourceMappingRequest)
namespace Amazon::Lambda::Model {
class DestinationConfig;
}
namespace Amazon::Lambda::Model {
class SourceAccessConfiguration;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UpdateEventSourceMappingRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest);
// Type: Amazon.Lambda.Model::UpdateEventSourceMappingRequest
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UpdateEventSourceMappingRequest*
class CORDL_TYPE UpdateEventSourceMappingRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_BatchSize, put = set_BatchSize)) int32_t BatchSize;

  __declspec(property(get = get_BisectBatchOnFunctionError, put = set_BisectBatchOnFunctionError)) bool BisectBatchOnFunctionError;

  __declspec(property(get = get_DestinationConfig, put = set_DestinationConfig))::Amazon::Lambda::Model::DestinationConfig* DestinationConfig;

  __declspec(property(get = get_Enabled, put = set_Enabled)) bool Enabled;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_FunctionResponseTypes, put = set_FunctionResponseTypes))::System::Collections::Generic::List_1<::StringW>* FunctionResponseTypes;

  __declspec(property(get = get_MaximumBatchingWindowInSeconds, put = set_MaximumBatchingWindowInSeconds)) int32_t MaximumBatchingWindowInSeconds;

  __declspec(property(get = get_MaximumRecordAgeInSeconds, put = set_MaximumRecordAgeInSeconds)) int32_t MaximumRecordAgeInSeconds;

  __declspec(property(get = get_MaximumRetryAttempts, put = set_MaximumRetryAttempts)) int32_t MaximumRetryAttempts;

  __declspec(property(get = get_ParallelizationFactor, put = set_ParallelizationFactor)) int32_t ParallelizationFactor;

  __declspec(property(get = get_SourceAccessConfigurations,
                      put = set_SourceAccessConfigurations))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* SourceAccessConfigurations;

  __declspec(property(get = get_TumblingWindowInSeconds, put = set_TumblingWindowInSeconds)) int32_t TumblingWindowInSeconds;

  __declspec(property(get = get_UUID, put = set_UUID))::StringW UUID;

  /// @brief Field _batchSize, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get__batchSize, put = __cordl_internal_set__batchSize))::System::Nullable_1<int32_t> _batchSize;

  /// @brief Field _bisectBatchOnFunctionError, offset 0x3c, size 0x2
  __declspec(property(get = __cordl_internal_get__bisectBatchOnFunctionError, put = __cordl_internal_set__bisectBatchOnFunctionError))::System::Nullable_1<bool> _bisectBatchOnFunctionError;

  /// @brief Field _destinationConfig, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationConfig, put = __cordl_internal_set__destinationConfig))::Amazon::Lambda::Model::DestinationConfig* _destinationConfig;

  /// @brief Field _enabled, offset 0x48, size 0x2
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled))::System::Nullable_1<bool> _enabled;

  /// @brief Field _functionName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _functionResponseTypes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__functionResponseTypes, put = __cordl_internal_set__functionResponseTypes))::System::Collections::Generic::List_1<::StringW>* _functionResponseTypes;

  /// @brief Field _maximumBatchingWindowInSeconds, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumBatchingWindowInSeconds,
                      put = __cordl_internal_set__maximumBatchingWindowInSeconds))::System::Nullable_1<int32_t> _maximumBatchingWindowInSeconds;

  /// @brief Field _maximumRecordAgeInSeconds, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRecordAgeInSeconds, put = __cordl_internal_set__maximumRecordAgeInSeconds))::System::Nullable_1<int32_t> _maximumRecordAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRetryAttempts, put = __cordl_internal_set__maximumRetryAttempts))::System::Nullable_1<int32_t> _maximumRetryAttempts;

  /// @brief Field _parallelizationFactor, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__parallelizationFactor, put = __cordl_internal_set__parallelizationFactor))::System::Nullable_1<int32_t> _parallelizationFactor;

  /// @brief Field _sourceAccessConfigurations, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceAccessConfigurations,
                      put = __cordl_internal_set__sourceAccessConfigurations))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* _sourceAccessConfigurations;

  /// @brief Field _tumblingWindowInSeconds, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__tumblingWindowInSeconds, put = __cordl_internal_set__tumblingWindowInSeconds))::System::Nullable_1<int32_t> _tumblingWindowInSeconds;

  /// @brief Field _uuid, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__uuid, put = __cordl_internal_set__uuid))::StringW _uuid;

  /// @brief Method IsSetBatchSize, addr 0x310999c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBatchSize();

  /// @brief Method IsSetBisectBatchOnFunctionError, addr 0x3109a7c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBisectBatchOnFunctionError();

  /// @brief Method IsSetDestinationConfig, addr 0x3109ac8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestinationConfig();

  /// @brief Method IsSetEnabled, addr 0x3109b7c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetEnabled();

  /// @brief Method IsSetFunctionName, addr 0x3109bc8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetFunctionResponseTypes, addr 0x3109be8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFunctionResponseTypes();

  /// @brief Method IsSetMaximumBatchingWindowInSeconds, addr 0x3109ce0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumBatchingWindowInSeconds();

  /// @brief Method IsSetMaximumRecordAgeInSeconds, addr 0x3109dc0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRecordAgeInSeconds();

  /// @brief Method IsSetMaximumRetryAttempts, addr 0x3109ea0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRetryAttempts();

  /// @brief Method IsSetParallelizationFactor, addr 0x3109f80, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetParallelizationFactor();

  /// @brief Method IsSetSourceAccessConfigurations, addr 0x3109fcc, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetSourceAccessConfigurations();

  /// @brief Method IsSetTumblingWindowInSeconds, addr 0x310a0c4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTumblingWindowInSeconds();

  /// @brief Method IsSetUUID, addr 0x310a110, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUUID();

  static inline ::Amazon::Lambda::Model::UpdateEventSourceMappingRequest* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__batchSize() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__batchSize();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__bisectBatchOnFunctionError() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__bisectBatchOnFunctionError();

  constexpr ::Amazon::Lambda::Model::DestinationConfig*& __cordl_internal_get__destinationConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DestinationConfig*> const& __cordl_internal_get__destinationConfig() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__enabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__enabled();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__functionResponseTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__functionResponseTypes() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumBatchingWindowInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumBatchingWindowInSeconds();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumRecordAgeInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumRecordAgeInSeconds();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumRetryAttempts() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumRetryAttempts();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__parallelizationFactor() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__parallelizationFactor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>*& __cordl_internal_get__sourceAccessConfigurations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>*> const&
  __cordl_internal_get__sourceAccessConfigurations() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__tumblingWindowInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__tumblingWindowInSeconds();

  constexpr ::StringW const& __cordl_internal_get__uuid() const;

  constexpr ::StringW& __cordl_internal_get__uuid();

  constexpr void __cordl_internal_set__batchSize(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__bisectBatchOnFunctionError(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__destinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  constexpr void __cordl_internal_set__enabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__functionResponseTypes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__maximumBatchingWindowInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__maximumRecordAgeInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__maximumRetryAttempts(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__parallelizationFactor(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__sourceAccessConfigurations(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* value);

  constexpr void __cordl_internal_set__tumblingWindowInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__uuid(::StringW value);

  /// @brief Method .ctor, addr 0x310a120, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BatchSize, addr 0x31098f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_BatchSize();

  /// @brief Method get_BisectBatchOnFunctionError, addr 0x31099d8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_BisectBatchOnFunctionError();

  /// @brief Method get_DestinationConfig, addr 0x3109ab8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DestinationConfig* get_DestinationConfig();

  /// @brief Method get_Enabled, addr 0x3109ad8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_Enabled();

  /// @brief Method get_FunctionName, addr 0x3109bb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_FunctionResponseTypes, addr 0x3109bd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_FunctionResponseTypes();

  /// @brief Method get_MaximumBatchingWindowInSeconds, addr 0x3109c3c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumBatchingWindowInSeconds();

  /// @brief Method get_MaximumRecordAgeInSeconds, addr 0x3109d1c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRecordAgeInSeconds();

  /// @brief Method get_MaximumRetryAttempts, addr 0x3109dfc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRetryAttempts();

  /// @brief Method get_ParallelizationFactor, addr 0x3109edc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ParallelizationFactor();

  /// @brief Method get_SourceAccessConfigurations, addr 0x3109fbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* get_SourceAccessConfigurations();

  /// @brief Method get_TumblingWindowInSeconds, addr 0x310a020, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_TumblingWindowInSeconds();

  /// @brief Method get_UUID, addr 0x310a100, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UUID();

  /// @brief Method set_BatchSize, addr 0x3109934, size 0x68, virtual false, abstract: false, final false
  inline void set_BatchSize(int32_t value);

  /// @brief Method set_BisectBatchOnFunctionError, addr 0x3109a14, size 0x68, virtual false, abstract: false, final false
  inline void set_BisectBatchOnFunctionError(bool value);

  /// @brief Method set_DestinationConfig, addr 0x3109ac0, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  /// @brief Method set_Enabled, addr 0x3109b14, size 0x68, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

  /// @brief Method set_FunctionName, addr 0x3109bc0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_FunctionResponseTypes, addr 0x3109be0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionResponseTypes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_MaximumBatchingWindowInSeconds, addr 0x3109c78, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumBatchingWindowInSeconds(int32_t value);

  /// @brief Method set_MaximumRecordAgeInSeconds, addr 0x3109d58, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRecordAgeInSeconds(int32_t value);

  /// @brief Method set_MaximumRetryAttempts, addr 0x3109e38, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRetryAttempts(int32_t value);

  /// @brief Method set_ParallelizationFactor, addr 0x3109f18, size 0x68, virtual false, abstract: false, final false
  inline void set_ParallelizationFactor(int32_t value);

  /// @brief Method set_SourceAccessConfigurations, addr 0x3109fc4, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceAccessConfigurations(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* value);

  /// @brief Method set_TumblingWindowInSeconds, addr 0x310a05c, size 0x68, virtual false, abstract: false, final false
  inline void set_TumblingWindowInSeconds(int32_t value);

  /// @brief Method set_UUID, addr 0x310a108, size 0x8, virtual false, abstract: false, final false
  inline void set_UUID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateEventSourceMappingRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateEventSourceMappingRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateEventSourceMappingRequest(UpdateEventSourceMappingRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateEventSourceMappingRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateEventSourceMappingRequest(UpdateEventSourceMappingRequest const&) = delete;

  /// @brief Field _batchSize, offset: 0x34, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____batchSize;

  /// @brief Field _bisectBatchOnFunctionError, offset: 0x3c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____bisectBatchOnFunctionError;

  /// @brief Field _destinationConfig, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DestinationConfig* ____destinationConfig;

  /// @brief Field _enabled, offset: 0x48, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____enabled;

  /// @brief Field _functionName, offset: 0x50, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _functionResponseTypes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____functionResponseTypes;

  /// @brief Field _maximumBatchingWindowInSeconds, offset: 0x60, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumBatchingWindowInSeconds;

  /// @brief Field _maximumRecordAgeInSeconds, offset: 0x68, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRecordAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset: 0x70, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRetryAttempts;

  /// @brief Field _parallelizationFactor, offset: 0x78, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____parallelizationFactor;

  /// @brief Field _sourceAccessConfigurations, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::SourceAccessConfiguration*>* ____sourceAccessConfigurations;

  /// @brief Field _tumblingWindowInSeconds, offset: 0x88, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____tumblingWindowInSeconds;

  /// @brief Field _uuid, offset: 0x90, size: 0x8, def value: None
  ::StringW ____uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, 0x98>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____batchSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____bisectBatchOnFunctionError) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____destinationConfig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____enabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____functionName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____functionResponseTypes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____maximumBatchingWindowInSeconds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____maximumRecordAgeInSeconds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____maximumRetryAttempts) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____parallelizationFactor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____sourceAccessConfigurations) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____tumblingWindowInSeconds) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest, ____uuid) == 0x90, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UpdateEventSourceMappingRequest*, "Amazon.Lambda.Model", "UpdateEventSourceMappingRequest");
