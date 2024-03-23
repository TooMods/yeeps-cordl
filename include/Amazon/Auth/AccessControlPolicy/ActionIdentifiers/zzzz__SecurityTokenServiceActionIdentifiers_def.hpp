#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SecurityTokenServiceActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class SecurityTokenServiceActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SecurityTokenServiceActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SecurityTokenServiceActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SecurityTokenServiceActionIdentifiers*
class CORDL_TYPE SecurityTokenServiceActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllSecurityTokenServiceActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllSecurityTokenServiceActions,
                             put = setStaticF_AllSecurityTokenServiceActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllSecurityTokenServiceActions;

  /// @brief Field AssumeRole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssumeRole, put = setStaticF_AssumeRole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AssumeRole;

  /// @brief Field GetFederationToken, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetFederationToken, put = setStaticF_GetFederationToken))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetFederationToken;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllSecurityTokenServiceActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AssumeRole();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetFederationToken();

  static inline void setStaticF_AllSecurityTokenServiceActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AssumeRole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetFederationToken(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityTokenServiceActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityTokenServiceActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityTokenServiceActionIdentifiers(SecurityTokenServiceActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityTokenServiceActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityTokenServiceActionIdentifiers(SecurityTokenServiceActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SecurityTokenServiceActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SecurityTokenServiceActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SecurityTokenServiceActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "SecurityTokenServiceActionIdentifiers");
