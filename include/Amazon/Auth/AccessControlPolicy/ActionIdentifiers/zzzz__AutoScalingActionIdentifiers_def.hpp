#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AutoScalingActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class AutoScalingActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AutoScalingActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::AutoScalingActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::AutoScalingActionIdentifiers*
class CORDL_TYPE AutoScalingActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllAutoScalingActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllAutoScalingActions, put = setStaticF_AllAutoScalingActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllAutoScalingActions;

  /// @brief Field CreateAutoScalingGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateAutoScalingGroup, put = setStaticF_CreateAutoScalingGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateAutoScalingGroup;

  /// @brief Field CreateLaunchConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLaunchConfiguration, put = setStaticF_CreateLaunchConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLaunchConfiguration;

  /// @brief Field CreateOrUpdateScalingTrigger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateOrUpdateScalingTrigger,
                             put = setStaticF_CreateOrUpdateScalingTrigger))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateOrUpdateScalingTrigger;

  /// @brief Field CreateOrUpdateTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateOrUpdateTags, put = setStaticF_CreateOrUpdateTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateOrUpdateTags;

  /// @brief Field DeleteAutoScalingGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteAutoScalingGroup, put = setStaticF_DeleteAutoScalingGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteAutoScalingGroup;

  /// @brief Field DeleteLaunchConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLaunchConfiguration, put = setStaticF_DeleteLaunchConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLaunchConfiguration;

  /// @brief Field DeleteNotificationConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteNotificationConfiguration,
                             put = setStaticF_DeleteNotificationConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteNotificationConfiguration;

  /// @brief Field DeletePolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeletePolicy, put = setStaticF_DeletePolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeletePolicy;

  /// @brief Field DeleteScheduledAction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteScheduledAction, put = setStaticF_DeleteScheduledAction))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteScheduledAction;

  /// @brief Field DeleteTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTags, put = setStaticF_DeleteTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTags;

  /// @brief Field DeleteTrigger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTrigger, put = setStaticF_DeleteTrigger))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTrigger;

  /// @brief Field DescribeAdjustmentTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAdjustmentTypes, put = setStaticF_DescribeAdjustmentTypes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAdjustmentTypes;

  /// @brief Field DescribeAutoScalingGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAutoScalingGroups, put = setStaticF_DescribeAutoScalingGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAutoScalingGroups;

  /// @brief Field DescribeAutoScalingInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAutoScalingInstances,
                             put = setStaticF_DescribeAutoScalingInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAutoScalingInstances;

  /// @brief Field DescribeAutoScalingNotificationTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAutoScalingNotificationTypes,
                             put = setStaticF_DescribeAutoScalingNotificationTypes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAutoScalingNotificationTypes;

  /// @brief Field DescribeLaunchConfigurations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLaunchConfigurations,
                             put = setStaticF_DescribeLaunchConfigurations))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLaunchConfigurations;

  /// @brief Field DescribeMetricCollectionTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeMetricCollectionTypes,
                             put = setStaticF_DescribeMetricCollectionTypes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeMetricCollectionTypes;

  /// @brief Field DescribeNotificationConfigurations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeNotificationConfigurations,
                             put = setStaticF_DescribeNotificationConfigurations))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeNotificationConfigurations;

  /// @brief Field DescribePolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribePolicies, put = setStaticF_DescribePolicies))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribePolicies;

  /// @brief Field DescribeScalingActivities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeScalingActivities, put = setStaticF_DescribeScalingActivities))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeScalingActivities;

  /// @brief Field DescribeScalingProcessTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeScalingProcessTypes,
                             put = setStaticF_DescribeScalingProcessTypes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeScalingProcessTypes;

  /// @brief Field DescribeScheduledActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeScheduledActions, put = setStaticF_DescribeScheduledActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeScheduledActions;

  /// @brief Field DescribeTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTags, put = setStaticF_DescribeTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTags;

  /// @brief Field DescribeTriggers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTriggers, put = setStaticF_DescribeTriggers))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTriggers;

  /// @brief Field DisableMetricsCollection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisableMetricsCollection, put = setStaticF_DisableMetricsCollection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisableMetricsCollection;

  /// @brief Field EnableMetricsCollection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableMetricsCollection, put = setStaticF_EnableMetricsCollection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableMetricsCollection;

  /// @brief Field ExecutePolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExecutePolicy, put = setStaticF_ExecutePolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ExecutePolicy;

  /// @brief Field PutNotificationConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutNotificationConfiguration,
                             put = setStaticF_PutNotificationConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutNotificationConfiguration;

  /// @brief Field PutScalingPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutScalingPolicy, put = setStaticF_PutScalingPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutScalingPolicy;

  /// @brief Field PutScheduledUpdateGroupAction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutScheduledUpdateGroupAction,
                             put = setStaticF_PutScheduledUpdateGroupAction))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutScheduledUpdateGroupAction;

  /// @brief Field ResumeProcesses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResumeProcesses, put = setStaticF_ResumeProcesses))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResumeProcesses;

  /// @brief Field SetDesiredCapacity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetDesiredCapacity, put = setStaticF_SetDesiredCapacity))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetDesiredCapacity;

  /// @brief Field SetInstanceHealth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetInstanceHealth, put = setStaticF_SetInstanceHealth))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetInstanceHealth;

  /// @brief Field SuspendProcesses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SuspendProcesses, put = setStaticF_SuspendProcesses))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SuspendProcesses;

  /// @brief Field TerminateInstanceInAutoScalingGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TerminateInstanceInAutoScalingGroup,
                             put = setStaticF_TerminateInstanceInAutoScalingGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* TerminateInstanceInAutoScalingGroup;

  /// @brief Field UpdateAutoScalingGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateAutoScalingGroup, put = setStaticF_UpdateAutoScalingGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateAutoScalingGroup;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllAutoScalingActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateAutoScalingGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLaunchConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateOrUpdateScalingTrigger();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateOrUpdateTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteAutoScalingGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLaunchConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteNotificationConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeletePolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteScheduledAction();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTrigger();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAdjustmentTypes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAutoScalingGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAutoScalingInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAutoScalingNotificationTypes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLaunchConfigurations();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeMetricCollectionTypes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeNotificationConfigurations();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribePolicies();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeScalingActivities();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeScalingProcessTypes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeScheduledActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTriggers();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisableMetricsCollection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableMetricsCollection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ExecutePolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutNotificationConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutScalingPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutScheduledUpdateGroupAction();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResumeProcesses();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetDesiredCapacity();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetInstanceHealth();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SuspendProcesses();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_TerminateInstanceInAutoScalingGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateAutoScalingGroup();

  static inline void setStaticF_AllAutoScalingActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateAutoScalingGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLaunchConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateOrUpdateScalingTrigger(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateOrUpdateTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteAutoScalingGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLaunchConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteNotificationConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeletePolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteScheduledAction(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTrigger(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAdjustmentTypes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAutoScalingGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAutoScalingInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAutoScalingNotificationTypes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLaunchConfigurations(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeMetricCollectionTypes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeNotificationConfigurations(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribePolicies(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeScalingActivities(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeScalingProcessTypes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeScheduledActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTriggers(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisableMetricsCollection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableMetricsCollection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ExecutePolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutNotificationConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutScalingPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutScheduledUpdateGroupAction(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResumeProcesses(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetDesiredCapacity(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetInstanceHealth(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SuspendProcesses(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_TerminateInstanceInAutoScalingGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateAutoScalingGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoScalingActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoScalingActionIdentifiers(AutoScalingActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoScalingActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoScalingActionIdentifiers(AutoScalingActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AutoScalingActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AutoScalingActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::AutoScalingActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "AutoScalingActionIdentifiers");
