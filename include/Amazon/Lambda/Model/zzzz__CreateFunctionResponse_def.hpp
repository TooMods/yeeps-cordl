#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateFunctionResponse)
namespace Amazon::Lambda::Model {
class DeadLetterConfig;
}
namespace Amazon::Lambda::Model {
class EnvironmentResponse;
}
namespace Amazon::Lambda::Model {
class FileSystemConfig;
}
namespace Amazon::Lambda::Model {
class ImageConfigResponse;
}
namespace Amazon::Lambda::Model {
class Layer;
}
namespace Amazon::Lambda::Model {
class TracingConfigResponse;
}
namespace Amazon::Lambda::Model {
class VpcConfigDetail;
}
namespace Amazon::Lambda {
class LastUpdateStatusReasonCode;
}
namespace Amazon::Lambda {
class LastUpdateStatus;
}
namespace Amazon::Lambda {
class PackageType;
}
namespace Amazon::Lambda {
class Runtime;
}
namespace Amazon::Lambda {
class StateReasonCode;
}
namespace Amazon::Lambda {
class State;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class CreateFunctionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::CreateFunctionResponse);
// Type: Amazon.Lambda.Model::CreateFunctionResponse
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::CreateFunctionResponse*
class CORDL_TYPE CreateFunctionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_CodeSha256, put = set_CodeSha256))::StringW CodeSha256;

  __declspec(property(get = get_CodeSize, put = set_CodeSize)) int64_t CodeSize;

  __declspec(property(get = get_DeadLetterConfig, put = set_DeadLetterConfig))::Amazon::Lambda::Model::DeadLetterConfig* DeadLetterConfig;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_Environment, put = set_Environment))::Amazon::Lambda::Model::EnvironmentResponse* Environment;

  __declspec(property(get = get_FileSystemConfigs, put = set_FileSystemConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* FileSystemConfigs;

  __declspec(property(get = get_FunctionArn, put = set_FunctionArn))::StringW FunctionArn;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Handler, put = set_Handler))::StringW Handler;

  __declspec(property(get = get_ImageConfigResponse, put = set_ImageConfigResponse))::Amazon::Lambda::Model::ImageConfigResponse* ImageConfigResponse;

  __declspec(property(get = get_KMSKeyArn, put = set_KMSKeyArn))::StringW KMSKeyArn;

  __declspec(property(get = get_LastModified, put = set_LastModified))::StringW LastModified;

  __declspec(property(get = get_LastUpdateStatus, put = set_LastUpdateStatus))::Amazon::Lambda::LastUpdateStatus* LastUpdateStatus;

  __declspec(property(get = get_LastUpdateStatusReason, put = set_LastUpdateStatusReason))::StringW LastUpdateStatusReason;

  __declspec(property(get = get_LastUpdateStatusReasonCode, put = set_LastUpdateStatusReasonCode))::Amazon::Lambda::LastUpdateStatusReasonCode* LastUpdateStatusReasonCode;

  __declspec(property(get = get_Layers, put = set_Layers))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* Layers;

  __declspec(property(get = get_MasterArn, put = set_MasterArn))::StringW MasterArn;

  __declspec(property(get = get_MemorySize, put = set_MemorySize)) int32_t MemorySize;

  __declspec(property(get = get_PackageType, put = set_PackageType))::Amazon::Lambda::PackageType* PackageType;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_Role, put = set_Role))::StringW Role;

  __declspec(property(get = get_Runtime, put = set_Runtime))::Amazon::Lambda::Runtime* Runtime;

  __declspec(property(get = get_SigningJobArn, put = set_SigningJobArn))::StringW SigningJobArn;

  __declspec(property(get = get_SigningProfileVersionArn, put = set_SigningProfileVersionArn))::StringW SigningProfileVersionArn;

  __declspec(property(get = get_State, put = set_State))::Amazon::Lambda::State* State;

  __declspec(property(get = get_StateReason, put = set_StateReason))::StringW StateReason;

  __declspec(property(get = get_StateReasonCode, put = set_StateReasonCode))::Amazon::Lambda::StateReasonCode* StateReasonCode;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_TracingConfig, put = set_TracingConfig))::Amazon::Lambda::Model::TracingConfigResponse* TracingConfig;

  __declspec(property(get = get_Version, put = set_Version))::StringW Version;

  __declspec(property(get = get_VpcConfig, put = set_VpcConfig))::Amazon::Lambda::Model::VpcConfigDetail* VpcConfig;

  /// @brief Field _codeSha256, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSha256, put = __cordl_internal_set__codeSha256))::StringW _codeSha256;

  /// @brief Field _codeSize, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__codeSize, put = __cordl_internal_set__codeSize))::System::Nullable_1<int64_t> _codeSize;

  /// @brief Field _deadLetterConfig, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__deadLetterConfig, put = __cordl_internal_set__deadLetterConfig))::Amazon::Lambda::Model::DeadLetterConfig* _deadLetterConfig;

  /// @brief Field _description, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _environment, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__environment, put = __cordl_internal_set__environment))::Amazon::Lambda::Model::EnvironmentResponse* _environment;

  /// @brief Field _fileSystemConfigs, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__fileSystemConfigs,
                      put = __cordl_internal_set__fileSystemConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* _fileSystemConfigs;

  /// @brief Field _functionArn, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__functionArn, put = __cordl_internal_set__functionArn))::StringW _functionArn;

  /// @brief Field _functionName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _handler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::StringW _handler;

  /// @brief Field _imageConfigResponse, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__imageConfigResponse, put = __cordl_internal_set__imageConfigResponse))::Amazon::Lambda::Model::ImageConfigResponse* _imageConfigResponse;

  /// @brief Field _kmsKeyArn, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__kmsKeyArn, put = __cordl_internal_set__kmsKeyArn))::StringW _kmsKeyArn;

  /// @brief Field _lastModified, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified))::StringW _lastModified;

  /// @brief Field _lastUpdateStatus, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUpdateStatus, put = __cordl_internal_set__lastUpdateStatus))::Amazon::Lambda::LastUpdateStatus* _lastUpdateStatus;

  /// @brief Field _lastUpdateStatusReason, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUpdateStatusReason, put = __cordl_internal_set__lastUpdateStatusReason))::StringW _lastUpdateStatusReason;

  /// @brief Field _lastUpdateStatusReasonCode, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUpdateStatusReasonCode,
                      put = __cordl_internal_set__lastUpdateStatusReasonCode))::Amazon::Lambda::LastUpdateStatusReasonCode* _lastUpdateStatusReasonCode;

  /// @brief Field _layers, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__layers, put = __cordl_internal_set__layers))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* _layers;

  /// @brief Field _masterArn, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__masterArn, put = __cordl_internal_set__masterArn))::StringW _masterArn;

  /// @brief Field _memorySize, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__memorySize, put = __cordl_internal_set__memorySize))::System::Nullable_1<int32_t> _memorySize;

  /// @brief Field _packageType, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__packageType, put = __cordl_internal_set__packageType))::Amazon::Lambda::PackageType* _packageType;

  /// @brief Field _revisionId, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _role, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__role, put = __cordl_internal_set__role))::StringW _role;

  /// @brief Field _runtime, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__runtime, put = __cordl_internal_set__runtime))::Amazon::Lambda::Runtime* _runtime;

  /// @brief Field _signingJobArn, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__signingJobArn, put = __cordl_internal_set__signingJobArn))::StringW _signingJobArn;

  /// @brief Field _signingProfileVersionArn, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__signingProfileVersionArn, put = __cordl_internal_set__signingProfileVersionArn))::StringW _signingProfileVersionArn;

  /// @brief Field _state, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::Amazon::Lambda::State* _state;

  /// @brief Field _stateReason, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__stateReason, put = __cordl_internal_set__stateReason))::StringW _stateReason;

  /// @brief Field _stateReasonCode, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__stateReasonCode, put = __cordl_internal_set__stateReasonCode))::Amazon::Lambda::StateReasonCode* _stateReasonCode;

  /// @brief Field _timeout, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__timeout, put = __cordl_internal_set__timeout))::System::Nullable_1<int32_t> _timeout;

  /// @brief Field _tracingConfig, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__tracingConfig, put = __cordl_internal_set__tracingConfig))::Amazon::Lambda::Model::TracingConfigResponse* _tracingConfig;

  /// @brief Field _version, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version))::StringW _version;

  /// @brief Field _vpcConfig, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__vpcConfig, put = __cordl_internal_set__vpcConfig))::Amazon::Lambda::Model::VpcConfigDetail* _vpcConfig;

  /// @brief Method IsSetCodeSha256, addr 0x2bc6304, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSha256();

  /// @brief Method IsSetCodeSize, addr 0x2bc63c0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCodeSize();

  /// @brief Method IsSetDeadLetterConfig, addr 0x2bc640c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDeadLetterConfig();

  /// @brief Method IsSetDescription, addr 0x2bc642c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetEnvironment, addr 0x2bc644c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEnvironment();

  /// @brief Method IsSetFileSystemConfigs, addr 0x2bc646c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFileSystemConfigs();

  /// @brief Method IsSetFunctionArn, addr 0x2bc64d0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionArn();

  /// @brief Method IsSetFunctionName, addr 0x2bc64f0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetHandler, addr 0x2bc6510, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetHandler();

  /// @brief Method IsSetImageConfigResponse, addr 0x2bc6530, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetImageConfigResponse();

  /// @brief Method IsSetKMSKeyArn, addr 0x2bc6550, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKMSKeyArn();

  /// @brief Method IsSetLastModified, addr 0x2bc6570, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastModified();

  /// @brief Method IsSetLastUpdateStatus, addr 0x2bc6590, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetLastUpdateStatus();

  /// @brief Method IsSetLastUpdateStatusReason, addr 0x2bc6600, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastUpdateStatusReason();

  /// @brief Method IsSetLastUpdateStatusReasonCode, addr 0x2bc6620, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetLastUpdateStatusReasonCode();

  /// @brief Method IsSetLayers, addr 0x2bc6690, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLayers();

  /// @brief Method IsSetMasterArn, addr 0x2bc66f4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMasterArn();

  /// @brief Method IsSetMemorySize, addr 0x2bc67a8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMemorySize();

  /// @brief Method IsSetPackageType, addr 0x2bc67f4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetPackageType();

  /// @brief Method IsSetRevisionId, addr 0x2bc6864, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetRole, addr 0x2bc6884, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRole();

  /// @brief Method IsSetRuntime, addr 0x2bc68a4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetRuntime();

  /// @brief Method IsSetSigningJobArn, addr 0x2bc6914, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSigningJobArn();

  /// @brief Method IsSetSigningProfileVersionArn, addr 0x2bc6934, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSigningProfileVersionArn();

  /// @brief Method IsSetState, addr 0x2bc6954, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetState();

  /// @brief Method IsSetStateReason, addr 0x2bc69c4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStateReason();

  /// @brief Method IsSetStateReasonCode, addr 0x2bc69e4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStateReasonCode();

  /// @brief Method IsSetTimeout, addr 0x2bc6ae8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTimeout();

  /// @brief Method IsSetTracingConfig, addr 0x2bc6b34, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTracingConfig();

  /// @brief Method IsSetVersion, addr 0x2bc6b54, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetVersion();

  /// @brief Method IsSetVpcConfig, addr 0x2bc6b74, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetVpcConfig();

  static inline ::Amazon::Lambda::Model::CreateFunctionResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__codeSha256() const;

  constexpr ::StringW& __cordl_internal_get__codeSha256();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__codeSize() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__codeSize();

  constexpr ::Amazon::Lambda::Model::DeadLetterConfig*& __cordl_internal_get__deadLetterConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DeadLetterConfig*> const& __cordl_internal_get__deadLetterConfig() const;

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::Amazon::Lambda::Model::EnvironmentResponse*& __cordl_internal_get__environment();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::EnvironmentResponse*> const& __cordl_internal_get__environment() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*& __cordl_internal_get__fileSystemConfigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*> const& __cordl_internal_get__fileSystemConfigs() const;

  constexpr ::StringW const& __cordl_internal_get__functionArn() const;

  constexpr ::StringW& __cordl_internal_get__functionArn();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__handler() const;

  constexpr ::StringW& __cordl_internal_get__handler();

  constexpr ::Amazon::Lambda::Model::ImageConfigResponse*& __cordl_internal_get__imageConfigResponse();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfigResponse*> const& __cordl_internal_get__imageConfigResponse() const;

  constexpr ::StringW const& __cordl_internal_get__kmsKeyArn() const;

  constexpr ::StringW& __cordl_internal_get__kmsKeyArn();

  constexpr ::StringW const& __cordl_internal_get__lastModified() const;

  constexpr ::StringW& __cordl_internal_get__lastModified();

  constexpr ::Amazon::Lambda::LastUpdateStatus*& __cordl_internal_get__lastUpdateStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LastUpdateStatus*> const& __cordl_internal_get__lastUpdateStatus() const;

  constexpr ::StringW const& __cordl_internal_get__lastUpdateStatusReason() const;

  constexpr ::StringW& __cordl_internal_get__lastUpdateStatusReason();

  constexpr ::Amazon::Lambda::LastUpdateStatusReasonCode*& __cordl_internal_get__lastUpdateStatusReasonCode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LastUpdateStatusReasonCode*> const& __cordl_internal_get__lastUpdateStatusReasonCode() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*& __cordl_internal_get__layers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>*> const& __cordl_internal_get__layers() const;

  constexpr ::StringW const& __cordl_internal_get__masterArn() const;

  constexpr ::StringW& __cordl_internal_get__masterArn();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__memorySize() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__memorySize();

  constexpr ::Amazon::Lambda::PackageType*& __cordl_internal_get__packageType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::PackageType*> const& __cordl_internal_get__packageType() const;

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__role() const;

  constexpr ::StringW& __cordl_internal_get__role();

  constexpr ::Amazon::Lambda::Runtime*& __cordl_internal_get__runtime();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Runtime*> const& __cordl_internal_get__runtime() const;

  constexpr ::StringW const& __cordl_internal_get__signingJobArn() const;

  constexpr ::StringW& __cordl_internal_get__signingJobArn();

  constexpr ::StringW const& __cordl_internal_get__signingProfileVersionArn() const;

  constexpr ::StringW& __cordl_internal_get__signingProfileVersionArn();

  constexpr ::Amazon::Lambda::State*& __cordl_internal_get__state();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::State*> const& __cordl_internal_get__state() const;

  constexpr ::StringW const& __cordl_internal_get__stateReason() const;

  constexpr ::StringW& __cordl_internal_get__stateReason();

  constexpr ::Amazon::Lambda::StateReasonCode*& __cordl_internal_get__stateReasonCode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::StateReasonCode*> const& __cordl_internal_get__stateReasonCode() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__timeout() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__timeout();

  constexpr ::Amazon::Lambda::Model::TracingConfigResponse*& __cordl_internal_get__tracingConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::TracingConfigResponse*> const& __cordl_internal_get__tracingConfig() const;

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr ::Amazon::Lambda::Model::VpcConfigDetail*& __cordl_internal_get__vpcConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::VpcConfigDetail*> const& __cordl_internal_get__vpcConfig() const;

  constexpr void __cordl_internal_set__codeSha256(::StringW value);

  constexpr void __cordl_internal_set__codeSize(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__deadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value);

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__environment(::Amazon::Lambda::Model::EnvironmentResponse* value);

  constexpr void __cordl_internal_set__fileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value);

  constexpr void __cordl_internal_set__functionArn(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__handler(::StringW value);

  constexpr void __cordl_internal_set__imageConfigResponse(::Amazon::Lambda::Model::ImageConfigResponse* value);

  constexpr void __cordl_internal_set__kmsKeyArn(::StringW value);

  constexpr void __cordl_internal_set__lastModified(::StringW value);

  constexpr void __cordl_internal_set__lastUpdateStatus(::Amazon::Lambda::LastUpdateStatus* value);

  constexpr void __cordl_internal_set__lastUpdateStatusReason(::StringW value);

  constexpr void __cordl_internal_set__lastUpdateStatusReasonCode(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  constexpr void __cordl_internal_set__layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* value);

  constexpr void __cordl_internal_set__masterArn(::StringW value);

  constexpr void __cordl_internal_set__memorySize(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__packageType(::Amazon::Lambda::PackageType* value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__role(::StringW value);

  constexpr void __cordl_internal_set__runtime(::Amazon::Lambda::Runtime* value);

  constexpr void __cordl_internal_set__signingJobArn(::StringW value);

  constexpr void __cordl_internal_set__signingProfileVersionArn(::StringW value);

  constexpr void __cordl_internal_set__state(::Amazon::Lambda::State* value);

  constexpr void __cordl_internal_set__stateReason(::StringW value);

  constexpr void __cordl_internal_set__stateReasonCode(::Amazon::Lambda::StateReasonCode* value);

  constexpr void __cordl_internal_set__timeout(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__tracingConfig(::Amazon::Lambda::Model::TracingConfigResponse* value);

  constexpr void __cordl_internal_set__version(::StringW value);

  constexpr void __cordl_internal_set__vpcConfig(::Amazon::Lambda::Model::VpcConfigDetail* value);

  /// @brief Method .ctor, addr 0x2bc6b84, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSha256, addr 0x2bc62f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSha256();

  /// @brief Method get_CodeSize, addr 0x2bc6314, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_CodeSize();

  /// @brief Method get_DeadLetterConfig, addr 0x2bc63fc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DeadLetterConfig* get_DeadLetterConfig();

  /// @brief Method get_Description, addr 0x2bc641c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Environment, addr 0x2bc643c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::EnvironmentResponse* get_Environment();

  /// @brief Method get_FileSystemConfigs, addr 0x2bc645c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* get_FileSystemConfigs();

  /// @brief Method get_FunctionArn, addr 0x2bc64c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionArn();

  /// @brief Method get_FunctionName, addr 0x2bc64e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Handler, addr 0x2bc6500, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Handler();

  /// @brief Method get_ImageConfigResponse, addr 0x2bc6520, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::ImageConfigResponse* get_ImageConfigResponse();

  /// @brief Method get_KMSKeyArn, addr 0x2bc6540, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KMSKeyArn();

  /// @brief Method get_LastModified, addr 0x2bc6560, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastModified();

  /// @brief Method get_LastUpdateStatus, addr 0x2bc6580, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::LastUpdateStatus* get_LastUpdateStatus();

  /// @brief Method get_LastUpdateStatusReason, addr 0x2bc65f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastUpdateStatusReason();

  /// @brief Method get_LastUpdateStatusReasonCode, addr 0x2bc6610, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::LastUpdateStatusReasonCode* get_LastUpdateStatusReasonCode();

  /// @brief Method get_Layers, addr 0x2bc6680, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* get_Layers();

  /// @brief Method get_MasterArn, addr 0x2bc66e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MasterArn();

  /// @brief Method get_MemorySize, addr 0x2bc6704, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MemorySize();

  /// @brief Method get_PackageType, addr 0x2bc67e4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::PackageType* get_PackageType();

  /// @brief Method get_RevisionId, addr 0x2bc6854, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_Role, addr 0x2bc6874, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Role();

  /// @brief Method get_Runtime, addr 0x2bc6894, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Runtime* get_Runtime();

  /// @brief Method get_SigningJobArn, addr 0x2bc6904, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SigningJobArn();

  /// @brief Method get_SigningProfileVersionArn, addr 0x2bc6924, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SigningProfileVersionArn();

  /// @brief Method get_State, addr 0x2bc6944, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::State* get_State();

  /// @brief Method get_StateReason, addr 0x2bc69b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StateReason();

  /// @brief Method get_StateReasonCode, addr 0x2bc69d4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::StateReasonCode* get_StateReasonCode();

  /// @brief Method get_Timeout, addr 0x2bc6a44, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_TracingConfig, addr 0x2bc6b24, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::TracingConfigResponse* get_TracingConfig();

  /// @brief Method get_Version, addr 0x2bc6b44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Version();

  /// @brief Method get_VpcConfig, addr 0x2bc6b64, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::VpcConfigDetail* get_VpcConfig();

  /// @brief Method set_CodeSha256, addr 0x2bc62fc, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSha256(::StringW value);

  /// @brief Method set_CodeSize, addr 0x2bc6350, size 0x70, virtual false, abstract: false, final false
  inline void set_CodeSize(int64_t value);

  /// @brief Method set_DeadLetterConfig, addr 0x2bc6404, size 0x8, virtual false, abstract: false, final false
  inline void set_DeadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value);

  /// @brief Method set_Description, addr 0x2bc6424, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_Environment, addr 0x2bc6444, size 0x8, virtual false, abstract: false, final false
  inline void set_Environment(::Amazon::Lambda::Model::EnvironmentResponse* value);

  /// @brief Method set_FileSystemConfigs, addr 0x2bc6464, size 0x8, virtual false, abstract: false, final false
  inline void set_FileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value);

  /// @brief Method set_FunctionArn, addr 0x2bc64c8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionArn(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bc64e8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Handler, addr 0x2bc6508, size 0x8, virtual false, abstract: false, final false
  inline void set_Handler(::StringW value);

  /// @brief Method set_ImageConfigResponse, addr 0x2bc6528, size 0x8, virtual false, abstract: false, final false
  inline void set_ImageConfigResponse(::Amazon::Lambda::Model::ImageConfigResponse* value);

  /// @brief Method set_KMSKeyArn, addr 0x2bc6548, size 0x8, virtual false, abstract: false, final false
  inline void set_KMSKeyArn(::StringW value);

  /// @brief Method set_LastModified, addr 0x2bc6568, size 0x8, virtual false, abstract: false, final false
  inline void set_LastModified(::StringW value);

  /// @brief Method set_LastUpdateStatus, addr 0x2bc6588, size 0x8, virtual false, abstract: false, final false
  inline void set_LastUpdateStatus(::Amazon::Lambda::LastUpdateStatus* value);

  /// @brief Method set_LastUpdateStatusReason, addr 0x2bc65f8, size 0x8, virtual false, abstract: false, final false
  inline void set_LastUpdateStatusReason(::StringW value);

  /// @brief Method set_LastUpdateStatusReasonCode, addr 0x2bc6618, size 0x8, virtual false, abstract: false, final false
  inline void set_LastUpdateStatusReasonCode(::Amazon::Lambda::LastUpdateStatusReasonCode* value);

  /// @brief Method set_Layers, addr 0x2bc6688, size 0x8, virtual false, abstract: false, final false
  inline void set_Layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* value);

  /// @brief Method set_MasterArn, addr 0x2bc66ec, size 0x8, virtual false, abstract: false, final false
  inline void set_MasterArn(::StringW value);

  /// @brief Method set_MemorySize, addr 0x2bc6740, size 0x68, virtual false, abstract: false, final false
  inline void set_MemorySize(int32_t value);

  /// @brief Method set_PackageType, addr 0x2bc67ec, size 0x8, virtual false, abstract: false, final false
  inline void set_PackageType(::Amazon::Lambda::PackageType* value);

  /// @brief Method set_RevisionId, addr 0x2bc685c, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_Role, addr 0x2bc687c, size 0x8, virtual false, abstract: false, final false
  inline void set_Role(::StringW value);

  /// @brief Method set_Runtime, addr 0x2bc689c, size 0x8, virtual false, abstract: false, final false
  inline void set_Runtime(::Amazon::Lambda::Runtime* value);

  /// @brief Method set_SigningJobArn, addr 0x2bc690c, size 0x8, virtual false, abstract: false, final false
  inline void set_SigningJobArn(::StringW value);

  /// @brief Method set_SigningProfileVersionArn, addr 0x2bc692c, size 0x8, virtual false, abstract: false, final false
  inline void set_SigningProfileVersionArn(::StringW value);

  /// @brief Method set_State, addr 0x2bc694c, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::Amazon::Lambda::State* value);

  /// @brief Method set_StateReason, addr 0x2bc69bc, size 0x8, virtual false, abstract: false, final false
  inline void set_StateReason(::StringW value);

  /// @brief Method set_StateReasonCode, addr 0x2bc69dc, size 0x8, virtual false, abstract: false, final false
  inline void set_StateReasonCode(::Amazon::Lambda::StateReasonCode* value);

  /// @brief Method set_Timeout, addr 0x2bc6a80, size 0x68, virtual false, abstract: false, final false
  inline void set_Timeout(int32_t value);

  /// @brief Method set_TracingConfig, addr 0x2bc6b2c, size 0x8, virtual false, abstract: false, final false
  inline void set_TracingConfig(::Amazon::Lambda::Model::TracingConfigResponse* value);

  /// @brief Method set_Version, addr 0x2bc6b4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Version(::StringW value);

  /// @brief Method set_VpcConfig, addr 0x2bc6b6c, size 0x8, virtual false, abstract: false, final false
  inline void set_VpcConfig(::Amazon::Lambda::Model::VpcConfigDetail* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateFunctionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateFunctionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateFunctionResponse(CreateFunctionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateFunctionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateFunctionResponse(CreateFunctionResponse const&) = delete;

  /// @brief Field _codeSha256, offset: 0x28, size: 0x8, def value: None
  ::StringW ____codeSha256;

  /// @brief Field _codeSize, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____codeSize;

  /// @brief Field _deadLetterConfig, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DeadLetterConfig* ____deadLetterConfig;

  /// @brief Field _description, offset: 0x48, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _environment, offset: 0x50, size: 0x8, def value: None
  ::Amazon::Lambda::Model::EnvironmentResponse* ____environment;

  /// @brief Field _fileSystemConfigs, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* ____fileSystemConfigs;

  /// @brief Field _functionArn, offset: 0x60, size: 0x8, def value: None
  ::StringW ____functionArn;

  /// @brief Field _functionName, offset: 0x68, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _handler, offset: 0x70, size: 0x8, def value: None
  ::StringW ____handler;

  /// @brief Field _imageConfigResponse, offset: 0x78, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ImageConfigResponse* ____imageConfigResponse;

  /// @brief Field _kmsKeyArn, offset: 0x80, size: 0x8, def value: None
  ::StringW ____kmsKeyArn;

  /// @brief Field _lastModified, offset: 0x88, size: 0x8, def value: None
  ::StringW ____lastModified;

  /// @brief Field _lastUpdateStatus, offset: 0x90, size: 0x8, def value: None
  ::Amazon::Lambda::LastUpdateStatus* ____lastUpdateStatus;

  /// @brief Field _lastUpdateStatusReason, offset: 0x98, size: 0x8, def value: None
  ::StringW ____lastUpdateStatusReason;

  /// @brief Field _lastUpdateStatusReasonCode, offset: 0xa0, size: 0x8, def value: None
  ::Amazon::Lambda::LastUpdateStatusReasonCode* ____lastUpdateStatusReasonCode;

  /// @brief Field _layers, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::Layer*>* ____layers;

  /// @brief Field _masterArn, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____masterArn;

  /// @brief Field _memorySize, offset: 0xb8, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____memorySize;

  /// @brief Field _packageType, offset: 0xc0, size: 0x8, def value: None
  ::Amazon::Lambda::PackageType* ____packageType;

  /// @brief Field _revisionId, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _role, offset: 0xd0, size: 0x8, def value: None
  ::StringW ____role;

  /// @brief Field _runtime, offset: 0xd8, size: 0x8, def value: None
  ::Amazon::Lambda::Runtime* ____runtime;

  /// @brief Field _signingJobArn, offset: 0xe0, size: 0x8, def value: None
  ::StringW ____signingJobArn;

  /// @brief Field _signingProfileVersionArn, offset: 0xe8, size: 0x8, def value: None
  ::StringW ____signingProfileVersionArn;

  /// @brief Field _state, offset: 0xf0, size: 0x8, def value: None
  ::Amazon::Lambda::State* ____state;

  /// @brief Field _stateReason, offset: 0xf8, size: 0x8, def value: None
  ::StringW ____stateReason;

  /// @brief Field _stateReasonCode, offset: 0x100, size: 0x8, def value: None
  ::Amazon::Lambda::StateReasonCode* ____stateReasonCode;

  /// @brief Field _timeout, offset: 0x108, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____timeout;

  /// @brief Field _tracingConfig, offset: 0x110, size: 0x8, def value: None
  ::Amazon::Lambda::Model::TracingConfigResponse* ____tracingConfig;

  /// @brief Field _version, offset: 0x118, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field _vpcConfig, offset: 0x120, size: 0x8, def value: None
  ::Amazon::Lambda::Model::VpcConfigDetail* ____vpcConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::CreateFunctionResponse, 0x128>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____codeSha256) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____codeSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____deadLetterConfig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____description) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____environment) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____fileSystemConfigs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____functionArn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____functionName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____handler) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____imageConfigResponse) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____kmsKeyArn) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____lastModified) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____lastUpdateStatus) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____lastUpdateStatusReason) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____lastUpdateStatusReasonCode) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____layers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____masterArn) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____memorySize) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____packageType) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____revisionId) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____role) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____runtime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____signingJobArn) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____signingProfileVersionArn) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____state) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____stateReason) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____stateReasonCode) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____timeout) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____tracingConfig) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____version) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionResponse, ____vpcConfig) == 0x120, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::CreateFunctionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::CreateFunctionResponse*, "Amazon.Lambda.Model", "CreateFunctionResponse");
