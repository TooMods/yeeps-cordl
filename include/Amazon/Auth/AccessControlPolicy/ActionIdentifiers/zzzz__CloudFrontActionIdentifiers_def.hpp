#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CloudFrontActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CloudFrontActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFrontActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudFrontActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudFrontActionIdentifiers*
class CORDL_TYPE CloudFrontActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCloudFrontActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCloudFrontActions, put = setStaticF_AllCloudFrontActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCloudFrontActions;

  /// @brief Field CreateCloudFrontOriginAccessIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateCloudFrontOriginAccessIdentity,
                             put = setStaticF_CreateCloudFrontOriginAccessIdentity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateCloudFrontOriginAccessIdentity;

  /// @brief Field CreateDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDistribution, put = setStaticF_CreateDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDistribution;

  /// @brief Field CreateInvalidation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateInvalidation, put = setStaticF_CreateInvalidation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateInvalidation;

  /// @brief Field CreateStreamingDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateStreamingDistribution,
                             put = setStaticF_CreateStreamingDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateStreamingDistribution;

  /// @brief Field DeleteCloudFrontOriginAccessIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteCloudFrontOriginAccessIdentity,
                             put = setStaticF_DeleteCloudFrontOriginAccessIdentity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteCloudFrontOriginAccessIdentity;

  /// @brief Field DeleteDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDistribution, put = setStaticF_DeleteDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDistribution;

  /// @brief Field DeleteStreamingDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteStreamingDistribution,
                             put = setStaticF_DeleteStreamingDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteStreamingDistribution;

  /// @brief Field GetCloudFrontOriginAccessIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetCloudFrontOriginAccessIdentity,
                             put = setStaticF_GetCloudFrontOriginAccessIdentity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetCloudFrontOriginAccessIdentity;

  /// @brief Field GetCloudFrontOriginAccessIdentityConfig, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetCloudFrontOriginAccessIdentityConfig,
                             put = setStaticF_GetCloudFrontOriginAccessIdentityConfig))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetCloudFrontOriginAccessIdentityConfig;

  /// @brief Field GetDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetDistribution, put = setStaticF_GetDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetDistribution;

  /// @brief Field GetDistributionConfig, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetDistributionConfig, put = setStaticF_GetDistributionConfig))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetDistributionConfig;

  /// @brief Field GetInvalidation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetInvalidation, put = setStaticF_GetInvalidation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetInvalidation;

  /// @brief Field GetStreamingDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetStreamingDistribution, put = setStaticF_GetStreamingDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetStreamingDistribution;

  /// @brief Field GetStreamingDistributionConfig, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetStreamingDistributionConfig,
                             put = setStaticF_GetStreamingDistributionConfig))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetStreamingDistributionConfig;

  /// @brief Field ListCloudFrontOriginAccessIdentities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListCloudFrontOriginAccessIdentities,
                             put = setStaticF_ListCloudFrontOriginAccessIdentities))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListCloudFrontOriginAccessIdentities;

  /// @brief Field ListDistributions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListDistributions, put = setStaticF_ListDistributions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListDistributions;

  /// @brief Field ListInvalidations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListInvalidations, put = setStaticF_ListInvalidations))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListInvalidations;

  /// @brief Field ListStreamingDistributions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListStreamingDistributions,
                             put = setStaticF_ListStreamingDistributions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListStreamingDistributions;

  /// @brief Field UpdateCloudFrontOriginAccessIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateCloudFrontOriginAccessIdentity,
                             put = setStaticF_UpdateCloudFrontOriginAccessIdentity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateCloudFrontOriginAccessIdentity;

  /// @brief Field UpdateDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateDistribution, put = setStaticF_UpdateDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateDistribution;

  /// @brief Field UpdateStreamingDistribution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateStreamingDistribution,
                             put = setStaticF_UpdateStreamingDistribution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateStreamingDistribution;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCloudFrontActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateCloudFrontOriginAccessIdentity();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDistribution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateInvalidation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateStreamingDistribution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteCloudFrontOriginAccessIdentity();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDistribution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteStreamingDistribution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetCloudFrontOriginAccessIdentity();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetCloudFrontOriginAccessIdentityConfig();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetDistribution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetDistributionConfig();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetInvalidation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetStreamingDistribution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetStreamingDistributionConfig();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListCloudFrontOriginAccessIdentities();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListDistributions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListInvalidations();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListStreamingDistributions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateCloudFrontOriginAccessIdentity();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateDistribution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateStreamingDistribution();

  static inline void setStaticF_AllCloudFrontActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateCloudFrontOriginAccessIdentity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateInvalidation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateStreamingDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteCloudFrontOriginAccessIdentity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteStreamingDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetCloudFrontOriginAccessIdentity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetCloudFrontOriginAccessIdentityConfig(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetDistributionConfig(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetInvalidation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetStreamingDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetStreamingDistributionConfig(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListCloudFrontOriginAccessIdentities(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListDistributions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListInvalidations(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListStreamingDistributions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateCloudFrontOriginAccessIdentity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateStreamingDistribution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudFrontActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CloudFrontActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudFrontActionIdentifiers(CloudFrontActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudFrontActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudFrontActionIdentifiers(CloudFrontActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFrontActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFrontActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFrontActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "CloudFrontActionIdentifiers");
