#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateFunctionRequest)
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
class FunctionCode;
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
class PackageType;
}
namespace Amazon::Lambda {
class Runtime;
}
namespace Amazon::Runtime {
class StreamTransferProgressArgs;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class CreateFunctionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::CreateFunctionRequest);
// Type: Amazon.Lambda.Model::CreateFunctionRequest
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::CreateFunctionRequest*
class CORDL_TYPE CreateFunctionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Code, put = set_Code))::Amazon::Lambda::Model::FunctionCode* Code;

  __declspec(property(get = get_CodeSigningConfigArn, put = set_CodeSigningConfigArn))::StringW CodeSigningConfigArn;

  __declspec(property(get = get_DeadLetterConfig, put = set_DeadLetterConfig))::Amazon::Lambda::Model::DeadLetterConfig* DeadLetterConfig;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_Environment, put = set_Environment))::Amazon::Lambda::Model::Environment* Environment;

  __declspec(property(get = get_FileSystemConfigs, put = set_FileSystemConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* FileSystemConfigs;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Handler, put = set_Handler))::StringW Handler;

  __declspec(property(get = get_ImageConfig, put = set_ImageConfig))::Amazon::Lambda::Model::ImageConfig* ImageConfig;

  __declspec(property(get = get_KMSKeyArn, put = set_KMSKeyArn))::StringW KMSKeyArn;

  __declspec(property(get = get_Layers, put = set_Layers))::System::Collections::Generic::List_1<::StringW>* Layers;

  __declspec(property(get = get_MemorySize, put = set_MemorySize)) int32_t MemorySize;

  __declspec(property(get = get_PackageType, put = set_PackageType))::Amazon::Lambda::PackageType* PackageType;

  __declspec(property(get = get_Publish, put = set_Publish)) bool Publish;

  __declspec(property(get = get_Role, put = set_Role))::StringW Role;

  __declspec(property(get = get_Runtime, put = set_Runtime))::Amazon::Lambda::Runtime* Runtime;

  __declspec(property(get = get_StreamTransferProgress, put = set_StreamTransferProgress))::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* StreamTransferProgress;

  __declspec(property(get = get_Tags, put = set_Tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Tags;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_TracingConfig, put = set_TracingConfig))::Amazon::Lambda::Model::TracingConfig* TracingConfig;

  __declspec(property(get = get_VpcConfig, put = set_VpcConfig))::Amazon::Lambda::Model::VpcConfig* VpcConfig;

  /// @brief Field _code, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code))::Amazon::Lambda::Model::FunctionCode* _code;

  /// @brief Field _codeSigningConfigArn, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigArn, put = __cordl_internal_set__codeSigningConfigArn))::StringW _codeSigningConfigArn;

  /// @brief Field _deadLetterConfig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__deadLetterConfig, put = __cordl_internal_set__deadLetterConfig))::Amazon::Lambda::Model::DeadLetterConfig* _deadLetterConfig;

  /// @brief Field _description, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _environment, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__environment, put = __cordl_internal_set__environment))::Amazon::Lambda::Model::Environment* _environment;

  /// @brief Field _fileSystemConfigs, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__fileSystemConfigs,
                      put = __cordl_internal_set__fileSystemConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* _fileSystemConfigs;

  /// @brief Field _functionName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _handler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::StringW _handler;

  /// @brief Field _imageConfig, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__imageConfig, put = __cordl_internal_set__imageConfig))::Amazon::Lambda::Model::ImageConfig* _imageConfig;

  /// @brief Field _kmsKeyArn, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__kmsKeyArn, put = __cordl_internal_set__kmsKeyArn))::StringW _kmsKeyArn;

  /// @brief Field _layers, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__layers, put = __cordl_internal_set__layers))::System::Collections::Generic::List_1<::StringW>* _layers;

  /// @brief Field _memorySize, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__memorySize, put = __cordl_internal_set__memorySize))::System::Nullable_1<int32_t> _memorySize;

  /// @brief Field _packageType, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__packageType, put = __cordl_internal_set__packageType))::Amazon::Lambda::PackageType* _packageType;

  /// @brief Field _publish, offset 0xa0, size 0x2
  __declspec(property(get = __cordl_internal_get__publish, put = __cordl_internal_set__publish))::System::Nullable_1<bool> _publish;

  /// @brief Field _role, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__role, put = __cordl_internal_set__role))::StringW _role;

  /// @brief Field _runtime, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__runtime, put = __cordl_internal_set__runtime))::Amazon::Lambda::Runtime* _runtime;

  /// @brief Field _tags, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _tags;

  /// @brief Field _timeout, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__timeout, put = __cordl_internal_set__timeout))::System::Nullable_1<int32_t> _timeout;

  /// @brief Field _tracingConfig, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__tracingConfig, put = __cordl_internal_set__tracingConfig))::Amazon::Lambda::Model::TracingConfig* _tracingConfig;

  /// @brief Field _vpcConfig, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__vpcConfig, put = __cordl_internal_set__vpcConfig))::Amazon::Lambda::Model::VpcConfig* _vpcConfig;

  /// @brief Method IsSetCode, addr 0x2bc2e38, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCode();

  /// @brief Method IsSetCodeSigningConfigArn, addr 0x2bc2e58, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigArn();

  /// @brief Method IsSetDeadLetterConfig, addr 0x2bc2e78, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDeadLetterConfig();

  /// @brief Method IsSetDescription, addr 0x2bc2e98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetEnvironment, addr 0x2bc2eb8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEnvironment();

  /// @brief Method IsSetFileSystemConfigs, addr 0x2bc2ed8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFileSystemConfigs();

  /// @brief Method IsSetFunctionName, addr 0x2bc2f3c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetHandler, addr 0x2bc2f5c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetHandler();

  /// @brief Method IsSetImageConfig, addr 0x2bc2f7c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetImageConfig();

  /// @brief Method IsSetKMSKeyArn, addr 0x2bc2f9c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKMSKeyArn();

  /// @brief Method IsSetLayers, addr 0x2bc2fbc, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLayers();

  /// @brief Method IsSetMemorySize, addr 0x2bc30b4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMemorySize();

  /// @brief Method IsSetPackageType, addr 0x2bc3100, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetPackageType();

  /// @brief Method IsSetPublish, addr 0x2bc3204, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetPublish();

  /// @brief Method IsSetRole, addr 0x2bc3250, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRole();

  /// @brief Method IsSetRuntime, addr 0x2bc3270, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetRuntime();

  /// @brief Method IsSetTags, addr 0x2bc32e0, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetTags();

  /// @brief Method IsSetTimeout, addr 0x2bc33dc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTimeout();

  /// @brief Method IsSetTracingConfig, addr 0x2bc3428, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTracingConfig();

  /// @brief Method IsSetVpcConfig, addr 0x2bc3448, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetVpcConfig();

  static inline ::Amazon::Lambda::Model::CreateFunctionRequest* New_ctor();

  constexpr ::Amazon::Lambda::Model::FunctionCode*& __cordl_internal_get__code();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::FunctionCode*> const& __cordl_internal_get__code() const;

  constexpr ::StringW const& __cordl_internal_get__codeSigningConfigArn() const;

  constexpr ::StringW& __cordl_internal_get__codeSigningConfigArn();

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

  constexpr ::Amazon::Lambda::PackageType*& __cordl_internal_get__packageType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::PackageType*> const& __cordl_internal_get__packageType() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__publish() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__publish();

  constexpr ::StringW const& __cordl_internal_get__role() const;

  constexpr ::StringW& __cordl_internal_get__role();

  constexpr ::Amazon::Lambda::Runtime*& __cordl_internal_get__runtime();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Runtime*> const& __cordl_internal_get__runtime() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__tags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__tags() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__timeout() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__timeout();

  constexpr ::Amazon::Lambda::Model::TracingConfig*& __cordl_internal_get__tracingConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::TracingConfig*> const& __cordl_internal_get__tracingConfig() const;

  constexpr ::Amazon::Lambda::Model::VpcConfig*& __cordl_internal_get__vpcConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::VpcConfig*> const& __cordl_internal_get__vpcConfig() const;

  constexpr void __cordl_internal_set__code(::Amazon::Lambda::Model::FunctionCode* value);

  constexpr void __cordl_internal_set__codeSigningConfigArn(::StringW value);

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

  constexpr void __cordl_internal_set__packageType(::Amazon::Lambda::PackageType* value);

  constexpr void __cordl_internal_set__publish(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__role(::StringW value);

  constexpr void __cordl_internal_set__runtime(::Amazon::Lambda::Runtime* value);

  constexpr void __cordl_internal_set__tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__timeout(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__tracingConfig(::Amazon::Lambda::Model::TracingConfig* value);

  constexpr void __cordl_internal_set__vpcConfig(::Amazon::Lambda::Model::VpcConfig* value);

  /// @brief Method .ctor, addr 0x2bc3458, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Code, addr 0x2bc2e28, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::FunctionCode* get_Code();

  /// @brief Method get_CodeSigningConfigArn, addr 0x2bc2e48, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSigningConfigArn();

  /// @brief Method get_DeadLetterConfig, addr 0x2bc2e68, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DeadLetterConfig* get_DeadLetterConfig();

  /// @brief Method get_Description, addr 0x2bc2e88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Environment, addr 0x2bc2ea8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::Environment* get_Environment();

  /// @brief Method get_FileSystemConfigs, addr 0x2bc2ec8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* get_FileSystemConfigs();

  /// @brief Method get_FunctionName, addr 0x2bc2f2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Handler, addr 0x2bc2f4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Handler();

  /// @brief Method get_ImageConfig, addr 0x2bc2f6c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::ImageConfig* get_ImageConfig();

  /// @brief Method get_KMSKeyArn, addr 0x2bc2f8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KMSKeyArn();

  /// @brief Method get_Layers, addr 0x2bc2fac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Layers();

  /// @brief Method get_MemorySize, addr 0x2bc3010, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MemorySize();

  /// @brief Method get_PackageType, addr 0x2bc30f0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::PackageType* get_PackageType();

  /// @brief Method get_Publish, addr 0x2bc3160, size 0x3c, virtual false, abstract: false, final false
  inline bool get_Publish();

  /// @brief Method get_Role, addr 0x2bc3240, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Role();

  /// @brief Method get_Runtime, addr 0x2bc3260, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Runtime* get_Runtime();

  /// @brief Method get_StreamTransferProgress, addr 0x2bc2cec, size 0x94, virtual false, abstract: false, final false
  inline ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* get_StreamTransferProgress();

  /// @brief Method get_Tags, addr 0x2bc32d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Tags();

  /// @brief Method get_Timeout, addr 0x2bc3338, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_TracingConfig, addr 0x2bc3418, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::TracingConfig* get_TracingConfig();

  /// @brief Method get_VpcConfig, addr 0x2bc3438, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::VpcConfig* get_VpcConfig();

  /// @brief Method set_Code, addr 0x2bc2e30, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::Amazon::Lambda::Model::FunctionCode* value);

  /// @brief Method set_CodeSigningConfigArn, addr 0x2bc2e50, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigArn(::StringW value);

  /// @brief Method set_DeadLetterConfig, addr 0x2bc2e70, size 0x8, virtual false, abstract: false, final false
  inline void set_DeadLetterConfig(::Amazon::Lambda::Model::DeadLetterConfig* value);

  /// @brief Method set_Description, addr 0x2bc2e90, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_Environment, addr 0x2bc2eb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Environment(::Amazon::Lambda::Model::Environment* value);

  /// @brief Method set_FileSystemConfigs, addr 0x2bc2ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_FileSystemConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* value);

  /// @brief Method set_FunctionName, addr 0x2bc2f34, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Handler, addr 0x2bc2f54, size 0x8, virtual false, abstract: false, final false
  inline void set_Handler(::StringW value);

  /// @brief Method set_ImageConfig, addr 0x2bc2f74, size 0x8, virtual false, abstract: false, final false
  inline void set_ImageConfig(::Amazon::Lambda::Model::ImageConfig* value);

  /// @brief Method set_KMSKeyArn, addr 0x2bc2f94, size 0x8, virtual false, abstract: false, final false
  inline void set_KMSKeyArn(::StringW value);

  /// @brief Method set_Layers, addr 0x2bc2fb4, size 0x8, virtual false, abstract: false, final false
  inline void set_Layers(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_MemorySize, addr 0x2bc304c, size 0x68, virtual false, abstract: false, final false
  inline void set_MemorySize(int32_t value);

  /// @brief Method set_PackageType, addr 0x2bc30f8, size 0x8, virtual false, abstract: false, final false
  inline void set_PackageType(::Amazon::Lambda::PackageType* value);

  /// @brief Method set_Publish, addr 0x2bc319c, size 0x68, virtual false, abstract: false, final false
  inline void set_Publish(bool value);

  /// @brief Method set_Role, addr 0x2bc3248, size 0x8, virtual false, abstract: false, final false
  inline void set_Role(::StringW value);

  /// @brief Method set_Runtime, addr 0x2bc3268, size 0x8, virtual false, abstract: false, final false
  inline void set_Runtime(::Amazon::Lambda::Runtime* value);

  /// @brief Method set_StreamTransferProgress, addr 0x2bc2d80, size 0xa8, virtual false, abstract: false, final false
  inline void set_StreamTransferProgress(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value);

  /// @brief Method set_Tags, addr 0x2bc32d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Timeout, addr 0x2bc3374, size 0x68, virtual false, abstract: false, final false
  inline void set_Timeout(int32_t value);

  /// @brief Method set_TracingConfig, addr 0x2bc3420, size 0x8, virtual false, abstract: false, final false
  inline void set_TracingConfig(::Amazon::Lambda::Model::TracingConfig* value);

  /// @brief Method set_VpcConfig, addr 0x2bc3440, size 0x8, virtual false, abstract: false, final false
  inline void set_VpcConfig(::Amazon::Lambda::Model::VpcConfig* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateFunctionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateFunctionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateFunctionRequest(CreateFunctionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateFunctionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateFunctionRequest(CreateFunctionRequest const&) = delete;

  /// @brief Field _code, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::Model::FunctionCode* ____code;

  /// @brief Field _codeSigningConfigArn, offset: 0x40, size: 0x8, def value: None
  ::StringW ____codeSigningConfigArn;

  /// @brief Field _deadLetterConfig, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DeadLetterConfig* ____deadLetterConfig;

  /// @brief Field _description, offset: 0x50, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _environment, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Lambda::Model::Environment* ____environment;

  /// @brief Field _fileSystemConfigs, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FileSystemConfig*>* ____fileSystemConfigs;

  /// @brief Field _functionName, offset: 0x68, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _handler, offset: 0x70, size: 0x8, def value: None
  ::StringW ____handler;

  /// @brief Field _imageConfig, offset: 0x78, size: 0x8, def value: None
  ::Amazon::Lambda::Model::ImageConfig* ____imageConfig;

  /// @brief Field _kmsKeyArn, offset: 0x80, size: 0x8, def value: None
  ::StringW ____kmsKeyArn;

  /// @brief Field _layers, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____layers;

  /// @brief Field _memorySize, offset: 0x90, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____memorySize;

  /// @brief Field _packageType, offset: 0x98, size: 0x8, def value: None
  ::Amazon::Lambda::PackageType* ____packageType;

  /// @brief Field _publish, offset: 0xa0, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____publish;

  /// @brief Field _role, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____role;

  /// @brief Field _runtime, offset: 0xb0, size: 0x8, def value: None
  ::Amazon::Lambda::Runtime* ____runtime;

  /// @brief Field _tags, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____tags;

  /// @brief Field _timeout, offset: 0xc0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____timeout;

  /// @brief Field _tracingConfig, offset: 0xc8, size: 0x8, def value: None
  ::Amazon::Lambda::Model::TracingConfig* ____tracingConfig;

  /// @brief Field _vpcConfig, offset: 0xd0, size: 0x8, def value: None
  ::Amazon::Lambda::Model::VpcConfig* ____vpcConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::CreateFunctionRequest, 0xd8>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____code) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____codeSigningConfigArn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____deadLetterConfig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____description) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____environment) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____fileSystemConfigs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____functionName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____handler) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____imageConfig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____kmsKeyArn) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____layers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____memorySize) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____packageType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____publish) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____role) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____runtime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____tags) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____timeout) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____tracingConfig) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateFunctionRequest, ____vpcConfig) == 0xd0, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::CreateFunctionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::CreateFunctionRequest*, "Amazon.Lambda.Model", "CreateFunctionRequest");
