#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExportTableToPointInTimeRequest)
namespace Amazon::DynamoDBv2 {
class ExportFormat;
}
namespace Amazon::DynamoDBv2 {
class S3SseAlgorithm;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExportTableToPointInTimeRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest);
// Type: Amazon.DynamoDBv2.Model::ExportTableToPointInTimeRequest
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExportTableToPointInTimeRequest*
class CORDL_TYPE ExportTableToPointInTimeRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ClientToken, put = set_ClientToken))::StringW ClientToken;

  __declspec(property(get = get_ExportFormat, put = set_ExportFormat))::Amazon::DynamoDBv2::ExportFormat* ExportFormat;

  __declspec(property(get = get_ExportTime, put = set_ExportTime))::System::DateTime ExportTime;

  __declspec(property(get = get_S3Bucket, put = set_S3Bucket))::StringW S3Bucket;

  __declspec(property(get = get_S3BucketOwner, put = set_S3BucketOwner))::StringW S3BucketOwner;

  __declspec(property(get = get_S3Prefix, put = set_S3Prefix))::StringW S3Prefix;

  __declspec(property(get = get_S3SseAlgorithm, put = set_S3SseAlgorithm))::Amazon::DynamoDBv2::S3SseAlgorithm* S3SseAlgorithm;

  __declspec(property(get = get_S3SseKmsKeyId, put = set_S3SseKmsKeyId))::StringW S3SseKmsKeyId;

  __declspec(property(get = get_TableArn, put = set_TableArn))::StringW TableArn;

  /// @brief Field _clientToken, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clientToken, put = __cordl_internal_set__clientToken))::StringW _clientToken;

  /// @brief Field _exportFormat, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__exportFormat, put = __cordl_internal_set__exportFormat))::Amazon::DynamoDBv2::ExportFormat* _exportFormat;

  /// @brief Field _exportTime, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__exportTime, put = __cordl_internal_set__exportTime))::System::Nullable_1<::System::DateTime> _exportTime;

  /// @brief Field _s3Bucket, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Bucket, put = __cordl_internal_set__s3Bucket))::StringW _s3Bucket;

  /// @brief Field _s3BucketOwner, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__s3BucketOwner, put = __cordl_internal_set__s3BucketOwner))::StringW _s3BucketOwner;

  /// @brief Field _s3Prefix, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Prefix, put = __cordl_internal_set__s3Prefix))::StringW _s3Prefix;

  /// @brief Field _s3SseAlgorithm, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__s3SseAlgorithm, put = __cordl_internal_set__s3SseAlgorithm))::Amazon::DynamoDBv2::S3SseAlgorithm* _s3SseAlgorithm;

  /// @brief Field _s3SseKmsKeyId, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__s3SseKmsKeyId, put = __cordl_internal_set__s3SseKmsKeyId))::StringW _s3SseKmsKeyId;

  /// @brief Field _tableArn, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__tableArn, put = __cordl_internal_set__tableArn))::StringW _tableArn;

  /// @brief Method IsSetClientToken, addr 0x1048130, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetClientToken();

  /// @brief Method IsSetExportFormat, addr 0x1048150, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetExportFormat();

  /// @brief Method IsSetExportTime, addr 0x104825c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetExportTime();

  /// @brief Method IsSetS3Bucket, addr 0x10482a8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Bucket();

  /// @brief Method IsSetS3BucketOwner, addr 0x10482c8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3BucketOwner();

  /// @brief Method IsSetS3Prefix, addr 0x10482e8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Prefix();

  /// @brief Method IsSetS3SseAlgorithm, addr 0x1048308, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetS3SseAlgorithm();

  /// @brief Method IsSetS3SseKmsKeyId, addr 0x1048378, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3SseKmsKeyId();

  /// @brief Method IsSetTableArn, addr 0x1048398, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableArn();

  static inline ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__clientToken() const;

  constexpr ::StringW& __cordl_internal_get__clientToken();

  constexpr ::Amazon::DynamoDBv2::ExportFormat*& __cordl_internal_get__exportFormat();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ExportFormat*> const& __cordl_internal_get__exportFormat() const;

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__exportTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__exportTime();

  constexpr ::StringW const& __cordl_internal_get__s3Bucket() const;

  constexpr ::StringW& __cordl_internal_get__s3Bucket();

  constexpr ::StringW const& __cordl_internal_get__s3BucketOwner() const;

  constexpr ::StringW& __cordl_internal_get__s3BucketOwner();

  constexpr ::StringW const& __cordl_internal_get__s3Prefix() const;

  constexpr ::StringW& __cordl_internal_get__s3Prefix();

  constexpr ::Amazon::DynamoDBv2::S3SseAlgorithm*& __cordl_internal_get__s3SseAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::S3SseAlgorithm*> const& __cordl_internal_get__s3SseAlgorithm() const;

  constexpr ::StringW const& __cordl_internal_get__s3SseKmsKeyId() const;

  constexpr ::StringW& __cordl_internal_get__s3SseKmsKeyId();

  constexpr ::StringW const& __cordl_internal_get__tableArn() const;

  constexpr ::StringW& __cordl_internal_get__tableArn();

  constexpr void __cordl_internal_set__clientToken(::StringW value);

  constexpr void __cordl_internal_set__exportFormat(::Amazon::DynamoDBv2::ExportFormat* value);

  constexpr void __cordl_internal_set__exportTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__s3Bucket(::StringW value);

  constexpr void __cordl_internal_set__s3BucketOwner(::StringW value);

  constexpr void __cordl_internal_set__s3Prefix(::StringW value);

  constexpr void __cordl_internal_set__s3SseAlgorithm(::Amazon::DynamoDBv2::S3SseAlgorithm* value);

  constexpr void __cordl_internal_set__s3SseKmsKeyId(::StringW value);

  constexpr void __cordl_internal_set__tableArn(::StringW value);

  /// @brief Method .ctor, addr 0x10483a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientToken, addr 0x1048120, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientToken();

  /// @brief Method get_ExportFormat, addr 0x1048140, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ExportFormat* get_ExportFormat();

  /// @brief Method get_ExportTime, addr 0x10481b0, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_ExportTime();

  /// @brief Method get_S3Bucket, addr 0x1048298, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Bucket();

  /// @brief Method get_S3BucketOwner, addr 0x10482b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3BucketOwner();

  /// @brief Method get_S3Prefix, addr 0x10482d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Prefix();

  /// @brief Method get_S3SseAlgorithm, addr 0x10482f8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::S3SseAlgorithm* get_S3SseAlgorithm();

  /// @brief Method get_S3SseKmsKeyId, addr 0x1048368, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3SseKmsKeyId();

  /// @brief Method get_TableArn, addr 0x1048388, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableArn();

  /// @brief Method set_ClientToken, addr 0x1048128, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientToken(::StringW value);

  /// @brief Method set_ExportFormat, addr 0x1048148, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportFormat(::Amazon::DynamoDBv2::ExportFormat* value);

  /// @brief Method set_ExportTime, addr 0x10481ec, size 0x70, virtual false, abstract: false, final false
  inline void set_ExportTime(::System::DateTime value);

  /// @brief Method set_S3Bucket, addr 0x10482a0, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Bucket(::StringW value);

  /// @brief Method set_S3BucketOwner, addr 0x10482c0, size 0x8, virtual false, abstract: false, final false
  inline void set_S3BucketOwner(::StringW value);

  /// @brief Method set_S3Prefix, addr 0x10482e0, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Prefix(::StringW value);

  /// @brief Method set_S3SseAlgorithm, addr 0x1048300, size 0x8, virtual false, abstract: false, final false
  inline void set_S3SseAlgorithm(::Amazon::DynamoDBv2::S3SseAlgorithm* value);

  /// @brief Method set_S3SseKmsKeyId, addr 0x1048370, size 0x8, virtual false, abstract: false, final false
  inline void set_S3SseKmsKeyId(::StringW value);

  /// @brief Method set_TableArn, addr 0x1048390, size 0x8, virtual false, abstract: false, final false
  inline void set_TableArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExportTableToPointInTimeRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExportTableToPointInTimeRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExportTableToPointInTimeRequest(ExportTableToPointInTimeRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExportTableToPointInTimeRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExportTableToPointInTimeRequest(ExportTableToPointInTimeRequest const&) = delete;

  /// @brief Field _clientToken, offset: 0x38, size: 0x8, def value: None
  ::StringW ____clientToken;

  /// @brief Field _exportFormat, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ExportFormat* ____exportFormat;

  /// @brief Field _exportTime, offset: 0x48, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____exportTime;

  /// @brief Field _s3Bucket, offset: 0x58, size: 0x8, def value: None
  ::StringW ____s3Bucket;

  /// @brief Field _s3BucketOwner, offset: 0x60, size: 0x8, def value: None
  ::StringW ____s3BucketOwner;

  /// @brief Field _s3Prefix, offset: 0x68, size: 0x8, def value: None
  ::StringW ____s3Prefix;

  /// @brief Field _s3SseAlgorithm, offset: 0x70, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::S3SseAlgorithm* ____s3SseAlgorithm;

  /// @brief Field _s3SseKmsKeyId, offset: 0x78, size: 0x8, def value: None
  ::StringW ____s3SseKmsKeyId;

  /// @brief Field _tableArn, offset: 0x80, size: 0x8, def value: None
  ::StringW ____tableArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, 0x88>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____clientToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____exportFormat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____exportTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____s3Bucket) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____s3BucketOwner) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____s3Prefix) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____s3SseAlgorithm) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____s3SseKmsKeyId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest, ____tableArn) == 0x80, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*, "Amazon.DynamoDBv2.Model", "ExportTableToPointInTimeRequest");
