#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MarketplaceActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class MarketplaceActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::MarketplaceActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::MarketplaceActionIdentifiers*
class CORDL_TYPE MarketplaceActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllMarketplaceActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllMarketplaceActions, put = setStaticF_AllMarketplaceActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllMarketplaceActions;

  /// @brief Field Subscribe, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Subscribe, put = setStaticF_Subscribe))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Subscribe;

  /// @brief Field Unsubscribe, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Unsubscribe, put = setStaticF_Unsubscribe))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Unsubscribe;

  /// @brief Field ViewSubscriptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ViewSubscriptions, put = setStaticF_ViewSubscriptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ViewSubscriptions;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllMarketplaceActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Subscribe();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Unsubscribe();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ViewSubscriptions();

  static inline void setStaticF_AllMarketplaceActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Subscribe(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Unsubscribe(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ViewSubscriptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarketplaceActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarketplaceActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarketplaceActionIdentifiers(MarketplaceActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarketplaceActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarketplaceActionIdentifiers(MarketplaceActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "MarketplaceActionIdentifiers");
