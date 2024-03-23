#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ElasticLoadBalancingActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class ElasticLoadBalancingActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticLoadBalancingActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticLoadBalancingActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticLoadBalancingActionIdentifiers*
class CORDL_TYPE ElasticLoadBalancingActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllElasticLoadBalancingActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllElasticLoadBalancingActions,
                             put = setStaticF_AllElasticLoadBalancingActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllElasticLoadBalancingActions;

  /// @brief Field ApplySecurityGroupsToLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ApplySecurityGroupsToLoadBalancer,
                             put = setStaticF_ApplySecurityGroupsToLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ApplySecurityGroupsToLoadBalancer;

  /// @brief Field AttachLoadBalancerToSubnets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AttachLoadBalancerToSubnets,
                             put = setStaticF_AttachLoadBalancerToSubnets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AttachLoadBalancerToSubnets;

  /// @brief Field ConfigureHealthCheck, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConfigureHealthCheck, put = setStaticF_ConfigureHealthCheck))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ConfigureHealthCheck;

  /// @brief Field CreateAppCookieStickinessPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateAppCookieStickinessPolicy,
                             put = setStaticF_CreateAppCookieStickinessPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateAppCookieStickinessPolicy;

  /// @brief Field CreateLBCookieStickinessPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLBCookieStickinessPolicy,
                             put = setStaticF_CreateLBCookieStickinessPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLBCookieStickinessPolicy;

  /// @brief Field CreateLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLoadBalancer, put = setStaticF_CreateLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLoadBalancer;

  /// @brief Field CreateLoadBalancerListeners, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLoadBalancerListeners,
                             put = setStaticF_CreateLoadBalancerListeners))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLoadBalancerListeners;

  /// @brief Field CreateLoadBalancerPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLoadBalancerPolicy, put = setStaticF_CreateLoadBalancerPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLoadBalancerPolicy;

  /// @brief Field DeleteLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLoadBalancer, put = setStaticF_DeleteLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLoadBalancer;

  /// @brief Field DeleteLoadBalancerListeners, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLoadBalancerListeners,
                             put = setStaticF_DeleteLoadBalancerListeners))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLoadBalancerListeners;

  /// @brief Field DeleteLoadBalancerPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLoadBalancerPolicy, put = setStaticF_DeleteLoadBalancerPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLoadBalancerPolicy;

  /// @brief Field DeregisterInstancesFromLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeregisterInstancesFromLoadBalancer,
                             put = setStaticF_DeregisterInstancesFromLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeregisterInstancesFromLoadBalancer;

  /// @brief Field DescribeInstanceHealth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeInstanceHealth, put = setStaticF_DescribeInstanceHealth))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeInstanceHealth;

  /// @brief Field DescribeLoadBalancerAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLoadBalancerAttributes,
                             put = setStaticF_DescribeLoadBalancerAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLoadBalancerAttributes;

  /// @brief Field DescribeLoadBalancerPolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLoadBalancerPolicies,
                             put = setStaticF_DescribeLoadBalancerPolicies))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLoadBalancerPolicies;

  /// @brief Field DescribeLoadBalancerPolicyTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLoadBalancerPolicyTypes,
                             put = setStaticF_DescribeLoadBalancerPolicyTypes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLoadBalancerPolicyTypes;

  /// @brief Field DescribeLoadBalancers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLoadBalancers, put = setStaticF_DescribeLoadBalancers))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLoadBalancers;

  /// @brief Field DetachLoadBalancerFromSubnets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DetachLoadBalancerFromSubnets,
                             put = setStaticF_DetachLoadBalancerFromSubnets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DetachLoadBalancerFromSubnets;

  /// @brief Field DisableAvailabilityZonesForLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisableAvailabilityZonesForLoadBalancer,
                             put = setStaticF_DisableAvailabilityZonesForLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisableAvailabilityZonesForLoadBalancer;

  /// @brief Field EnableAvailabilityZonesForLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableAvailabilityZonesForLoadBalancer,
                             put = setStaticF_EnableAvailabilityZonesForLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableAvailabilityZonesForLoadBalancer;

  /// @brief Field ModifyLoadBalancerAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyLoadBalancerAttributes,
                             put = setStaticF_ModifyLoadBalancerAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyLoadBalancerAttributes;

  /// @brief Field RegisterInstancesWithLoadBalancer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterInstancesWithLoadBalancer,
                             put = setStaticF_RegisterInstancesWithLoadBalancer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterInstancesWithLoadBalancer;

  /// @brief Field SetLoadBalancerListenerSSLCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetLoadBalancerListenerSSLCertificate,
                             put = setStaticF_SetLoadBalancerListenerSSLCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetLoadBalancerListenerSSLCertificate;

  /// @brief Field SetLoadBalancerPoliciesForBackendServer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetLoadBalancerPoliciesForBackendServer,
                             put = setStaticF_SetLoadBalancerPoliciesForBackendServer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetLoadBalancerPoliciesForBackendServer;

  /// @brief Field SetLoadBalancerPoliciesOfListener, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetLoadBalancerPoliciesOfListener,
                             put = setStaticF_SetLoadBalancerPoliciesOfListener))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetLoadBalancerPoliciesOfListener;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllElasticLoadBalancingActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ApplySecurityGroupsToLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AttachLoadBalancerToSubnets();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ConfigureHealthCheck();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateAppCookieStickinessPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLBCookieStickinessPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLoadBalancerListeners();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLoadBalancerPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLoadBalancerListeners();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLoadBalancerPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeregisterInstancesFromLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeInstanceHealth();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLoadBalancerAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLoadBalancerPolicies();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLoadBalancerPolicyTypes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLoadBalancers();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DetachLoadBalancerFromSubnets();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisableAvailabilityZonesForLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableAvailabilityZonesForLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyLoadBalancerAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterInstancesWithLoadBalancer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetLoadBalancerListenerSSLCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetLoadBalancerPoliciesForBackendServer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetLoadBalancerPoliciesOfListener();

  static inline void setStaticF_AllElasticLoadBalancingActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ApplySecurityGroupsToLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AttachLoadBalancerToSubnets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ConfigureHealthCheck(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateAppCookieStickinessPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLBCookieStickinessPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLoadBalancerListeners(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLoadBalancerPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLoadBalancerListeners(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLoadBalancerPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeregisterInstancesFromLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeInstanceHealth(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLoadBalancerAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLoadBalancerPolicies(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLoadBalancerPolicyTypes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLoadBalancers(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DetachLoadBalancerFromSubnets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisableAvailabilityZonesForLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableAvailabilityZonesForLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyLoadBalancerAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterInstancesWithLoadBalancer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetLoadBalancerListenerSSLCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetLoadBalancerPoliciesForBackendServer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetLoadBalancerPoliciesOfListener(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElasticLoadBalancingActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElasticLoadBalancingActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElasticLoadBalancingActionIdentifiers(ElasticLoadBalancingActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElasticLoadBalancingActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElasticLoadBalancingActionIdentifiers(ElasticLoadBalancingActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticLoadBalancingActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticLoadBalancingActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticLoadBalancingActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "ElasticLoadBalancingActionIdentifiers");
