#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlacierActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class GlacierActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::GlacierActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::GlacierActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::GlacierActionIdentifiers*
class CORDL_TYPE GlacierActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AbortMultipartUpload, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AbortMultipartUpload, put = setStaticF_AbortMultipartUpload))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AbortMultipartUpload;

  /// @brief Field AllGlacierActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllGlacierActions, put = setStaticF_AllGlacierActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllGlacierActions;

  /// @brief Field CompleteMultipartUpload, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CompleteMultipartUpload, put = setStaticF_CompleteMultipartUpload))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CompleteMultipartUpload;

  /// @brief Field CreateVault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVault, put = setStaticF_CreateVault))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVault;

  /// @brief Field DeleteArchive, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteArchive, put = setStaticF_DeleteArchive))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteArchive;

  /// @brief Field DeleteVault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVault, put = setStaticF_DeleteVault))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVault;

  /// @brief Field DeleteVaultNotifications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVaultNotifications, put = setStaticF_DeleteVaultNotifications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVaultNotifications;

  /// @brief Field DescribeJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeJob, put = setStaticF_DescribeJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeJob;

  /// @brief Field DescribeVault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVault, put = setStaticF_DescribeVault))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVault;

  /// @brief Field GetJobOutput, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetJobOutput, put = setStaticF_GetJobOutput))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetJobOutput;

  /// @brief Field GetVaultNotifications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetVaultNotifications, put = setStaticF_GetVaultNotifications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetVaultNotifications;

  /// @brief Field InitiateJob, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InitiateJob, put = setStaticF_InitiateJob))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* InitiateJob;

  /// @brief Field InitiateMultipartUpload, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InitiateMultipartUpload, put = setStaticF_InitiateMultipartUpload))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* InitiateMultipartUpload;

  /// @brief Field ListJobs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListJobs, put = setStaticF_ListJobs))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListJobs;

  /// @brief Field ListMultipartUploads, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListMultipartUploads, put = setStaticF_ListMultipartUploads))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListMultipartUploads;

  /// @brief Field ListParts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListParts, put = setStaticF_ListParts))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListParts;

  /// @brief Field ListVaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListVaults, put = setStaticF_ListVaults))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListVaults;

  /// @brief Field SetVaultNotifications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetVaultNotifications, put = setStaticF_SetVaultNotifications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetVaultNotifications;

  /// @brief Field UploadArchive, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UploadArchive, put = setStaticF_UploadArchive))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UploadArchive;

  /// @brief Field UploadMultipartPart, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UploadMultipartPart, put = setStaticF_UploadMultipartPart))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UploadMultipartPart;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AbortMultipartUpload();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllGlacierActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CompleteMultipartUpload();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVault();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteArchive();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVault();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVaultNotifications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeJob();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVault();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetJobOutput();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetVaultNotifications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_InitiateJob();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_InitiateMultipartUpload();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListJobs();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListMultipartUploads();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListParts();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListVaults();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetVaultNotifications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UploadArchive();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UploadMultipartPart();

  static inline void setStaticF_AbortMultipartUpload(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllGlacierActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CompleteMultipartUpload(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVault(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteArchive(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVault(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVaultNotifications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVault(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetJobOutput(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetVaultNotifications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_InitiateJob(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_InitiateMultipartUpload(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListJobs(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListMultipartUploads(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListParts(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListVaults(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetVaultNotifications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UploadArchive(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UploadMultipartPart(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlacierActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlacierActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlacierActionIdentifiers(GlacierActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlacierActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlacierActionIdentifiers(GlacierActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::GlacierActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::GlacierActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::GlacierActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "GlacierActionIdentifiers");
