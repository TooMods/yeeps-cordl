#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CognitoIdentityActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CognitoIdentityActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoIdentityActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CognitoIdentityActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CognitoIdentityActionIdentifiers*
class CORDL_TYPE CognitoIdentityActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCognitoIdentityActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCognitoIdentityActions, put = setStaticF_AllCognitoIdentityActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCognitoIdentityActions;

  /// @brief Field CreateIdentityPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateIdentityPool, put = setStaticF_CreateIdentityPool))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateIdentityPool;

  /// @brief Field DeleteIdentityPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteIdentityPool, put = setStaticF_DeleteIdentityPool))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteIdentityPool;

  /// @brief Field DescribeIdentityPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeIdentityPool, put = setStaticF_DescribeIdentityPool))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeIdentityPool;

  /// @brief Field ListIdentities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListIdentities, put = setStaticF_ListIdentities))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListIdentities;

  /// @brief Field ListIdentityPools, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListIdentityPools, put = setStaticF_ListIdentityPools))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListIdentityPools;

  /// @brief Field UpdateIdentityPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateIdentityPool, put = setStaticF_UpdateIdentityPool))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateIdentityPool;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCognitoIdentityActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateIdentityPool();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteIdentityPool();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeIdentityPool();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListIdentities();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListIdentityPools();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateIdentityPool();

  static inline void setStaticF_AllCognitoIdentityActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateIdentityPool(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteIdentityPool(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeIdentityPool(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListIdentities(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListIdentityPools(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateIdentityPool(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CognitoIdentityActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CognitoIdentityActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CognitoIdentityActionIdentifiers(CognitoIdentityActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CognitoIdentityActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CognitoIdentityActionIdentifiers(CognitoIdentityActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoIdentityActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoIdentityActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoIdentityActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "CognitoIdentityActionIdentifiers");
