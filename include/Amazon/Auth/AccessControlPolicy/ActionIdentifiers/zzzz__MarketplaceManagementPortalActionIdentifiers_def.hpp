#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MarketplaceManagementPortalActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class MarketplaceManagementPortalActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceManagementPortalActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::MarketplaceManagementPortalActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::MarketplaceManagementPortalActionIdentifiers*
class CORDL_TYPE MarketplaceManagementPortalActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllMarketplaceManagementPortalActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllMarketplaceManagementPortalActions,
                             put = setStaticF_AllMarketplaceManagementPortalActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllMarketplaceManagementPortalActions;

  /// @brief Field uploadFiles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_uploadFiles, put = setStaticF_uploadFiles))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* uploadFiles;

  /// @brief Field viewMarketing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_viewMarketing, put = setStaticF_viewMarketing))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* viewMarketing;

  /// @brief Field viewReports, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_viewReports, put = setStaticF_viewReports))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* viewReports;

  /// @brief Field viewSupport, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_viewSupport, put = setStaticF_viewSupport))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* viewSupport;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllMarketplaceManagementPortalActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_uploadFiles();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_viewMarketing();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_viewReports();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_viewSupport();

  static inline void setStaticF_AllMarketplaceManagementPortalActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_uploadFiles(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_viewMarketing(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_viewReports(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_viewSupport(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarketplaceManagementPortalActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarketplaceManagementPortalActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarketplaceManagementPortalActionIdentifiers(MarketplaceManagementPortalActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarketplaceManagementPortalActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarketplaceManagementPortalActionIdentifiers(MarketplaceManagementPortalActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceManagementPortalActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceManagementPortalActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MarketplaceManagementPortalActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "MarketplaceManagementPortalActionIdentifiers");
