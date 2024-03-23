#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(S3ActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class S3ActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::S3ActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::S3ActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::S3ActionIdentifiers*
class CORDL_TYPE S3ActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AbortMultipartUpload, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AbortMultipartUpload, put = setStaticF_AbortMultipartUpload))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AbortMultipartUpload;

  /// @brief Field AllS3Actions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllS3Actions, put = setStaticF_AllS3Actions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllS3Actions;

  /// @brief Field CreateBucket, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateBucket, put = setStaticF_CreateBucket))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateBucket;

  /// @brief Field DeleteBucket, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteBucket, put = setStaticF_DeleteBucket))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteBucket;

  /// @brief Field DeleteBucketPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteBucketPolicy, put = setStaticF_DeleteBucketPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteBucketPolicy;

  /// @brief Field DeleteBucketWebsite, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteBucketWebsite, put = setStaticF_DeleteBucketWebsite))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteBucketWebsite;

  /// @brief Field DeleteObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteObject, put = setStaticF_DeleteObject))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteObject;

  /// @brief Field DeleteObjectVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteObjectVersion, put = setStaticF_DeleteObjectVersion))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteObjectVersion;

  /// @brief Field GetBucketAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketAcl, put = setStaticF_GetBucketAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketAcl;

  /// @brief Field GetBucketCORS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketCORS, put = setStaticF_GetBucketCORS))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketCORS;

  /// @brief Field GetBucketLocation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketLocation, put = setStaticF_GetBucketLocation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketLocation;

  /// @brief Field GetBucketLogging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketLogging, put = setStaticF_GetBucketLogging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketLogging;

  /// @brief Field GetBucketNotification, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketNotification, put = setStaticF_GetBucketNotification))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketNotification;

  /// @brief Field GetBucketPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketPolicy, put = setStaticF_GetBucketPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketPolicy;

  /// @brief Field GetBucketRequestPayment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketRequestPayment, put = setStaticF_GetBucketRequestPayment))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketRequestPayment;

  /// @brief Field GetBucketTagging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketTagging, put = setStaticF_GetBucketTagging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketTagging;

  /// @brief Field GetBucketVersioning, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketVersioning, put = setStaticF_GetBucketVersioning))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketVersioning;

  /// @brief Field GetBucketWebsite, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetBucketWebsite, put = setStaticF_GetBucketWebsite))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetBucketWebsite;

  /// @brief Field GetLifecycleConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetLifecycleConfiguration, put = setStaticF_GetLifecycleConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetLifecycleConfiguration;

  /// @brief Field GetObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetObject, put = setStaticF_GetObject))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetObject;

  /// @brief Field GetObjectAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetObjectAcl, put = setStaticF_GetObjectAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetObjectAcl;

  /// @brief Field GetObjectTorrent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetObjectTorrent, put = setStaticF_GetObjectTorrent))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetObjectTorrent;

  /// @brief Field GetObjectVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetObjectVersion, put = setStaticF_GetObjectVersion))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetObjectVersion;

  /// @brief Field GetObjectVersionAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetObjectVersionAcl, put = setStaticF_GetObjectVersionAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetObjectVersionAcl;

  /// @brief Field GetObjectVersionTorrent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetObjectVersionTorrent, put = setStaticF_GetObjectVersionTorrent))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetObjectVersionTorrent;

  /// @brief Field ListAllMyBuckets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListAllMyBuckets, put = setStaticF_ListAllMyBuckets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListAllMyBuckets;

  /// @brief Field ListBucket, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListBucket, put = setStaticF_ListBucket))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListBucket;

  /// @brief Field ListBucketMultipartUploads, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListBucketMultipartUploads,
                             put = setStaticF_ListBucketMultipartUploads))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListBucketMultipartUploads;

  /// @brief Field ListBucketVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListBucketVersions, put = setStaticF_ListBucketVersions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListBucketVersions;

  /// @brief Field ListMultipartUploadParts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListMultipartUploadParts, put = setStaticF_ListMultipartUploadParts))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListMultipartUploadParts;

  /// @brief Field PutBucketAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketAcl, put = setStaticF_PutBucketAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketAcl;

  /// @brief Field PutBucketCORS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketCORS, put = setStaticF_PutBucketCORS))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketCORS;

  /// @brief Field PutBucketLogging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketLogging, put = setStaticF_PutBucketLogging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketLogging;

  /// @brief Field PutBucketNotification, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketNotification, put = setStaticF_PutBucketNotification))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketNotification;

  /// @brief Field PutBucketPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketPolicy, put = setStaticF_PutBucketPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketPolicy;

  /// @brief Field PutBucketRequestPayment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketRequestPayment, put = setStaticF_PutBucketRequestPayment))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketRequestPayment;

  /// @brief Field PutBucketTagging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketTagging, put = setStaticF_PutBucketTagging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketTagging;

  /// @brief Field PutBucketVersioning, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketVersioning, put = setStaticF_PutBucketVersioning))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketVersioning;

  /// @brief Field PutBucketWebsite, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutBucketWebsite, put = setStaticF_PutBucketWebsite))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutBucketWebsite;

  /// @brief Field PutLifecycleConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutLifecycleConfiguration, put = setStaticF_PutLifecycleConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutLifecycleConfiguration;

  /// @brief Field PutObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutObject, put = setStaticF_PutObject))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutObject;

  /// @brief Field PutObjectAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutObjectAcl, put = setStaticF_PutObjectAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutObjectAcl;

  /// @brief Field PutObjectVersionAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutObjectVersionAcl, put = setStaticF_PutObjectVersionAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutObjectVersionAcl;

  /// @brief Field RestoreObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RestoreObject, put = setStaticF_RestoreObject))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RestoreObject;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AbortMultipartUpload();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllS3Actions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateBucket();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteBucket();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteBucketPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteBucketWebsite();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteObject();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteObjectVersion();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketCORS();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketLocation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketLogging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketNotification();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketRequestPayment();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketTagging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketVersioning();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetBucketWebsite();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetLifecycleConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetObject();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetObjectAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetObjectTorrent();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetObjectVersion();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetObjectVersionAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetObjectVersionTorrent();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListAllMyBuckets();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListBucket();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListBucketMultipartUploads();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListBucketVersions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListMultipartUploadParts();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketCORS();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketLogging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketNotification();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketRequestPayment();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketTagging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketVersioning();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutBucketWebsite();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutLifecycleConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutObject();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutObjectAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutObjectVersionAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RestoreObject();

  static inline void setStaticF_AbortMultipartUpload(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllS3Actions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateBucket(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteBucket(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteBucketPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteBucketWebsite(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteObject(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteObjectVersion(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketCORS(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketLocation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketLogging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketNotification(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketRequestPayment(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketTagging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketVersioning(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetBucketWebsite(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetLifecycleConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetObject(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetObjectAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetObjectTorrent(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetObjectVersion(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetObjectVersionAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetObjectVersionTorrent(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListAllMyBuckets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListBucket(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListBucketMultipartUploads(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListBucketVersions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListMultipartUploadParts(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketCORS(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketLogging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketNotification(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketRequestPayment(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketTagging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketVersioning(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutBucketWebsite(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutLifecycleConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutObject(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutObjectAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutObjectVersionAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RestoreObject(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr S3ActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "S3ActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  S3ActionIdentifiers(S3ActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "S3ActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  S3ActionIdentifiers(S3ActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::S3ActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::S3ActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::S3ActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "S3ActionIdentifiers");
