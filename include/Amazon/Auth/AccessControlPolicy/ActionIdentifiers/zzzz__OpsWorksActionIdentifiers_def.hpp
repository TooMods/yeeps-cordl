#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OpsWorksActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class OpsWorksActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::OpsWorksActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::OpsWorksActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::OpsWorksActionIdentifiers*
class CORDL_TYPE OpsWorksActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllOpsWorksActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllOpsWorksActions, put = setStaticF_AllOpsWorksActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllOpsWorksActions;

  /// @brief Field AssignVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssignVolume, put = setStaticF_AssignVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AssignVolume;

  /// @brief Field AssociateElasticIp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssociateElasticIp, put = setStaticF_AssociateElasticIp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AssociateElasticIp;

  /// @brief Field AttachElasticLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AttachElasticLoadBalancer, put = setStaticF_AttachElasticLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AttachElasticLoadBalancer;

  /// @brief Field CloneStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CloneStack, put = setStaticF_CloneStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CloneStack;

  /// @brief Field CreateApp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateApp, put = setStaticF_CreateApp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateApp;

  /// @brief Field CreateDeployment, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDeployment, put = setStaticF_CreateDeployment))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDeployment;

  /// @brief Field CreateInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateInstance, put = setStaticF_CreateInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateInstance;

  /// @brief Field CreateLayer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLayer, put = setStaticF_CreateLayer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLayer;

  /// @brief Field CreateStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateStack, put = setStaticF_CreateStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateStack;

  /// @brief Field CreateUserProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateUserProfile, put = setStaticF_CreateUserProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateUserProfile;

  /// @brief Field DeleteApp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteApp, put = setStaticF_DeleteApp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteApp;

  /// @brief Field DeleteInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteInstance, put = setStaticF_DeleteInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteInstance;

  /// @brief Field DeleteLayer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLayer, put = setStaticF_DeleteLayer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLayer;

  /// @brief Field DeleteStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteStack, put = setStaticF_DeleteStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteStack;

  /// @brief Field DeleteUserProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteUserProfile, put = setStaticF_DeleteUserProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteUserProfile;

  /// @brief Field DeregisterElasticIp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeregisterElasticIp, put = setStaticF_DeregisterElasticIp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeregisterElasticIp;

  /// @brief Field DeregisterVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeregisterVolume, put = setStaticF_DeregisterVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeregisterVolume;

  /// @brief Field DescribeApps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeApps, put = setStaticF_DescribeApps))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeApps;

  /// @brief Field DescribeCommands, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCommands, put = setStaticF_DescribeCommands))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCommands;

  /// @brief Field DescribeDeployments, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDeployments, put = setStaticF_DescribeDeployments))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDeployments;

  /// @brief Field DescribeElasticIps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeElasticIps, put = setStaticF_DescribeElasticIps))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeElasticIps;

  /// @brief Field DescribeElasticLoadBalancers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeElasticLoadBalancers,
                             put = setStaticF_DescribeElasticLoadBalancers))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeElasticLoadBalancers;

  /// @brief Field DescribeInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeInstances, put = setStaticF_DescribeInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeInstances;

  /// @brief Field DescribeLayers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLayers, put = setStaticF_DescribeLayers))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLayers;

  /// @brief Field DescribeLoadBasedAutoScaling, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLoadBasedAutoScaling,
                             put = setStaticF_DescribeLoadBasedAutoScaling))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLoadBasedAutoScaling;

  /// @brief Field DescribePermissions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribePermissions, put = setStaticF_DescribePermissions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribePermissions;

  /// @brief Field DescribeRaidArrays, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeRaidArrays, put = setStaticF_DescribeRaidArrays))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeRaidArrays;

  /// @brief Field DescribeServiceErrors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeServiceErrors, put = setStaticF_DescribeServiceErrors))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeServiceErrors;

  /// @brief Field DescribeStacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStacks, put = setStaticF_DescribeStacks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStacks;

  /// @brief Field DescribeTimeBasedAutoScaling, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTimeBasedAutoScaling,
                             put = setStaticF_DescribeTimeBasedAutoScaling))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTimeBasedAutoScaling;

  /// @brief Field DescribeUserProfiles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeUserProfiles, put = setStaticF_DescribeUserProfiles))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeUserProfiles;

  /// @brief Field DescribeVolumes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVolumes, put = setStaticF_DescribeVolumes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVolumes;

  /// @brief Field DetachElasticLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DetachElasticLoadBalancer, put = setStaticF_DetachElasticLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DetachElasticLoadBalancer;

  /// @brief Field DisassociateElasticIp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisassociateElasticIp, put = setStaticF_DisassociateElasticIp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisassociateElasticIp;

  /// @brief Field GetHostnameSuggestion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetHostnameSuggestion, put = setStaticF_GetHostnameSuggestion))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetHostnameSuggestion;

  /// @brief Field RebootInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RebootInstance, put = setStaticF_RebootInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RebootInstance;

  /// @brief Field RegisterElasticIp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterElasticIp, put = setStaticF_RegisterElasticIp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterElasticIp;

  /// @brief Field RegisterVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterVolume, put = setStaticF_RegisterVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterVolume;

  /// @brief Field SetLoadBasedAutoScaling, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetLoadBasedAutoScaling, put = setStaticF_SetLoadBasedAutoScaling))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetLoadBasedAutoScaling;

  /// @brief Field SetPermission, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetPermission, put = setStaticF_SetPermission))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetPermission;

  /// @brief Field SetTimeBasedAutoScaling, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetTimeBasedAutoScaling, put = setStaticF_SetTimeBasedAutoScaling))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetTimeBasedAutoScaling;

  /// @brief Field StartInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartInstance, put = setStaticF_StartInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartInstance;

  /// @brief Field StartStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartStack, put = setStaticF_StartStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartStack;

  /// @brief Field StopInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StopInstance, put = setStaticF_StopInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StopInstance;

  /// @brief Field StopStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StopStack, put = setStaticF_StopStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StopStack;

  /// @brief Field UnassignVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnassignVolume, put = setStaticF_UnassignVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UnassignVolume;

  /// @brief Field UpdateApp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateApp, put = setStaticF_UpdateApp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateApp;

  /// @brief Field UpdateElasticIp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateElasticIp, put = setStaticF_UpdateElasticIp))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateElasticIp;

  /// @brief Field UpdateInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateInstance, put = setStaticF_UpdateInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateInstance;

  /// @brief Field UpdateLayer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateLayer, put = setStaticF_UpdateLayer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateLayer;

  /// @brief Field UpdateStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateStack, put = setStaticF_UpdateStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateStack;

  /// @brief Field UpdateUserProfile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateUserProfile, put = setStaticF_UpdateUserProfile))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateUserProfile;

  /// @brief Field UpdateVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateVolume, put = setStaticF_UpdateVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateVolume;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllOpsWorksActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AssignVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AssociateElasticIp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AttachElasticLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CloneStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateApp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDeployment();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLayer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateUserProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteApp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLayer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteUserProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeregisterElasticIp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeregisterVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeApps();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCommands();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDeployments();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeElasticIps();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeElasticLoadBalancers();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLayers();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLoadBasedAutoScaling();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribePermissions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeRaidArrays();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeServiceErrors();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStacks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTimeBasedAutoScaling();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeUserProfiles();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVolumes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DetachElasticLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisassociateElasticIp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetHostnameSuggestion();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RebootInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterElasticIp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetLoadBasedAutoScaling();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetPermission();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetTimeBasedAutoScaling();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StopInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StopStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UnassignVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateApp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateElasticIp();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateLayer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateUserProfile();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateVolume();

  static inline void setStaticF_AllOpsWorksActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AssignVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AssociateElasticIp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AttachElasticLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CloneStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateApp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDeployment(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLayer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateUserProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteApp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLayer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteUserProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeregisterElasticIp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeregisterVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeApps(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCommands(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDeployments(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeElasticIps(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeElasticLoadBalancers(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLayers(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLoadBasedAutoScaling(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribePermissions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeRaidArrays(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeServiceErrors(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStacks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTimeBasedAutoScaling(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeUserProfiles(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVolumes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DetachElasticLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisassociateElasticIp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetHostnameSuggestion(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RebootInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterElasticIp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetLoadBasedAutoScaling(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetPermission(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetTimeBasedAutoScaling(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StopInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StopStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UnassignVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateApp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateElasticIp(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateLayer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateUserProfile(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpsWorksActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpsWorksActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpsWorksActionIdentifiers(OpsWorksActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpsWorksActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpsWorksActionIdentifiers(OpsWorksActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::OpsWorksActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::OpsWorksActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::OpsWorksActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "OpsWorksActionIdentifiers");
