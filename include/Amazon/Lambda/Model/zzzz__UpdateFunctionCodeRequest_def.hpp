#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateFunctionCodeRequest)
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UpdateFunctionCodeRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UpdateFunctionCodeRequest);
// Type: Amazon.Lambda.Model::UpdateFunctionCodeRequest
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UpdateFunctionCodeRequest*
class CORDL_TYPE UpdateFunctionCodeRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_DryRun, put = set_DryRun)) bool DryRun;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_ImageUri, put = set_ImageUri))::StringW ImageUri;

  __declspec(property(get = get_Publish, put = set_Publish)) bool Publish;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_S3Bucket, put = set_S3Bucket))::StringW S3Bucket;

  __declspec(property(get = get_S3Key, put = set_S3Key))::StringW S3Key;

  __declspec(property(get = get_S3ObjectVersion, put = set_S3ObjectVersion))::StringW S3ObjectVersion;

  __declspec(property(get = get_ZipFile, put = set_ZipFile))::System::IO::MemoryStream* ZipFile;

  /// @brief Field _dryRun, offset 0x31, size 0x2
  __declspec(property(get = __cordl_internal_get__dryRun, put = __cordl_internal_set__dryRun))::System::Nullable_1<bool> _dryRun;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _imageUri, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__imageUri, put = __cordl_internal_set__imageUri))::StringW _imageUri;

  /// @brief Field _publish, offset 0x48, size 0x2
  __declspec(property(get = __cordl_internal_get__publish, put = __cordl_internal_set__publish))::System::Nullable_1<bool> _publish;

  /// @brief Field _revisionId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _s3Bucket, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Bucket, put = __cordl_internal_set__s3Bucket))::StringW _s3Bucket;

  /// @brief Field _s3Key, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Key, put = __cordl_internal_set__s3Key))::StringW _s3Key;

  /// @brief Field _s3ObjectVersion, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__s3ObjectVersion, put = __cordl_internal_set__s3ObjectVersion))::StringW _s3ObjectVersion;

  /// @brief Field _zipFile, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__zipFile, put = __cordl_internal_set__zipFile))::System::IO::MemoryStream* _zipFile;

  /// @brief Method IsSetDryRun, addr 0x310ae74, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetDryRun();

  /// @brief Method IsSetFunctionName, addr 0x310aec0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetImageUri, addr 0x310aee0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetImageUri();

  /// @brief Method IsSetPublish, addr 0x310af94, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetPublish();

  /// @brief Method IsSetRevisionId, addr 0x310afe0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetS3Bucket, addr 0x310b000, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Bucket();

  /// @brief Method IsSetS3Key, addr 0x310b020, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Key();

  /// @brief Method IsSetS3ObjectVersion, addr 0x310b040, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3ObjectVersion();

  /// @brief Method IsSetZipFile, addr 0x310b060, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetZipFile();

  static inline ::Amazon::Lambda::Model::UpdateFunctionCodeRequest* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__dryRun() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__dryRun();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__imageUri() const;

  constexpr ::StringW& __cordl_internal_get__imageUri();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__publish() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__publish();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__s3Bucket() const;

  constexpr ::StringW& __cordl_internal_get__s3Bucket();

  constexpr ::StringW const& __cordl_internal_get__s3Key() const;

  constexpr ::StringW& __cordl_internal_get__s3Key();

  constexpr ::StringW const& __cordl_internal_get__s3ObjectVersion() const;

  constexpr ::StringW& __cordl_internal_get__s3ObjectVersion();

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get__zipFile();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get__zipFile() const;

  constexpr void __cordl_internal_set__dryRun(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__imageUri(::StringW value);

  constexpr void __cordl_internal_set__publish(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__s3Bucket(::StringW value);

  constexpr void __cordl_internal_set__s3Key(::StringW value);

  constexpr void __cordl_internal_set__s3ObjectVersion(::StringW value);

  constexpr void __cordl_internal_set__zipFile(::System::IO::MemoryStream* value);

  /// @brief Method .ctor, addr 0x310b070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DryRun, addr 0x310add0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_DryRun();

  /// @brief Method get_FunctionName, addr 0x310aeb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_ImageUri, addr 0x310aed0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ImageUri();

  /// @brief Method get_Publish, addr 0x310aef0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_Publish();

  /// @brief Method get_RevisionId, addr 0x310afd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_S3Bucket, addr 0x310aff0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Bucket();

  /// @brief Method get_S3Key, addr 0x310b010, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Key();

  /// @brief Method get_S3ObjectVersion, addr 0x310b030, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3ObjectVersion();

  /// @brief Method get_ZipFile, addr 0x310b050, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* get_ZipFile();

  /// @brief Method set_DryRun, addr 0x310ae0c, size 0x68, virtual false, abstract: false, final false
  inline void set_DryRun(bool value);

  /// @brief Method set_FunctionName, addr 0x310aeb8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_ImageUri, addr 0x310aed8, size 0x8, virtual false, abstract: false, final false
  inline void set_ImageUri(::StringW value);

  /// @brief Method set_Publish, addr 0x310af2c, size 0x68, virtual false, abstract: false, final false
  inline void set_Publish(bool value);

  /// @brief Method set_RevisionId, addr 0x310afd8, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_S3Bucket, addr 0x310aff8, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Bucket(::StringW value);

  /// @brief Method set_S3Key, addr 0x310b018, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Key(::StringW value);

  /// @brief Method set_S3ObjectVersion, addr 0x310b038, size 0x8, virtual false, abstract: false, final false
  inline void set_S3ObjectVersion(::StringW value);

  /// @brief Method set_ZipFile, addr 0x310b058, size 0x8, virtual false, abstract: false, final false
  inline void set_ZipFile(::System::IO::MemoryStream* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateFunctionCodeRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionCodeRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateFunctionCodeRequest(UpdateFunctionCodeRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionCodeRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateFunctionCodeRequest(UpdateFunctionCodeRequest const&) = delete;

  /// @brief Field _dryRun, offset: 0x31, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____dryRun;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _imageUri, offset: 0x40, size: 0x8, def value: None
  ::StringW ____imageUri;

  /// @brief Field _publish, offset: 0x48, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____publish;

  /// @brief Field _revisionId, offset: 0x50, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _s3Bucket, offset: 0x58, size: 0x8, def value: None
  ::StringW ____s3Bucket;

  /// @brief Field _s3Key, offset: 0x60, size: 0x8, def value: None
  ::StringW ____s3Key;

  /// @brief Field _s3ObjectVersion, offset: 0x68, size: 0x8, def value: None
  ::StringW ____s3ObjectVersion;

  /// @brief Field _zipFile, offset: 0x70, size: 0x8, def value: None
  ::System::IO::MemoryStream* ____zipFile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UpdateFunctionCodeRequest, 0x78>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____dryRun) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____imageUri) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____publish) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____revisionId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____s3Bucket) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____s3Key) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____s3ObjectVersion) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionCodeRequest, ____zipFile) == 0x70, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UpdateFunctionCodeRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UpdateFunctionCodeRequest*, "Amazon.Lambda.Model", "UpdateFunctionCodeRequest");
