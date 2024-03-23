#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ZocaloActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class ZocaloActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ZocaloActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ZocaloActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ZocaloActionIdentifiers*
class CORDL_TYPE ZocaloActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field ActivateUser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ActivateUser, put = setStaticF_ActivateUser))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ActivateUser;

  /// @brief Field AddUserToGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddUserToGroup, put = setStaticF_AddUserToGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddUserToGroup;

  /// @brief Field AllZocaloActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllZocaloActions, put = setStaticF_AllZocaloActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllZocaloActions;

  /// @brief Field CheckAlias, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CheckAlias, put = setStaticF_CheckAlias))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CheckAlias;

  /// @brief Field CreateInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateInstance, put = setStaticF_CreateInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateInstance;

  /// @brief Field DeactivateUser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeactivateUser, put = setStaticF_DeactivateUser))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeactivateUser;

  /// @brief Field DeleteInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteInstance, put = setStaticF_DeleteInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteInstance;

  /// @brief Field DeregisterDirectory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeregisterDirectory, put = setStaticF_DeregisterDirectory))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeregisterDirectory;

  /// @brief Field DescribeAvailableDirectories, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAvailableDirectories,
                             put = setStaticF_DescribeAvailableDirectories))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAvailableDirectories;

  /// @brief Field DescribeInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeInstances, put = setStaticF_DescribeInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeInstances;

  /// @brief Field RegisterDirectory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterDirectory, put = setStaticF_RegisterDirectory))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterDirectory;

  /// @brief Field RemoveUserFromGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemoveUserFromGroup, put = setStaticF_RemoveUserFromGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemoveUserFromGroup;

  /// @brief Field UpdateInstanceAlias, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateInstanceAlias, put = setStaticF_UpdateInstanceAlias))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateInstanceAlias;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ActivateUser();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddUserToGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllZocaloActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CheckAlias();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeactivateUser();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeregisterDirectory();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAvailableDirectories();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterDirectory();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemoveUserFromGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateInstanceAlias();

  static inline void setStaticF_ActivateUser(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddUserToGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllZocaloActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CheckAlias(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeactivateUser(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeregisterDirectory(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAvailableDirectories(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterDirectory(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemoveUserFromGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateInstanceAlias(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZocaloActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZocaloActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZocaloActionIdentifiers(ZocaloActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZocaloActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZocaloActionIdentifiers(ZocaloActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ZocaloActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ZocaloActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ZocaloActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "ZocaloActionIdentifiers");
