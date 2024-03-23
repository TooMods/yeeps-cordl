#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SQSActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class SQSActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SQSActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SQSActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SQSActionIdentifiers*
class CORDL_TYPE SQSActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AddPermission, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddPermission, put = setStaticF_AddPermission))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddPermission;

  /// @brief Field AllSQSActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllSQSActions, put = setStaticF_AllSQSActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllSQSActions;

  /// @brief Field ChangeMessageVisibility, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ChangeMessageVisibility, put = setStaticF_ChangeMessageVisibility))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ChangeMessageVisibility;

  /// @brief Field CreateQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateQueue, put = setStaticF_CreateQueue))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateQueue;

  /// @brief Field DeleteMessage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteMessage, put = setStaticF_DeleteMessage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteMessage;

  /// @brief Field DeleteQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteQueue, put = setStaticF_DeleteQueue))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteQueue;

  /// @brief Field GetQueueAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetQueueAttributes, put = setStaticF_GetQueueAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetQueueAttributes;

  /// @brief Field GetQueueUrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetQueueUrl, put = setStaticF_GetQueueUrl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetQueueUrl;

  /// @brief Field ListQueues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListQueues, put = setStaticF_ListQueues))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListQueues;

  /// @brief Field ReceiveMessage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReceiveMessage, put = setStaticF_ReceiveMessage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReceiveMessage;

  /// @brief Field RemovePermission, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemovePermission, put = setStaticF_RemovePermission))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemovePermission;

  /// @brief Field SendMessage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendMessage, put = setStaticF_SendMessage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SendMessage;

  /// @brief Field SetQueueAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetQueueAttributes, put = setStaticF_SetQueueAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetQueueAttributes;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddPermission();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllSQSActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ChangeMessageVisibility();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateQueue();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteMessage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteQueue();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetQueueAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetQueueUrl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListQueues();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReceiveMessage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemovePermission();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SendMessage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetQueueAttributes();

  static inline void setStaticF_AddPermission(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllSQSActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ChangeMessageVisibility(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateQueue(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteMessage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteQueue(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetQueueAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetQueueUrl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListQueues(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReceiveMessage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemovePermission(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SendMessage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetQueueAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SQSActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SQSActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SQSActionIdentifiers(SQSActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SQSActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SQSActionIdentifiers(SQSActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SQSActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SQSActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SQSActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "SQSActionIdentifiers");
