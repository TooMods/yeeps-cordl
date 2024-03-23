#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IdentityandAccessManagementActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class IdentityandAccessManagementActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::IdentityandAccessManagementActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::IdentityandAccessManagementActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::IdentityandAccessManagementActionIdentifiers*
class CORDL_TYPE IdentityandAccessManagementActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AddRoleToInstanceProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddRoleToInstanceProfile, put = setStaticF_AddRoleToInstanceProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddRoleToInstanceProfile;

  /// @brief Field AddUserToGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddUserToGroup, put = setStaticF_AddUserToGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddUserToGroup;

  /// @brief Field AllIdentityandAccessManagementActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllIdentityandAccessManagementActions,
                             put = setStaticF_AllIdentityandAccessManagementActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllIdentityandAccessManagementActions;

  /// @brief Field ChangePassword, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ChangePassword, put = setStaticF_ChangePassword))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ChangePassword;

  /// @brief Field CreateAccessKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateAccessKey, put = setStaticF_CreateAccessKey))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateAccessKey;

  /// @brief Field CreateAccountAlias, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateAccountAlias, put = setStaticF_CreateAccountAlias))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateAccountAlias;

  /// @brief Field CreateGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateGroup, put = setStaticF_CreateGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateGroup;

  /// @brief Field CreateInstanceProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateInstanceProfile, put = setStaticF_CreateInstanceProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateInstanceProfile;

  /// @brief Field CreateLoginProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLoginProfile, put = setStaticF_CreateLoginProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLoginProfile;

  /// @brief Field CreateRole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateRole, put = setStaticF_CreateRole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateRole;

  /// @brief Field CreateSAMLProvider, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSAMLProvider, put = setStaticF_CreateSAMLProvider))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSAMLProvider;

  /// @brief Field CreateUser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateUser, put = setStaticF_CreateUser))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateUser;

  /// @brief Field CreateVirtualMFADevice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVirtualMFADevice, put = setStaticF_CreateVirtualMFADevice))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVirtualMFADevice;

  /// @brief Field DeactivateMFADevice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeactivateMFADevice, put = setStaticF_DeactivateMFADevice))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeactivateMFADevice;

  /// @brief Field DeleteAccessKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteAccessKey, put = setStaticF_DeleteAccessKey))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteAccessKey;

  /// @brief Field DeleteAccountAlias, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteAccountAlias, put = setStaticF_DeleteAccountAlias))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteAccountAlias;

  /// @brief Field DeleteAccountPasswordPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteAccountPasswordPolicy,
                             put = setStaticF_DeleteAccountPasswordPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteAccountPasswordPolicy;

  /// @brief Field DeleteGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteGroup, put = setStaticF_DeleteGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteGroup;

  /// @brief Field DeleteGroupPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteGroupPolicy, put = setStaticF_DeleteGroupPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteGroupPolicy;

  /// @brief Field DeleteInstanceProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteInstanceProfile, put = setStaticF_DeleteInstanceProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteInstanceProfile;

  /// @brief Field DeleteLoginProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLoginProfile, put = setStaticF_DeleteLoginProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLoginProfile;

  /// @brief Field DeleteRole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteRole, put = setStaticF_DeleteRole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteRole;

  /// @brief Field DeleteRolePolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteRolePolicy, put = setStaticF_DeleteRolePolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteRolePolicy;

  /// @brief Field DeleteSAMLProvider, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSAMLProvider, put = setStaticF_DeleteSAMLProvider))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSAMLProvider;

  /// @brief Field DeleteServerCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteServerCertificate, put = setStaticF_DeleteServerCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteServerCertificate;

  /// @brief Field DeleteSigningCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSigningCertificate, put = setStaticF_DeleteSigningCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSigningCertificate;

  /// @brief Field DeleteUser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteUser, put = setStaticF_DeleteUser))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteUser;

  /// @brief Field DeleteUserPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteUserPolicy, put = setStaticF_DeleteUserPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteUserPolicy;

  /// @brief Field DeleteVirtualMFADevice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVirtualMFADevice, put = setStaticF_DeleteVirtualMFADevice))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVirtualMFADevice;

  /// @brief Field EnableMFADevice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableMFADevice, put = setStaticF_EnableMFADevice))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableMFADevice;

  /// @brief Field GenerateCredentialReport, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GenerateCredentialReport, put = setStaticF_GenerateCredentialReport))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GenerateCredentialReport;

  /// @brief Field GetAccountPasswordPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetAccountPasswordPolicy, put = setStaticF_GetAccountPasswordPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetAccountPasswordPolicy;

  /// @brief Field GetAccountSummary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetAccountSummary, put = setStaticF_GetAccountSummary))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetAccountSummary;

  /// @brief Field GetCredentialReport, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetCredentialReport, put = setStaticF_GetCredentialReport))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetCredentialReport;

  /// @brief Field GetGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetGroup, put = setStaticF_GetGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetGroup;

  /// @brief Field GetGroupPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetGroupPolicy, put = setStaticF_GetGroupPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetGroupPolicy;

  /// @brief Field GetInstanceProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetInstanceProfile, put = setStaticF_GetInstanceProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetInstanceProfile;

  /// @brief Field GetLoginProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetLoginProfile, put = setStaticF_GetLoginProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetLoginProfile;

  /// @brief Field GetRole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetRole, put = setStaticF_GetRole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetRole;

  /// @brief Field GetRolePolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetRolePolicy, put = setStaticF_GetRolePolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetRolePolicy;

  /// @brief Field GetSAMLProvider, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetSAMLProvider, put = setStaticF_GetSAMLProvider))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetSAMLProvider;

  /// @brief Field GetServerCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetServerCertificate, put = setStaticF_GetServerCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetServerCertificate;

  /// @brief Field GetUser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetUser, put = setStaticF_GetUser))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetUser;

  /// @brief Field GetUserPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetUserPolicy, put = setStaticF_GetUserPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetUserPolicy;

  /// @brief Field ListAccessKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListAccessKeys, put = setStaticF_ListAccessKeys))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListAccessKeys;

  /// @brief Field ListAccountAliases, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListAccountAliases, put = setStaticF_ListAccountAliases))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListAccountAliases;

  /// @brief Field ListGroupPolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListGroupPolicies, put = setStaticF_ListGroupPolicies))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListGroupPolicies;

  /// @brief Field ListGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListGroups, put = setStaticF_ListGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListGroups;

  /// @brief Field ListGroupsForUser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListGroupsForUser, put = setStaticF_ListGroupsForUser))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListGroupsForUser;

  /// @brief Field ListInstanceProfiles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListInstanceProfiles, put = setStaticF_ListInstanceProfiles))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListInstanceProfiles;

  /// @brief Field ListInstanceProfilesForRole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListInstanceProfilesForRole,
                             put = setStaticF_ListInstanceProfilesForRole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListInstanceProfilesForRole;

  /// @brief Field ListMFADevices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListMFADevices, put = setStaticF_ListMFADevices))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListMFADevices;

  /// @brief Field ListRolePolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListRolePolicies, put = setStaticF_ListRolePolicies))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListRolePolicies;

  /// @brief Field ListRoles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListRoles, put = setStaticF_ListRoles))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListRoles;

  /// @brief Field ListSAMLProviders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListSAMLProviders, put = setStaticF_ListSAMLProviders))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListSAMLProviders;

  /// @brief Field ListServerCertificates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListServerCertificates, put = setStaticF_ListServerCertificates))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListServerCertificates;

  /// @brief Field ListSigningCertificates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListSigningCertificates, put = setStaticF_ListSigningCertificates))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListSigningCertificates;

  /// @brief Field ListUserPolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListUserPolicies, put = setStaticF_ListUserPolicies))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListUserPolicies;

  /// @brief Field ListUsers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListUsers, put = setStaticF_ListUsers))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListUsers;

  /// @brief Field ListVirtualMFADevices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListVirtualMFADevices, put = setStaticF_ListVirtualMFADevices))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListVirtualMFADevices;

  /// @brief Field PassRole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PassRole, put = setStaticF_PassRole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PassRole;

  /// @brief Field PutGroupPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutGroupPolicy, put = setStaticF_PutGroupPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutGroupPolicy;

  /// @brief Field PutRolePolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutRolePolicy, put = setStaticF_PutRolePolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutRolePolicy;

  /// @brief Field PutUserPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutUserPolicy, put = setStaticF_PutUserPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutUserPolicy;

  /// @brief Field RemoveRoleFromInstanceProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemoveRoleFromInstanceProfile,
                             put = setStaticF_RemoveRoleFromInstanceProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemoveRoleFromInstanceProfile;

  /// @brief Field RemoveUserFromGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemoveUserFromGroup, put = setStaticF_RemoveUserFromGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemoveUserFromGroup;

  /// @brief Field ResyncMFADevice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResyncMFADevice, put = setStaticF_ResyncMFADevice))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResyncMFADevice;

  /// @brief Field UpdateAccessKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateAccessKey, put = setStaticF_UpdateAccessKey))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateAccessKey;

  /// @brief Field UpdateAccountPasswordPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateAccountPasswordPolicy,
                             put = setStaticF_UpdateAccountPasswordPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateAccountPasswordPolicy;

  /// @brief Field UpdateAssumeRolePolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateAssumeRolePolicy, put = setStaticF_UpdateAssumeRolePolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateAssumeRolePolicy;

  /// @brief Field UpdateGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateGroup, put = setStaticF_UpdateGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateGroup;

  /// @brief Field UpdateLoginProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateLoginProfile, put = setStaticF_UpdateLoginProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateLoginProfile;

  /// @brief Field UpdateSAMLProvider, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateSAMLProvider, put = setStaticF_UpdateSAMLProvider))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateSAMLProvider;

  /// @brief Field UpdateServerCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateServerCertificate, put = setStaticF_UpdateServerCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateServerCertificate;

  /// @brief Field UpdateSigningCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateSigningCertificate, put = setStaticF_UpdateSigningCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateSigningCertificate;

  /// @brief Field UpdateUser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateUser, put = setStaticF_UpdateUser))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateUser;

  /// @brief Field UploadServerCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UploadServerCertificate, put = setStaticF_UploadServerCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UploadServerCertificate;

  /// @brief Field UploadSigningCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UploadSigningCertificate, put = setStaticF_UploadSigningCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UploadSigningCertificate;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddRoleToInstanceProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddUserToGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllIdentityandAccessManagementActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ChangePassword();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateAccessKey();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateAccountAlias();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateInstanceProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLoginProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateRole();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSAMLProvider();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateUser();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVirtualMFADevice();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeactivateMFADevice();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteAccessKey();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteAccountAlias();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteAccountPasswordPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteGroupPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteInstanceProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLoginProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteRole();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteRolePolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSAMLProvider();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteServerCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSigningCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteUser();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteUserPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVirtualMFADevice();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableMFADevice();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GenerateCredentialReport();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetAccountPasswordPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetAccountSummary();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetCredentialReport();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetGroupPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetInstanceProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetLoginProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetRole();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetRolePolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetSAMLProvider();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetServerCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetUser();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetUserPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListAccessKeys();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListAccountAliases();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListGroupPolicies();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListGroupsForUser();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListInstanceProfiles();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListInstanceProfilesForRole();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListMFADevices();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListRolePolicies();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListRoles();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListSAMLProviders();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListServerCertificates();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListSigningCertificates();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListUserPolicies();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListUsers();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListVirtualMFADevices();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PassRole();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutGroupPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutRolePolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutUserPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemoveRoleFromInstanceProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemoveUserFromGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResyncMFADevice();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateAccessKey();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateAccountPasswordPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateAssumeRolePolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateLoginProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateSAMLProvider();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateServerCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateSigningCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateUser();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UploadServerCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UploadSigningCertificate();

  static inline void setStaticF_AddRoleToInstanceProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddUserToGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllIdentityandAccessManagementActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ChangePassword(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateAccessKey(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateAccountAlias(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateInstanceProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLoginProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateRole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSAMLProvider(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateUser(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVirtualMFADevice(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeactivateMFADevice(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteAccessKey(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteAccountAlias(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteAccountPasswordPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteGroupPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteInstanceProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLoginProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteRole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteRolePolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSAMLProvider(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteServerCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSigningCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteUser(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteUserPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVirtualMFADevice(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableMFADevice(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GenerateCredentialReport(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetAccountPasswordPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetAccountSummary(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetCredentialReport(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetGroupPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetInstanceProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetLoginProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetRole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetRolePolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetSAMLProvider(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetServerCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetUser(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetUserPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListAccessKeys(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListAccountAliases(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListGroupPolicies(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListGroupsForUser(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListInstanceProfiles(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListInstanceProfilesForRole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListMFADevices(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListRolePolicies(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListRoles(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListSAMLProviders(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListServerCertificates(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListSigningCertificates(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListUserPolicies(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListUsers(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListVirtualMFADevices(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PassRole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutGroupPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutRolePolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutUserPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemoveRoleFromInstanceProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemoveUserFromGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResyncMFADevice(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateAccessKey(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateAccountPasswordPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateAssumeRolePolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateLoginProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateSAMLProvider(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateServerCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateSigningCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateUser(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UploadServerCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UploadSigningCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityandAccessManagementActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdentityandAccessManagementActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityandAccessManagementActionIdentifiers(IdentityandAccessManagementActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityandAccessManagementActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityandAccessManagementActionIdentifiers(IdentityandAccessManagementActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::IdentityandAccessManagementActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::IdentityandAccessManagementActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::IdentityandAccessManagementActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "IdentityandAccessManagementActionIdentifiers");
