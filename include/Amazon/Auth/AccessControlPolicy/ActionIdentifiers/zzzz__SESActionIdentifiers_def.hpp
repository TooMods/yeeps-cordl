#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SESActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class SESActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SESActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SESActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SESActionIdentifiers*
class CORDL_TYPE SESActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllSESActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllSESActions, put = setStaticF_AllSESActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllSESActions;

  /// @brief Field DeleteIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteIdentity, put = setStaticF_DeleteIdentity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteIdentity;

  /// @brief Field DeleteVerifiedEmailAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVerifiedEmailAddress,
                             put = setStaticF_DeleteVerifiedEmailAddress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVerifiedEmailAddress;

  /// @brief Field GetIdentityDkimAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetIdentityDkimAttributes, put = setStaticF_GetIdentityDkimAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetIdentityDkimAttributes;

  /// @brief Field GetIdentityNotificationAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetIdentityNotificationAttributes,
                             put = setStaticF_GetIdentityNotificationAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetIdentityNotificationAttributes;

  /// @brief Field GetIdentityVerificationAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetIdentityVerificationAttributes,
                             put = setStaticF_GetIdentityVerificationAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetIdentityVerificationAttributes;

  /// @brief Field GetSendQuota, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetSendQuota, put = setStaticF_GetSendQuota))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetSendQuota;

  /// @brief Field GetSendStatistics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetSendStatistics, put = setStaticF_GetSendStatistics))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetSendStatistics;

  /// @brief Field ListIdentities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListIdentities, put = setStaticF_ListIdentities))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListIdentities;

  /// @brief Field ListVerifiedEmailAddresses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListVerifiedEmailAddresses,
                             put = setStaticF_ListVerifiedEmailAddresses))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListVerifiedEmailAddresses;

  /// @brief Field SendEmail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendEmail, put = setStaticF_SendEmail))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SendEmail;

  /// @brief Field SendRawEmail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendRawEmail, put = setStaticF_SendRawEmail))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SendRawEmail;

  /// @brief Field SetIdentityDkimEnabled, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetIdentityDkimEnabled, put = setStaticF_SetIdentityDkimEnabled))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetIdentityDkimEnabled;

  /// @brief Field SetIdentityFeedbackForwardingEnabled, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetIdentityFeedbackForwardingEnabled,
                             put = setStaticF_SetIdentityFeedbackForwardingEnabled))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetIdentityFeedbackForwardingEnabled;

  /// @brief Field SetIdentityNotificationTopic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetIdentityNotificationTopic,
                             put = setStaticF_SetIdentityNotificationTopic))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetIdentityNotificationTopic;

  /// @brief Field VerifyDomainDkim, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerifyDomainDkim, put = setStaticF_VerifyDomainDkim))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* VerifyDomainDkim;

  /// @brief Field VerifyDomainIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerifyDomainIdentity, put = setStaticF_VerifyDomainIdentity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* VerifyDomainIdentity;

  /// @brief Field VerifyEmailAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerifyEmailAddress, put = setStaticF_VerifyEmailAddress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* VerifyEmailAddress;

  /// @brief Field VerifyEmailIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VerifyEmailIdentity, put = setStaticF_VerifyEmailIdentity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* VerifyEmailIdentity;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllSESActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteIdentity();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVerifiedEmailAddress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetIdentityDkimAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetIdentityNotificationAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetIdentityVerificationAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetSendQuota();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetSendStatistics();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListIdentities();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListVerifiedEmailAddresses();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SendEmail();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SendRawEmail();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetIdentityDkimEnabled();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetIdentityFeedbackForwardingEnabled();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetIdentityNotificationTopic();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_VerifyDomainDkim();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_VerifyDomainIdentity();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_VerifyEmailAddress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_VerifyEmailIdentity();

  static inline void setStaticF_AllSESActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteIdentity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVerifiedEmailAddress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetIdentityDkimAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetIdentityNotificationAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetIdentityVerificationAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetSendQuota(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetSendStatistics(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListIdentities(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListVerifiedEmailAddresses(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SendEmail(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SendRawEmail(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetIdentityDkimEnabled(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetIdentityFeedbackForwardingEnabled(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetIdentityNotificationTopic(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_VerifyDomainDkim(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_VerifyDomainIdentity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_VerifyEmailAddress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_VerifyEmailIdentity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SESActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SESActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SESActionIdentifiers(SESActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SESActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SESActionIdentifiers(SESActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SESActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SESActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SESActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "SESActionIdentifiers");
