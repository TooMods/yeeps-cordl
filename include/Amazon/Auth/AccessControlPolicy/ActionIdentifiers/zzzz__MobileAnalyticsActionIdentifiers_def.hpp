#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MobileAnalyticsActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class MobileAnalyticsActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MobileAnalyticsActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::MobileAnalyticsActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::MobileAnalyticsActionIdentifiers*
class CORDL_TYPE MobileAnalyticsActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllMobileAnalyticsActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllMobileAnalyticsActions, put = setStaticF_AllMobileAnalyticsActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllMobileAnalyticsActions;

  /// @brief Field GetFinancialReports, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetFinancialReports, put = setStaticF_GetFinancialReports))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetFinancialReports;

  /// @brief Field GetReports, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetReports, put = setStaticF_GetReports))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetReports;

  /// @brief Field PutEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutEvents, put = setStaticF_PutEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutEvents;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllMobileAnalyticsActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetFinancialReports();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetReports();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutEvents();

  static inline void setStaticF_AllMobileAnalyticsActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetFinancialReports(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetReports(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAnalyticsActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileAnalyticsActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileAnalyticsActionIdentifiers(MobileAnalyticsActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileAnalyticsActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileAnalyticsActionIdentifiers(MobileAnalyticsActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MobileAnalyticsActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MobileAnalyticsActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::MobileAnalyticsActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "MobileAnalyticsActionIdentifiers");
