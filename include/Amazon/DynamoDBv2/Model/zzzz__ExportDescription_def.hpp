#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExportDescription)
namespace Amazon::DynamoDBv2 {
class ExportFormat;
}
namespace Amazon::DynamoDBv2 {
class ExportStatus;
}
namespace Amazon::DynamoDBv2 {
class S3SseAlgorithm;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExportDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExportDescription);
// Type: Amazon.DynamoDBv2.Model::ExportDescription
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExportDescription*
class CORDL_TYPE ExportDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BilledSizeBytes, put = set_BilledSizeBytes)) int64_t BilledSizeBytes;

  __declspec(property(get = get_ClientToken, put = set_ClientToken))::StringW ClientToken;

  __declspec(property(get = get_EndTime, put = set_EndTime))::System::DateTime EndTime;

  __declspec(property(get = get_ExportArn, put = set_ExportArn))::StringW ExportArn;

  __declspec(property(get = get_ExportFormat, put = set_ExportFormat))::Amazon::DynamoDBv2::ExportFormat* ExportFormat;

  __declspec(property(get = get_ExportManifest, put = set_ExportManifest))::StringW ExportManifest;

  __declspec(property(get = get_ExportStatus, put = set_ExportStatus))::Amazon::DynamoDBv2::ExportStatus* ExportStatus;

  __declspec(property(get = get_ExportTime, put = set_ExportTime))::System::DateTime ExportTime;

  __declspec(property(get = get_FailureCode, put = set_FailureCode))::StringW FailureCode;

  __declspec(property(get = get_FailureMessage, put = set_FailureMessage))::StringW FailureMessage;

  __declspec(property(get = get_ItemCount, put = set_ItemCount)) int64_t ItemCount;

  __declspec(property(get = get_S3Bucket, put = set_S3Bucket))::StringW S3Bucket;

  __declspec(property(get = get_S3BucketOwner, put = set_S3BucketOwner))::StringW S3BucketOwner;

  __declspec(property(get = get_S3Prefix, put = set_S3Prefix))::StringW S3Prefix;

  __declspec(property(get = get_S3SseAlgorithm, put = set_S3SseAlgorithm))::Amazon::DynamoDBv2::S3SseAlgorithm* S3SseAlgorithm;

  __declspec(property(get = get_S3SseKmsKeyId, put = set_S3SseKmsKeyId))::StringW S3SseKmsKeyId;

  __declspec(property(get = get_StartTime, put = set_StartTime))::System::DateTime StartTime;

  __declspec(property(get = get_TableArn, put = set_TableArn))::StringW TableArn;

  __declspec(property(get = get_TableId, put = set_TableId))::StringW TableId;

  /// @brief Field _billedSizeBytes, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__billedSizeBytes, put = __cordl_internal_set__billedSizeBytes))::System::Nullable_1<int64_t> _billedSizeBytes;

  /// @brief Field _clientToken, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__clientToken, put = __cordl_internal_set__clientToken))::StringW _clientToken;

  /// @brief Field _endTime, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__endTime, put = __cordl_internal_set__endTime))::System::Nullable_1<::System::DateTime> _endTime;

  /// @brief Field _exportArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__exportArn, put = __cordl_internal_set__exportArn))::StringW _exportArn;

  /// @brief Field _exportFormat, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__exportFormat, put = __cordl_internal_set__exportFormat))::Amazon::DynamoDBv2::ExportFormat* _exportFormat;

  /// @brief Field _exportManifest, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__exportManifest, put = __cordl_internal_set__exportManifest))::StringW _exportManifest;

  /// @brief Field _exportStatus, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__exportStatus, put = __cordl_internal_set__exportStatus))::Amazon::DynamoDBv2::ExportStatus* _exportStatus;

  /// @brief Field _exportTime, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__exportTime, put = __cordl_internal_set__exportTime))::System::Nullable_1<::System::DateTime> _exportTime;

  /// @brief Field _failureCode, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__failureCode, put = __cordl_internal_set__failureCode))::StringW _failureCode;

  /// @brief Field _failureMessage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__failureMessage, put = __cordl_internal_set__failureMessage))::StringW _failureMessage;

  /// @brief Field _itemCount, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__itemCount, put = __cordl_internal_set__itemCount))::System::Nullable_1<int64_t> _itemCount;

  /// @brief Field _s3Bucket, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Bucket, put = __cordl_internal_set__s3Bucket))::StringW _s3Bucket;

  /// @brief Field _s3BucketOwner, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__s3BucketOwner, put = __cordl_internal_set__s3BucketOwner))::StringW _s3BucketOwner;

  /// @brief Field _s3Prefix, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__s3Prefix, put = __cordl_internal_set__s3Prefix))::StringW _s3Prefix;

  /// @brief Field _s3SseAlgorithm, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__s3SseAlgorithm, put = __cordl_internal_set__s3SseAlgorithm))::Amazon::DynamoDBv2::S3SseAlgorithm* _s3SseAlgorithm;

  /// @brief Field _s3SseKmsKeyId, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__s3SseKmsKeyId, put = __cordl_internal_set__s3SseKmsKeyId))::StringW _s3SseKmsKeyId;

  /// @brief Field _startTime, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime))::System::Nullable_1<::System::DateTime> _startTime;

  /// @brief Field _tableArn, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__tableArn, put = __cordl_internal_set__tableArn))::StringW _tableArn;

  /// @brief Field _tableId, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__tableId, put = __cordl_internal_set__tableId))::StringW _tableId;

  /// @brief Method IsSetBilledSizeBytes, addr 0x122b580, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBilledSizeBytes();

  /// @brief Method IsSetClientToken, addr 0x122b5cc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetClientToken();

  /// @brief Method IsSetEndTime, addr 0x122b688, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetEndTime();

  /// @brief Method IsSetExportArn, addr 0x122b6d4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExportArn();

  /// @brief Method IsSetExportFormat, addr 0x122b6f4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetExportFormat();

  /// @brief Method IsSetExportManifest, addr 0x122b764, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExportManifest();

  /// @brief Method IsSetExportStatus, addr 0x122b784, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetExportStatus();

  /// @brief Method IsSetExportTime, addr 0x122b890, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetExportTime();

  /// @brief Method IsSetFailureCode, addr 0x122b8dc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFailureCode();

  /// @brief Method IsSetFailureMessage, addr 0x122b8fc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFailureMessage();

  /// @brief Method IsSetItemCount, addr 0x122b9b8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetItemCount();

  /// @brief Method IsSetS3Bucket, addr 0x122ba04, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Bucket();

  /// @brief Method IsSetS3BucketOwner, addr 0x122ba24, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3BucketOwner();

  /// @brief Method IsSetS3Prefix, addr 0x122ba44, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3Prefix();

  /// @brief Method IsSetS3SseAlgorithm, addr 0x122ba64, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetS3SseAlgorithm();

  /// @brief Method IsSetS3SseKmsKeyId, addr 0x122bad4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetS3SseKmsKeyId();

  /// @brief Method IsSetStartTime, addr 0x122bb90, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetStartTime();

  /// @brief Method IsSetTableArn, addr 0x122bbdc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableArn();

  /// @brief Method IsSetTableId, addr 0x122bbfc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableId();

  static inline ::Amazon::DynamoDBv2::Model::ExportDescription* New_ctor();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__billedSizeBytes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__billedSizeBytes();

  constexpr ::StringW const& __cordl_internal_get__clientToken() const;

  constexpr ::StringW& __cordl_internal_get__clientToken();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__endTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__endTime();

  constexpr ::StringW const& __cordl_internal_get__exportArn() const;

  constexpr ::StringW& __cordl_internal_get__exportArn();

  constexpr ::Amazon::DynamoDBv2::ExportFormat*& __cordl_internal_get__exportFormat();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ExportFormat*> const& __cordl_internal_get__exportFormat() const;

  constexpr ::StringW const& __cordl_internal_get__exportManifest() const;

  constexpr ::StringW& __cordl_internal_get__exportManifest();

  constexpr ::Amazon::DynamoDBv2::ExportStatus*& __cordl_internal_get__exportStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ExportStatus*> const& __cordl_internal_get__exportStatus() const;

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__exportTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__exportTime();

  constexpr ::StringW const& __cordl_internal_get__failureCode() const;

  constexpr ::StringW& __cordl_internal_get__failureCode();

  constexpr ::StringW const& __cordl_internal_get__failureMessage() const;

  constexpr ::StringW& __cordl_internal_get__failureMessage();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__itemCount() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__itemCount();

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

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__startTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__startTime();

  constexpr ::StringW const& __cordl_internal_get__tableArn() const;

  constexpr ::StringW& __cordl_internal_get__tableArn();

  constexpr ::StringW const& __cordl_internal_get__tableId() const;

  constexpr ::StringW& __cordl_internal_get__tableId();

  constexpr void __cordl_internal_set__billedSizeBytes(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__clientToken(::StringW value);

  constexpr void __cordl_internal_set__endTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__exportArn(::StringW value);

  constexpr void __cordl_internal_set__exportFormat(::Amazon::DynamoDBv2::ExportFormat* value);

  constexpr void __cordl_internal_set__exportManifest(::StringW value);

  constexpr void __cordl_internal_set__exportStatus(::Amazon::DynamoDBv2::ExportStatus* value);

  constexpr void __cordl_internal_set__exportTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__failureCode(::StringW value);

  constexpr void __cordl_internal_set__failureMessage(::StringW value);

  constexpr void __cordl_internal_set__itemCount(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__s3Bucket(::StringW value);

  constexpr void __cordl_internal_set__s3BucketOwner(::StringW value);

  constexpr void __cordl_internal_set__s3Prefix(::StringW value);

  constexpr void __cordl_internal_set__s3SseAlgorithm(::Amazon::DynamoDBv2::S3SseAlgorithm* value);

  constexpr void __cordl_internal_set__s3SseKmsKeyId(::StringW value);

  constexpr void __cordl_internal_set__startTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__tableArn(::StringW value);

  constexpr void __cordl_internal_set__tableId(::StringW value);

  /// @brief Method .ctor, addr 0x122bc0c, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BilledSizeBytes, addr 0x122b4d4, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_BilledSizeBytes();

  /// @brief Method get_ClientToken, addr 0x122b5bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientToken();

  /// @brief Method get_EndTime, addr 0x122b5dc, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_EndTime();

  /// @brief Method get_ExportArn, addr 0x122b6c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExportArn();

  /// @brief Method get_ExportFormat, addr 0x122b6e4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ExportFormat* get_ExportFormat();

  /// @brief Method get_ExportManifest, addr 0x122b754, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExportManifest();

  /// @brief Method get_ExportStatus, addr 0x122b774, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ExportStatus* get_ExportStatus();

  /// @brief Method get_ExportTime, addr 0x122b7e4, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_ExportTime();

  /// @brief Method get_FailureCode, addr 0x122b8cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FailureCode();

  /// @brief Method get_FailureMessage, addr 0x122b8ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FailureMessage();

  /// @brief Method get_ItemCount, addr 0x122b90c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ItemCount();

  /// @brief Method get_S3Bucket, addr 0x122b9f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Bucket();

  /// @brief Method get_S3BucketOwner, addr 0x122ba14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3BucketOwner();

  /// @brief Method get_S3Prefix, addr 0x122ba34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3Prefix();

  /// @brief Method get_S3SseAlgorithm, addr 0x122ba54, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::S3SseAlgorithm* get_S3SseAlgorithm();

  /// @brief Method get_S3SseKmsKeyId, addr 0x122bac4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_S3SseKmsKeyId();

  /// @brief Method get_StartTime, addr 0x122bae4, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_StartTime();

  /// @brief Method get_TableArn, addr 0x122bbcc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableArn();

  /// @brief Method get_TableId, addr 0x122bbec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableId();

  /// @brief Method set_BilledSizeBytes, addr 0x122b510, size 0x70, virtual false, abstract: false, final false
  inline void set_BilledSizeBytes(int64_t value);

  /// @brief Method set_ClientToken, addr 0x122b5c4, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientToken(::StringW value);

  /// @brief Method set_EndTime, addr 0x122b618, size 0x70, virtual false, abstract: false, final false
  inline void set_EndTime(::System::DateTime value);

  /// @brief Method set_ExportArn, addr 0x122b6cc, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportArn(::StringW value);

  /// @brief Method set_ExportFormat, addr 0x122b6ec, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportFormat(::Amazon::DynamoDBv2::ExportFormat* value);

  /// @brief Method set_ExportManifest, addr 0x122b75c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportManifest(::StringW value);

  /// @brief Method set_ExportStatus, addr 0x122b77c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExportStatus(::Amazon::DynamoDBv2::ExportStatus* value);

  /// @brief Method set_ExportTime, addr 0x122b820, size 0x70, virtual false, abstract: false, final false
  inline void set_ExportTime(::System::DateTime value);

  /// @brief Method set_FailureCode, addr 0x122b8d4, size 0x8, virtual false, abstract: false, final false
  inline void set_FailureCode(::StringW value);

  /// @brief Method set_FailureMessage, addr 0x122b8f4, size 0x8, virtual false, abstract: false, final false
  inline void set_FailureMessage(::StringW value);

  /// @brief Method set_ItemCount, addr 0x122b948, size 0x70, virtual false, abstract: false, final false
  inline void set_ItemCount(int64_t value);

  /// @brief Method set_S3Bucket, addr 0x122b9fc, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Bucket(::StringW value);

  /// @brief Method set_S3BucketOwner, addr 0x122ba1c, size 0x8, virtual false, abstract: false, final false
  inline void set_S3BucketOwner(::StringW value);

  /// @brief Method set_S3Prefix, addr 0x122ba3c, size 0x8, virtual false, abstract: false, final false
  inline void set_S3Prefix(::StringW value);

  /// @brief Method set_S3SseAlgorithm, addr 0x122ba5c, size 0x8, virtual false, abstract: false, final false
  inline void set_S3SseAlgorithm(::Amazon::DynamoDBv2::S3SseAlgorithm* value);

  /// @brief Method set_S3SseKmsKeyId, addr 0x122bacc, size 0x8, virtual false, abstract: false, final false
  inline void set_S3SseKmsKeyId(::StringW value);

  /// @brief Method set_StartTime, addr 0x122bb20, size 0x70, virtual false, abstract: false, final false
  inline void set_StartTime(::System::DateTime value);

  /// @brief Method set_TableArn, addr 0x122bbd4, size 0x8, virtual false, abstract: false, final false
  inline void set_TableArn(::StringW value);

  /// @brief Method set_TableId, addr 0x122bbf4, size 0x8, virtual false, abstract: false, final false
  inline void set_TableId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExportDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExportDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExportDescription(ExportDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExportDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExportDescription(ExportDescription const&) = delete;

  /// @brief Field _billedSizeBytes, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____billedSizeBytes;

  /// @brief Field _clientToken, offset: 0x20, size: 0x8, def value: None
  ::StringW ____clientToken;

  /// @brief Field _endTime, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____endTime;

  /// @brief Field _exportArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____exportArn;

  /// @brief Field _exportFormat, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ExportFormat* ____exportFormat;

  /// @brief Field _exportManifest, offset: 0x48, size: 0x8, def value: None
  ::StringW ____exportManifest;

  /// @brief Field _exportStatus, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ExportStatus* ____exportStatus;

  /// @brief Field _exportTime, offset: 0x58, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____exportTime;

  /// @brief Field _failureCode, offset: 0x68, size: 0x8, def value: None
  ::StringW ____failureCode;

  /// @brief Field _failureMessage, offset: 0x70, size: 0x8, def value: None
  ::StringW ____failureMessage;

  /// @brief Field _itemCount, offset: 0x78, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____itemCount;

  /// @brief Field _s3Bucket, offset: 0x88, size: 0x8, def value: None
  ::StringW ____s3Bucket;

  /// @brief Field _s3BucketOwner, offset: 0x90, size: 0x8, def value: None
  ::StringW ____s3BucketOwner;

  /// @brief Field _s3Prefix, offset: 0x98, size: 0x8, def value: None
  ::StringW ____s3Prefix;

  /// @brief Field _s3SseAlgorithm, offset: 0xa0, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::S3SseAlgorithm* ____s3SseAlgorithm;

  /// @brief Field _s3SseKmsKeyId, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____s3SseKmsKeyId;

  /// @brief Field _startTime, offset: 0xb0, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____startTime;

  /// @brief Field _tableArn, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____tableArn;

  /// @brief Field _tableId, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____tableId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExportDescription, 0xd0>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____billedSizeBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____clientToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____endTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____exportArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____exportFormat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____exportManifest) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____exportStatus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____exportTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____failureCode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____failureMessage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____itemCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____s3Bucket) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____s3BucketOwner) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____s3Prefix) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____s3SseAlgorithm) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____s3SseKmsKeyId) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____startTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____tableArn) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExportDescription, ____tableId) == 0xc8, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExportDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExportDescription*, "Amazon.DynamoDBv2.Model", "ExportDescription");
