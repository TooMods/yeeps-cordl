#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Route53ActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class Route53ActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::Route53ActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::Route53ActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::Route53ActionIdentifiers*
class CORDL_TYPE Route53ActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllRoute53Actions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllRoute53Actions, put = setStaticF_AllRoute53Actions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllRoute53Actions;

  /// @brief Field ChangeResourceRecordSets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ChangeResourceRecordSets, put = setStaticF_ChangeResourceRecordSets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ChangeResourceRecordSets;

  /// @brief Field CreateHostedZone, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateHostedZone, put = setStaticF_CreateHostedZone))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateHostedZone;

  /// @brief Field DeleteHostedZone, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteHostedZone, put = setStaticF_DeleteHostedZone))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteHostedZone;

  /// @brief Field GetChange, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetChange, put = setStaticF_GetChange))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetChange;

  /// @brief Field GetHostedZone, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetHostedZone, put = setStaticF_GetHostedZone))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetHostedZone;

  /// @brief Field ListHostedZones, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListHostedZones, put = setStaticF_ListHostedZones))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListHostedZones;

  /// @brief Field ListResourceRecordSets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListResourceRecordSets, put = setStaticF_ListResourceRecordSets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListResourceRecordSets;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllRoute53Actions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ChangeResourceRecordSets();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateHostedZone();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteHostedZone();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetChange();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetHostedZone();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListHostedZones();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListResourceRecordSets();

  static inline void setStaticF_AllRoute53Actions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ChangeResourceRecordSets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateHostedZone(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteHostedZone(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetChange(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetHostedZone(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListHostedZones(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListResourceRecordSets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Route53ActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Route53ActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Route53ActionIdentifiers(Route53ActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Route53ActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Route53ActionIdentifiers(Route53ActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::Route53ActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::Route53ActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::Route53ActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "Route53ActionIdentifiers");
