#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BillingActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class BillingActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::BillingActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::BillingActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::BillingActionIdentifiers*
class CORDL_TYPE BillingActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllBillingActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllBillingActions, put = setStaticF_AllBillingActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllBillingActions;

  /// @brief Field ModifyAccount, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyAccount, put = setStaticF_ModifyAccount))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyAccount;

  /// @brief Field ModifyBilling, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyBilling, put = setStaticF_ModifyBilling))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyBilling;

  /// @brief Field ModifyPaymentMethods, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyPaymentMethods, put = setStaticF_ModifyPaymentMethods))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyPaymentMethods;

  /// @brief Field ViewAccount, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ViewAccount, put = setStaticF_ViewAccount))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ViewAccount;

  /// @brief Field ViewBilling, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ViewBilling, put = setStaticF_ViewBilling))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ViewBilling;

  /// @brief Field ViewPaymentMethods, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ViewPaymentMethods, put = setStaticF_ViewPaymentMethods))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ViewPaymentMethods;

  /// @brief Field ViewUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ViewUsage, put = setStaticF_ViewUsage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ViewUsage;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllBillingActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyAccount();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyBilling();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyPaymentMethods();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ViewAccount();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ViewBilling();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ViewPaymentMethods();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ViewUsage();

  static inline void setStaticF_AllBillingActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyAccount(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyBilling(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyPaymentMethods(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ViewAccount(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ViewBilling(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ViewPaymentMethods(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ViewUsage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BillingActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BillingActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BillingActionIdentifiers(BillingActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BillingActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BillingActionIdentifiers(BillingActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::BillingActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::BillingActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::BillingActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "BillingActionIdentifiers");
