#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RedshiftActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class RedshiftActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RedshiftActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::RedshiftActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::RedshiftActionIdentifiers*
class CORDL_TYPE RedshiftActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllRedshiftActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllRedshiftActions, put = setStaticF_AllRedshiftActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllRedshiftActions;

  /// @brief Field AuthorizeClusterSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorizeClusterSecurityGroupIngress,
                             put = setStaticF_AuthorizeClusterSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AuthorizeClusterSecurityGroupIngress;

  /// @brief Field AuthorizeSnapshotAccess, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorizeSnapshotAccess, put = setStaticF_AuthorizeSnapshotAccess))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AuthorizeSnapshotAccess;

  /// @brief Field CopyClusterSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CopyClusterSnapshot, put = setStaticF_CopyClusterSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CopyClusterSnapshot;

  /// @brief Field CreateCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateCluster, put = setStaticF_CreateCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateCluster;

  /// @brief Field CreateClusterParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateClusterParameterGroup,
                             put = setStaticF_CreateClusterParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateClusterParameterGroup;

  /// @brief Field CreateClusterSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateClusterSecurityGroup,
                             put = setStaticF_CreateClusterSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateClusterSecurityGroup;

  /// @brief Field CreateClusterSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateClusterSnapshot, put = setStaticF_CreateClusterSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateClusterSnapshot;

  /// @brief Field CreateClusterSubnetGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateClusterSubnetGroup, put = setStaticF_CreateClusterSubnetGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateClusterSubnetGroup;

  /// @brief Field CreateEventSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateEventSubscription, put = setStaticF_CreateEventSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateEventSubscription;

  /// @brief Field CreateHsmClientCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateHsmClientCertificate,
                             put = setStaticF_CreateHsmClientCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateHsmClientCertificate;

  /// @brief Field CreateHsmConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateHsmConfiguration, put = setStaticF_CreateHsmConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateHsmConfiguration;

  /// @brief Field DeleteCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteCluster, put = setStaticF_DeleteCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteCluster;

  /// @brief Field DeleteClusterParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteClusterParameterGroup,
                             put = setStaticF_DeleteClusterParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteClusterParameterGroup;

  /// @brief Field DeleteClusterSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteClusterSecurityGroup,
                             put = setStaticF_DeleteClusterSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteClusterSecurityGroup;

  /// @brief Field DeleteClusterSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteClusterSnapshot, put = setStaticF_DeleteClusterSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteClusterSnapshot;

  /// @brief Field DeleteClusterSubnetGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteClusterSubnetGroup, put = setStaticF_DeleteClusterSubnetGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteClusterSubnetGroup;

  /// @brief Field DeleteEventSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteEventSubscription, put = setStaticF_DeleteEventSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteEventSubscription;

  /// @brief Field DeleteHsmClientCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteHsmClientCertificate,
                             put = setStaticF_DeleteHsmClientCertificate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteHsmClientCertificate;

  /// @brief Field DeleteHsmConfiguration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteHsmConfiguration, put = setStaticF_DeleteHsmConfiguration))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteHsmConfiguration;

  /// @brief Field DescribeClusterParameterGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeClusterParameterGroups,
                             put = setStaticF_DescribeClusterParameterGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeClusterParameterGroups;

  /// @brief Field DescribeClusterParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeClusterParameters, put = setStaticF_DescribeClusterParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeClusterParameters;

  /// @brief Field DescribeClusterSecurityGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeClusterSecurityGroups,
                             put = setStaticF_DescribeClusterSecurityGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeClusterSecurityGroups;

  /// @brief Field DescribeClusterSnapshots, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeClusterSnapshots, put = setStaticF_DescribeClusterSnapshots))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeClusterSnapshots;

  /// @brief Field DescribeClusterSubnetGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeClusterSubnetGroups,
                             put = setStaticF_DescribeClusterSubnetGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeClusterSubnetGroups;

  /// @brief Field DescribeClusterVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeClusterVersions, put = setStaticF_DescribeClusterVersions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeClusterVersions;

  /// @brief Field DescribeClusters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeClusters, put = setStaticF_DescribeClusters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeClusters;

  /// @brief Field DescribeDefaultClusterParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDefaultClusterParameters,
                             put = setStaticF_DescribeDefaultClusterParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDefaultClusterParameters;

  /// @brief Field DescribeEventCategories, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEventCategories, put = setStaticF_DescribeEventCategories))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEventCategories;

  /// @brief Field DescribeEventSubscriptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEventSubscriptions,
                             put = setStaticF_DescribeEventSubscriptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEventSubscriptions;

  /// @brief Field DescribeEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEvents, put = setStaticF_DescribeEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEvents;

  /// @brief Field DescribeHsmClientCertificates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeHsmClientCertificates,
                             put = setStaticF_DescribeHsmClientCertificates))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeHsmClientCertificates;

  /// @brief Field DescribeHsmConfigurations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeHsmConfigurations, put = setStaticF_DescribeHsmConfigurations))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeHsmConfigurations;

  /// @brief Field DescribeLoggingStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLoggingStatus, put = setStaticF_DescribeLoggingStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLoggingStatus;

  /// @brief Field DescribeOrderableClusterOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeOrderableClusterOptions,
                             put = setStaticF_DescribeOrderableClusterOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeOrderableClusterOptions;

  /// @brief Field DescribeReservedNodeOfferings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedNodeOfferings,
                             put = setStaticF_DescribeReservedNodeOfferings))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedNodeOfferings;

  /// @brief Field DescribeReservedNodes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedNodes, put = setStaticF_DescribeReservedNodes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedNodes;

  /// @brief Field DescribeResize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeResize, put = setStaticF_DescribeResize))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeResize;

  /// @brief Field DisableLogging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisableLogging, put = setStaticF_DisableLogging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisableLogging;

  /// @brief Field DisableSnapshotCopy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisableSnapshotCopy, put = setStaticF_DisableSnapshotCopy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisableSnapshotCopy;

  /// @brief Field EnableLogging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableLogging, put = setStaticF_EnableLogging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableLogging;

  /// @brief Field EnableSnapshotCopy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableSnapshotCopy, put = setStaticF_EnableSnapshotCopy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableSnapshotCopy;

  /// @brief Field ModifyCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyCluster, put = setStaticF_ModifyCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyCluster;

  /// @brief Field ModifyClusterParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyClusterParameterGroup,
                             put = setStaticF_ModifyClusterParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyClusterParameterGroup;

  /// @brief Field ModifyClusterSubnetGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyClusterSubnetGroup, put = setStaticF_ModifyClusterSubnetGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyClusterSubnetGroup;

  /// @brief Field ModifyEventSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyEventSubscription, put = setStaticF_ModifyEventSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyEventSubscription;

  /// @brief Field ModifySnapshotCopyRetentionPeriod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifySnapshotCopyRetentionPeriod,
                             put = setStaticF_ModifySnapshotCopyRetentionPeriod))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifySnapshotCopyRetentionPeriod;

  /// @brief Field PurchaseReservedNodeOffering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PurchaseReservedNodeOffering,
                             put = setStaticF_PurchaseReservedNodeOffering))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PurchaseReservedNodeOffering;

  /// @brief Field RebootCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RebootCluster, put = setStaticF_RebootCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RebootCluster;

  /// @brief Field ResetClusterParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResetClusterParameterGroup,
                             put = setStaticF_ResetClusterParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResetClusterParameterGroup;

  /// @brief Field RestoreFromClusterSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RestoreFromClusterSnapshot,
                             put = setStaticF_RestoreFromClusterSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RestoreFromClusterSnapshot;

  /// @brief Field RevokeClusterSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevokeClusterSecurityGroupIngress,
                             put = setStaticF_RevokeClusterSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RevokeClusterSecurityGroupIngress;

  /// @brief Field RevokeSnapshotAccess, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevokeSnapshotAccess, put = setStaticF_RevokeSnapshotAccess))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RevokeSnapshotAccess;

  /// @brief Field RotateEncryptionKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RotateEncryptionKey, put = setStaticF_RotateEncryptionKey))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RotateEncryptionKey;

  /// @brief Field ViewQueriesInConsole, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ViewQueriesInConsole, put = setStaticF_ViewQueriesInConsole))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ViewQueriesInConsole;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllRedshiftActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AuthorizeClusterSecurityGroupIngress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AuthorizeSnapshotAccess();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CopyClusterSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateClusterParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateClusterSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateClusterSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateClusterSubnetGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateEventSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateHsmClientCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateHsmConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteClusterParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteClusterSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteClusterSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteClusterSubnetGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteEventSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteHsmClientCertificate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteHsmConfiguration();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeClusterParameterGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeClusterParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeClusterSecurityGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeClusterSnapshots();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeClusterSubnetGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeClusterVersions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeClusters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDefaultClusterParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEventCategories();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEventSubscriptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEvents();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeHsmClientCertificates();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeHsmConfigurations();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLoggingStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeOrderableClusterOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedNodeOfferings();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedNodes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeResize();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisableLogging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisableSnapshotCopy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableLogging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableSnapshotCopy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyClusterParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyClusterSubnetGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyEventSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifySnapshotCopyRetentionPeriod();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PurchaseReservedNodeOffering();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RebootCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResetClusterParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RestoreFromClusterSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RevokeClusterSecurityGroupIngress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RevokeSnapshotAccess();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RotateEncryptionKey();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ViewQueriesInConsole();

  static inline void setStaticF_AllRedshiftActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AuthorizeClusterSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AuthorizeSnapshotAccess(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CopyClusterSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateClusterParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateClusterSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateClusterSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateClusterSubnetGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateEventSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateHsmClientCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateHsmConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteClusterParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteClusterSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteClusterSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteClusterSubnetGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteEventSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteHsmClientCertificate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteHsmConfiguration(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeClusterParameterGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeClusterParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeClusterSecurityGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeClusterSnapshots(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeClusterSubnetGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeClusterVersions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeClusters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDefaultClusterParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEventCategories(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEventSubscriptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeHsmClientCertificates(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeHsmConfigurations(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLoggingStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeOrderableClusterOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedNodeOfferings(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedNodes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeResize(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisableLogging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisableSnapshotCopy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableLogging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableSnapshotCopy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyClusterParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyClusterSubnetGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyEventSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifySnapshotCopyRetentionPeriod(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PurchaseReservedNodeOffering(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RebootCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResetClusterParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RestoreFromClusterSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RevokeClusterSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RevokeSnapshotAccess(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RotateEncryptionKey(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ViewQueriesInConsole(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RedshiftActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RedshiftActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RedshiftActionIdentifiers(RedshiftActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RedshiftActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RedshiftActionIdentifiers(RedshiftActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RedshiftActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RedshiftActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RedshiftActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "RedshiftActionIdentifiers");
