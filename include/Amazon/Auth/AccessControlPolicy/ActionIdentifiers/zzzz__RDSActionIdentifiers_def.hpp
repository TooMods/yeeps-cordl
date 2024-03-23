#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RDSActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class RDSActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RDSActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::RDSActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::RDSActionIdentifiers*
class CORDL_TYPE RDSActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AddSourceIdentifierToSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddSourceIdentifierToSubscription,
                             put = setStaticF_AddSourceIdentifierToSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddSourceIdentifierToSubscription;

  /// @brief Field AddTagsToResource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddTagsToResource, put = setStaticF_AddTagsToResource))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddTagsToResource;

  /// @brief Field AllRDSActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllRDSActions, put = setStaticF_AllRDSActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllRDSActions;

  /// @brief Field AuthorizeDBSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorizeDBSecurityGroupIngress,
                             put = setStaticF_AuthorizeDBSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AuthorizeDBSecurityGroupIngress;

  /// @brief Field CopyDBSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CopyDBSnapshot, put = setStaticF_CopyDBSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CopyDBSnapshot;

  /// @brief Field CreateDBInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDBInstance, put = setStaticF_CreateDBInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDBInstance;

  /// @brief Field CreateDBInstanceReadReplica, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDBInstanceReadReplica,
                             put = setStaticF_CreateDBInstanceReadReplica))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDBInstanceReadReplica;

  /// @brief Field CreateDBParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDBParameterGroup, put = setStaticF_CreateDBParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDBParameterGroup;

  /// @brief Field CreateDBSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDBSecurityGroup, put = setStaticF_CreateDBSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDBSecurityGroup;

  /// @brief Field CreateDBSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDBSnapshot, put = setStaticF_CreateDBSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDBSnapshot;

  /// @brief Field CreateDBSubnetGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDBSubnetGroup, put = setStaticF_CreateDBSubnetGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDBSubnetGroup;

  /// @brief Field CreateEventSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateEventSubscription, put = setStaticF_CreateEventSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateEventSubscription;

  /// @brief Field CreateOptionGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateOptionGroup, put = setStaticF_CreateOptionGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateOptionGroup;

  /// @brief Field DeleteDBInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDBInstance, put = setStaticF_DeleteDBInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDBInstance;

  /// @brief Field DeleteDBParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDBParameterGroup, put = setStaticF_DeleteDBParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDBParameterGroup;

  /// @brief Field DeleteDBSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDBSecurityGroup, put = setStaticF_DeleteDBSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDBSecurityGroup;

  /// @brief Field DeleteDBSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDBSnapshot, put = setStaticF_DeleteDBSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDBSnapshot;

  /// @brief Field DeleteDBSubnetGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDBSubnetGroup, put = setStaticF_DeleteDBSubnetGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDBSubnetGroup;

  /// @brief Field DeleteEventSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteEventSubscription, put = setStaticF_DeleteEventSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteEventSubscription;

  /// @brief Field DeleteOptionGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteOptionGroup, put = setStaticF_DeleteOptionGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteOptionGroup;

  /// @brief Field DescribeDBEngineVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBEngineVersions, put = setStaticF_DescribeDBEngineVersions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBEngineVersions;

  /// @brief Field DescribeDBInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBInstances, put = setStaticF_DescribeDBInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBInstances;

  /// @brief Field DescribeDBLogFiles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBLogFiles, put = setStaticF_DescribeDBLogFiles))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBLogFiles;

  /// @brief Field DescribeDBParameterGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBParameterGroups, put = setStaticF_DescribeDBParameterGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBParameterGroups;

  /// @brief Field DescribeDBParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBParameters, put = setStaticF_DescribeDBParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBParameters;

  /// @brief Field DescribeDBSecurityGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBSecurityGroups, put = setStaticF_DescribeDBSecurityGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBSecurityGroups;

  /// @brief Field DescribeDBSnapshots, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBSnapshots, put = setStaticF_DescribeDBSnapshots))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBSnapshots;

  /// @brief Field DescribeDBSubnetGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDBSubnetGroups, put = setStaticF_DescribeDBSubnetGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDBSubnetGroups;

  /// @brief Field DescribeEngineDefaultParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEngineDefaultParameters,
                             put = setStaticF_DescribeEngineDefaultParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEngineDefaultParameters;

  /// @brief Field DescribeEventCategories, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEventCategories, put = setStaticF_DescribeEventCategories))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEventCategories;

  /// @brief Field DescribeEventSubscriptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEventSubscriptions,
                             put = setStaticF_DescribeEventSubscriptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEventSubscriptions;

  /// @brief Field DescribeEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEvents, put = setStaticF_DescribeEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEvents;

  /// @brief Field DescribeOptionGroupOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeOptionGroupOptions,
                             put = setStaticF_DescribeOptionGroupOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeOptionGroupOptions;

  /// @brief Field DescribeOptionGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeOptionGroups, put = setStaticF_DescribeOptionGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeOptionGroups;

  /// @brief Field DescribeOrderableDBInstanceOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeOrderableDBInstanceOptions,
                             put = setStaticF_DescribeOrderableDBInstanceOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeOrderableDBInstanceOptions;

  /// @brief Field DescribeReservedDBInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedDBInstances,
                             put = setStaticF_DescribeReservedDBInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedDBInstances;

  /// @brief Field DescribeReservedDBInstancesOfferings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedDBInstancesOfferings,
                             put = setStaticF_DescribeReservedDBInstancesOfferings))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedDBInstancesOfferings;

  /// @brief Field DownloadDBLogFilePortion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DownloadDBLogFilePortion, put = setStaticF_DownloadDBLogFilePortion))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DownloadDBLogFilePortion;

  /// @brief Field ListTagsForResource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListTagsForResource, put = setStaticF_ListTagsForResource))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListTagsForResource;

  /// @brief Field ModifyDBInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyDBInstance, put = setStaticF_ModifyDBInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyDBInstance;

  /// @brief Field ModifyDBParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyDBParameterGroup, put = setStaticF_ModifyDBParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyDBParameterGroup;

  /// @brief Field ModifyDBSubnetGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyDBSubnetGroup, put = setStaticF_ModifyDBSubnetGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyDBSubnetGroup;

  /// @brief Field ModifyEventSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyEventSubscription, put = setStaticF_ModifyEventSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyEventSubscription;

  /// @brief Field ModifyOptionGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyOptionGroup, put = setStaticF_ModifyOptionGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyOptionGroup;

  /// @brief Field PromoteReadReplica, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PromoteReadReplica, put = setStaticF_PromoteReadReplica))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PromoteReadReplica;

  /// @brief Field PurchaseReservedDBInstancesOffering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PurchaseReservedDBInstancesOffering,
                             put = setStaticF_PurchaseReservedDBInstancesOffering))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PurchaseReservedDBInstancesOffering;

  /// @brief Field RebootDBInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RebootDBInstance, put = setStaticF_RebootDBInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RebootDBInstance;

  /// @brief Field RemoveSourceIdentifierFromSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemoveSourceIdentifierFromSubscription,
                             put = setStaticF_RemoveSourceIdentifierFromSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemoveSourceIdentifierFromSubscription;

  /// @brief Field RemoveTagsFromResource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemoveTagsFromResource, put = setStaticF_RemoveTagsFromResource))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemoveTagsFromResource;

  /// @brief Field ResetDBParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResetDBParameterGroup, put = setStaticF_ResetDBParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResetDBParameterGroup;

  /// @brief Field RestoreDBInstanceFromDBSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RestoreDBInstanceFromDBSnapshot,
                             put = setStaticF_RestoreDBInstanceFromDBSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RestoreDBInstanceFromDBSnapshot;

  /// @brief Field RestoreDBInstanceToPointInTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RestoreDBInstanceToPointInTime,
                             put = setStaticF_RestoreDBInstanceToPointInTime))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RestoreDBInstanceToPointInTime;

  /// @brief Field RevokeDBSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevokeDBSecurityGroupIngress,
                             put = setStaticF_RevokeDBSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RevokeDBSecurityGroupIngress;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddSourceIdentifierToSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddTagsToResource();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllRDSActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AuthorizeDBSecurityGroupIngress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CopyDBSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDBInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDBInstanceReadReplica();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDBParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDBSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDBSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDBSubnetGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateEventSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateOptionGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDBInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDBParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDBSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDBSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDBSubnetGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteEventSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteOptionGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBEngineVersions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBLogFiles();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBParameterGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBSecurityGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBSnapshots();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDBSubnetGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEngineDefaultParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEventCategories();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEventSubscriptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEvents();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeOptionGroupOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeOptionGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeOrderableDBInstanceOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedDBInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedDBInstancesOfferings();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DownloadDBLogFilePortion();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListTagsForResource();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyDBInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyDBParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyDBSubnetGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyEventSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyOptionGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PromoteReadReplica();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PurchaseReservedDBInstancesOffering();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RebootDBInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemoveSourceIdentifierFromSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemoveTagsFromResource();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResetDBParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RestoreDBInstanceFromDBSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RestoreDBInstanceToPointInTime();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RevokeDBSecurityGroupIngress();

  static inline void setStaticF_AddSourceIdentifierToSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddTagsToResource(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllRDSActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AuthorizeDBSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CopyDBSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDBInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDBInstanceReadReplica(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDBParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDBSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDBSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDBSubnetGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateEventSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateOptionGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDBInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDBParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDBSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDBSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDBSubnetGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteEventSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteOptionGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBEngineVersions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBLogFiles(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBParameterGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBSecurityGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBSnapshots(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDBSubnetGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEngineDefaultParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEventCategories(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEventSubscriptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeOptionGroupOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeOptionGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeOrderableDBInstanceOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedDBInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedDBInstancesOfferings(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DownloadDBLogFilePortion(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListTagsForResource(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyDBInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyDBParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyDBSubnetGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyEventSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyOptionGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PromoteReadReplica(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PurchaseReservedDBInstancesOffering(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RebootDBInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemoveSourceIdentifierFromSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemoveTagsFromResource(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResetDBParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RestoreDBInstanceFromDBSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RestoreDBInstanceToPointInTime(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RevokeDBSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RDSActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RDSActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RDSActionIdentifiers(RDSActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RDSActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RDSActionIdentifiers(RDSActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RDSActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RDSActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::RDSActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "RDSActionIdentifiers");
