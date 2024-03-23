#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateFunctionConfigurationRequest)
namespace Amazon::Lambda::Model {
class DeadLetterConfig;
}
namespace Amazon::Lambda::Model {
class Environment;
}
namespace Amazon::Lambda::Model {
class FileSystemConfig;
}
namespace Amazon::Lambda::Model {
class ImageConfig;
}
namespace Amazon::Lambda::Model {
class TracingConfig;
}
namespace Amazon::Lambda::Model {
class VpcConfig;
}
namespace Amazon::Lambda {
class Runtime;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UpdateFunctionConfigurationRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest);
// Type: Amazon.Lambda.Model::UpdateFunctionConfigurationRequest
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UpdateFunctionConfigurationRequest*
class CORDL_TYPE UpdateFunctionConfigurationRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_DeadLetterConfig, put = set_DeadLetterConfig))::Amazon::Lambda::Model::DeadLetterConfig* DeadLetterConfig;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_Environment, put = set_Environment))::Amazon::Lambda::Model::Environment* Environment;

  __declspec(property(get = get_FileSystemConfigs, put = set_FileSystemConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* FileSystemConfigs;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Handler, put = set_Handler))::StringW Handler;

  __declspec(property(get = get_ImageConfig, put = set_ImageConfig))::Amazon::Lambda::Model::ImageConfig* ImageConfig;

  __declspec(property(get = get_IsLayersSet, put = set_IsLayersSet)) bool IsLayersSet;

  __declspec(property(get = get_KMSKeyArn, put = set_KMSKeyArn))::StringW KMSKeyArn;

  __declspec(property(get = get_Layers, put = set_Layers))::System::Collections::Generic::List_1<::StringW>* Layers;

  __declspec(property(get = get_MemorySize, put = set_MemorySize)) int32_t MemorySize;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_Role, put = set_Role))::StringW Role;

  __declspec(property(get = get_Runtime, put = set_Runtime))::Amazon::Lambda::Runtime* Runtime;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_TracingConfig, put = set_TracingConfig))::Amazon::Lambda::Model::TracingConfig* TracingConfig;

  __declspec(property(get = get_VpcConfig, put = set_VpcConfig))::Amazon::Lambda::Model::VpcConfig* VpcConfig;

  /// @brief Field _deadLetterConfig, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__deadLetterConfig, put = __cordl_internal_set__deadLetterConfig))::Amazon::Lambda::Model::DeadLetterConfig* _deadLetterConfig;

  /// @brief Field _description, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _environment, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__environment, put = __cordl_internal_set__environment))::Amazon::Lambda::Model::Environment* _environment;

  /// @brief Field _fileSystemConfigs, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__fileSystemConfigs,
                      put = __cordl_internal_set__fileSystemConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* _fileSystemConfigs;

  /// @brief Field _functionName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _handler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::StringW _handler;

  /// @brief Field _imageConfig, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__imageConfig, put = __cordl_internal_set__imageConfig))::Amazon::Lambda::Model::ImageConfig* _imageConfig;

  /// @brief Field _kmsKeyArn, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__kmsKeyArn, put = __cordl_internal_set__kmsKeyArn))::StringW _kmsKeyArn;

  /// @brief Field _layers, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__layers, put = __cordl_internal_set__layers))::System::Collections::Generic::List_1<::StringW>* _layers;

  /// @brief Field _memorySize, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__memorySize, put = __cordl_internal_set__memorySize))::System::Nullable_1<int32_t> _memorySize;

  /// @brief Field _revisionId, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _role, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__role, put = __cordl_internal_set__role))::StringW _role;

  /// @brief Field _runtime, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__runtime, put = __cordl_internal_set__runtime))::Amazon::Lambda::Runtime* _runtime;

  /// @brief Field _timeout, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__timeout, put = __cordl_internal_set__timeout))::System::Nullable_1<int32_t> _timeout;

  /// @brief Field _tracingConfig, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__tracingConfig, put = __cordl_internal_set__tracingConfig))::Amazon::Lambda::Model::TracingConfig* _tracingConfig;

  /// @brief Field _vpcConfig, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__vpcConfig, put = __cordl_internal_set__vpcConfig))::Amazon::Lambda::Model::VpcConfig* _vpcConfig;

  /// @brief Method IsSetDeadLetterConfig, addr 0x310b9d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDeadLetterConfig();

  /// @brief Method IsSetDescription, addr 0x310b9f8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetEnvironment, addr 0x310ba18, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEnvironment();

  /// @brief Method IsSetFileSystemConfigs, addr 0x310ba38, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFileSystemConfigs();

  /// @brief Method IsSetFunctionName, addr 0x310ba9c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetHandler, addr 0x310babc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetHandler();

  /// @brief Method IsSetImageConfig, addr 0x310badc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetImageConfig();

  /// @brief Method IsSetKMSKeyArn, addr 0x310bafc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKMSKeyArn();

  /// @brief Method IsSetLayers, addr 0x310bc0c, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetLayers();

  /// @brief Method IsSetMemorySize, addr 0x310bcb4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMemorySize();

  /// @brief Method IsSetRevisionId, addr 0x310bd00, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetRole, addr 0x310bd20, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRole();

  /// @brief Method IsSetRuntime, addr 0x310bd40, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetRuntime();

  /// @brief Method IsSetTimeout, addr 0x310be44, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTimeout();

  /// @brief Method IsSetTracingConfig, addr 0x310be90, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTracingConfig();

  /// @brief Method IsSetVpcConfig, addr 0x310beb0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetVpcConfig();

  static inline ::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest* New_ctor();

  constexpr ::Amazon::Lambda::Model::DeadLetterConfig*& __cordl_internal_get__deadLetterConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DeadLetterConfig*> const& __cordl_internal_get__deadLetterConfig() const;

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::Amazon::Lambda::Model::Environment*& __cordl_internal_get__environment();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::Environment*> const& __cordl_internal_get__environment() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*& __cordl_internal_get__fileSystemConfigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>*> const& __cordl_internal_get__fileSystemConfigs() const;

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__handler() const;

  constexpr ::StringW& __cordl_internal_get__handler();

  constexpr ::Amazon::Lambda::Model::ImageConfig*& __cordl_internal_get__imageConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ImageConfig*> const& __cordl_internal_get__imageConfig() const;

  constexpr ::StringW const& __cordl_internal_get__kmsKeyArn() const;

  constexpr ::StringW& __cordl_internal_get__kmsKeyArn();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__layers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__layers() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__memorySize() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__memorySize();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__role() const;

  constexpr ::StringW& __cordl_internal_get__role();

  constexpr ::Amazon::Lambda::Runtime*& __cordl_internal_get__runtime();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Runtime*> const& __cordl_internal_get__runtime() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__timeout() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__timeout();

  constexpr ::Amazon::Lambda::Model::TracingConfig*& __cordl_internal_get__tracingConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::TracingConfig*> const& __cordl_internal_get__tracingConfig() const;

  constexpr ::Amazon::Lambda::Model::VpcConfig*& __cordl_internal_get__vpcConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::VpcConfig*> const& __cordl_internal_get__vpcConfig() const;

  constexpr void __cordl_internal_set__deadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value);

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__environment(::Amazon::Lambda::Model::Environment* value);

  constexpr void __cordl_internal_set__fileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__handler(::StringW value);

  constexpr void __cordl_internal_set__imageConfig(::Amazon::Lambda::Model::ImageConfig* value);

  constexpr void __cordl_internal_set__kmsKeyArn(::StringW value);

  constexpr void __cordl_internal_set__layers(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__memorySize(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__role(::StringW value);

  constexpr void __cordl_internal_set__runtime(::Amazon::Lambda::Runtime* value);

  constexpr void __cordl_internal_set__timeout(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__tracingConfig(::Amazon::Lambda::Model::TracingConfig* value);

  constexpr void __cordl_internal_set__vpcConfig(::Amazon::Lambda::Model::VpcConfig* value);

  /// @brief Method .ctor, addr 0x310bec0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DeadLetterConfig, addr 0x310b9c8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DeadLetterConfig* get_DeadLetterConfig();

  /// @brief Method get_Description, addr 0x310b9e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Environment, addr 0x310ba08, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::Environment* get_Environment();

  /// @brief Method get_FileSystemConfigs, addr 0x310ba28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* get_FileSystemConfigs();

  /// @brief Method get_FunctionName, addr 0x310ba8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Handler, addr 0x310baac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Handler();

  /// @brief Method get_ImageConfig, addr 0x310bacc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::ImageConfig* get_ImageConfig();

  /// @brief Method get_IsLayersSet, addr 0x310bb1c, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsLayersSet();

  /// @brief Method get_KMSKeyArn, addr 0x310baec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KMSKeyArn();

  /// @brief Method get_Layers, addr 0x310bb0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Layers();

  /// @brief Method get_MemorySize, addr 0x310bc10, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MemorySize();

  /// @brief Method get_RevisionId, addr 0x310bcf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_Role, addr 0x310bd10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Role();

  /// @brief Method get_Runtime, addr 0x310bd30, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Runtime* get_Runtime();

  /// @brief Method get_Timeout, addr 0x310bda0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_TracingConfig, addr 0x310be80, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::TracingConfig* get_TracingConfig();

  /// @brief Method get_VpcConfig, addr 0x310bea0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::VpcConfig* get_VpcConfig();

  /// @brief Method set_DeadLetterConfig, addr 0x310b9d0, size 0x8, virtual false, abstract: false, final false
  inline void set_DeadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value);

  /// @brief Method set_Description, addr 0x310b9f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_Environment, addr 0x310ba10, size 0x8, virtual false, abstract: false, final false
  inline void set_Environment(::Amazon::Lambda::Model::Environment* value);

  /// @brief Method set_FileSystemConfigs, addr 0x310ba30, size 0x8, virtual false, abstract: false, final false
  inline void set_FileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value);

  /// @brief Method set_FunctionName, addr 0x310ba94, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Handler, addr 0x310bab4, size 0x8, virtual false, abstract: false, final false
  inline void set_Handler(::StringW value);

  /// @brief Method set_ImageConfig, addr 0x310bad4, size 0x8, virtual false, abstract: false, final false
  inline void set_ImageConfig(::Amazon::Lambda::Model::ImageConfig* value);

  /// @brief Method set_IsLayersSet, addr 0x310bb8c, size 0x80, virtual false, abstract: false, final false
  inline void set_IsLayersSet(bool value);

  /// @brief Method set_KMSKeyArn, addr 0x310baf4, size 0x8, virtual false, abstract: false, final false
  inline void set_KMSKeyArn(::StringW value);

  /// @brief Method set_Layers, addr 0x310bb14, size 0x8, virtual false, abstract: false, final false
  inline void set_Layers(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_MemorySize, addr 0x310bc4c, size 0x68, virtual false, abstract: false, final false
  inline void set_MemorySize(int32_t value);

  /// @brief Method set_RevisionId, addr 0x310bcf8, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_Role, addr 0x310bd18, size 0x8, virtual false, abstract: false, final false
  inline void set_Role(::StringW value);

  /// @brief Method set_Runtime, addr 0x310bd38, size 0x8, virtual false, abstract: false, final false
  inline void set_Runtime(::Amazon::Lambda::Runtime* value);

  /// @brief Method set_Timeout, addr 0x310bddc, size 0x68, virtual false, abstract: false, final false
  inline void set_Timeout(int32_t value);

  /// @brief Method set_TracingConfig, addr 0x310be88, size 0x8, virtual false, abstract: false, final false
  inline void set_TracingConfig(::Amazon::Lambda::Model::TracingConfig* value);

  /// @brief Method set_VpcConfig, addr 0x310bea8, size 0x8, virtual false, abstract: false, final false
  inline void set_VpcConfig(::Amazon::Lambda::Model::VpcConfig* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateFunctionConfigurationRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionConfigurationRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateFunctionConfigurationRequest(UpdateFunctionConfigurationRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionConfigurationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateFunctionConfigurationRequest(UpdateFunctionConfigurationRequest const&) = delete;

  /// @brief Field _deadLetterConfig, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DeadLetterConfig* ____deadLetterConfig;

  /// @brief Field _description, offset: 0x40, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _environment, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Lambda::Model::Environment* ____environment;

  /// @brief Field _fileSystemConfigs, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* ____fileSystemConfigs;

  /// @brief Field _functionName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _handler, offset: 0x60, size: 0x8, def value: None
  ::StringW ____handler;

  /// @brief Field _imageConfig, offset: 0x68, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ImageConfig* ____imageConfig;

  /// @brief Field _kmsKeyArn, offset: 0x70, size: 0x8, def value: None
  ::StringW ____kmsKeyArn;

  /// @brief Field _layers, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____layers;

  /// @brief Field _memorySize, offset: 0x80, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____memorySize;

  /// @brief Field _revisionId, offset: 0x88, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _role, offset: 0x90, size: 0x8, def value: None
  ::StringW ____role;

  /// @brief Field _runtime, offset: 0x98, size: 0x8, def value: None
  ::Amazon::Lambda::Runtime* ____runtime;

  /// @brief Field _timeout, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____timeout;

  /// @brief Field _tracingConfig, offset: 0xa8, size: 0x8, def value: None
  ::Amazon::Lambda::Model::TracingConfig* ____tracingConfig;

  /// @brief Field _vpcConfig, offset: 0xb0, size: 0x8, def value: None
  ::Amazon::Lambda::Model::VpcConfig* ____vpcConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, 0xb8>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____deadLetterConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____environment) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____fileSystemConfigs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____functionName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____handler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____imageConfig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____kmsKeyArn) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____layers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____memorySize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____revisionId) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____role) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____runtime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____timeout) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____tracingConfig) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest, ____vpcConfig) == 0xb0, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UpdateFunctionConfigurationRequest*, "Amazon.Lambda.Model", "UpdateFunctionConfigurationRequest");
