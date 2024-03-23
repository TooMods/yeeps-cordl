#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SNSActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class SNSActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SNSActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SNSActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SNSActionIdentifiers*
class CORDL_TYPE SNSActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AddPermission, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddPermission, put = setStaticF_AddPermission))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddPermission;

  /// @brief Field AllSNSActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllSNSActions, put = setStaticF_AllSNSActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllSNSActions;

  /// @brief Field ConfirmSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConfirmSubscription, put = setStaticF_ConfirmSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ConfirmSubscription;

  /// @brief Field CreatePlatformApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatePlatformApplication, put = setStaticF_CreatePlatformApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreatePlatformApplication;

  /// @brief Field CreatePlatformEndpoint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatePlatformEndpoint, put = setStaticF_CreatePlatformEndpoint))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreatePlatformEndpoint;

  /// @brief Field CreateTopic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateTopic, put = setStaticF_CreateTopic))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateTopic;

  /// @brief Field DeleteEndpoint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteEndpoint, put = setStaticF_DeleteEndpoint))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteEndpoint;

  /// @brief Field DeletePlatformApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeletePlatformApplication, put = setStaticF_DeletePlatformApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeletePlatformApplication;

  /// @brief Field DeleteTopic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTopic, put = setStaticF_DeleteTopic))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTopic;

  /// @brief Field GetEndpointAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetEndpointAttributes, put = setStaticF_GetEndpointAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetEndpointAttributes;

  /// @brief Field GetPlatformApplicationAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetPlatformApplicationAttributes,
                             put = setStaticF_GetPlatformApplicationAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetPlatformApplicationAttributes;

  /// @brief Field GetSubscriptionAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetSubscriptionAttributes, put = setStaticF_GetSubscriptionAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetSubscriptionAttributes;

  /// @brief Field GetTopicAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetTopicAttributes, put = setStaticF_GetTopicAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetTopicAttributes;

  /// @brief Field ListEndpointsByPlatformApplication, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListEndpointsByPlatformApplication,
                             put = setStaticF_ListEndpointsByPlatformApplication))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListEndpointsByPlatformApplication;

  /// @brief Field ListPlatformApplications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListPlatformApplications, put = setStaticF_ListPlatformApplications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListPlatformApplications;

  /// @brief Field ListSubscriptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListSubscriptions, put = setStaticF_ListSubscriptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListSubscriptions;

  /// @brief Field ListSubscriptionsByTopic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListSubscriptionsByTopic, put = setStaticF_ListSubscriptionsByTopic))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListSubscriptionsByTopic;

  /// @brief Field ListTopics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListTopics, put = setStaticF_ListTopics))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListTopics;

  /// @brief Field Publish, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Publish, put = setStaticF_Publish))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Publish;

  /// @brief Field RemovePermission, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemovePermission, put = setStaticF_RemovePermission))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemovePermission;

  /// @brief Field SetEndpointAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetEndpointAttributes, put = setStaticF_SetEndpointAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetEndpointAttributes;

  /// @brief Field SetPlatformApplicationAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetPlatformApplicationAttributes,
                             put = setStaticF_SetPlatformApplicationAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetPlatformApplicationAttributes;

  /// @brief Field SetSubscriptionAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetSubscriptionAttributes, put = setStaticF_SetSubscriptionAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetSubscriptionAttributes;

  /// @brief Field SetTopicAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetTopicAttributes, put = setStaticF_SetTopicAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetTopicAttributes;

  /// @brief Field Subscribe, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Subscribe, put = setStaticF_Subscribe))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Subscribe;

  /// @brief Field Unsubscribe, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Unsubscribe, put = setStaticF_Unsubscribe))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Unsubscribe;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddPermission();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllSNSActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ConfirmSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreatePlatformApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreatePlatformEndpoint();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateTopic();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteEndpoint();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeletePlatformApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTopic();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetEndpointAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetPlatformApplicationAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetSubscriptionAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetTopicAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListEndpointsByPlatformApplication();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListPlatformApplications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListSubscriptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListSubscriptionsByTopic();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListTopics();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Publish();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemovePermission();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetEndpointAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetPlatformApplicationAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetSubscriptionAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetTopicAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Subscribe();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Unsubscribe();

  static inline void setStaticF_AddPermission(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllSNSActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ConfirmSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreatePlatformApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreatePlatformEndpoint(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateTopic(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteEndpoint(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeletePlatformApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTopic(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetEndpointAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetPlatformApplicationAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetSubscriptionAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetTopicAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListEndpointsByPlatformApplication(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListPlatformApplications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListSubscriptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListSubscriptionsByTopic(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListTopics(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Publish(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemovePermission(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetEndpointAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetPlatformApplicationAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetSubscriptionAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetTopicAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Subscribe(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Unsubscribe(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SNSActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SNSActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SNSActionIdentifiers(SNSActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SNSActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SNSActionIdentifiers(SNSActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SNSActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SNSActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SNSActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "SNSActionIdentifiers");
