#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EC2ActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class EC2ActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::EC2ActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::EC2ActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::EC2ActionIdentifiers*
class CORDL_TYPE EC2ActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AcceptVpcPeeringConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AcceptVpcPeeringConnection,
                             put = setStaticF_AcceptVpcPeeringConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AcceptVpcPeeringConnection;

  /// @brief Field ActivateLicense, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ActivateLicense, put = setStaticF_ActivateLicense))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ActivateLicense;

  /// @brief Field AllEC2Actions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllEC2Actions, put = setStaticF_AllEC2Actions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllEC2Actions;

  /// @brief Field AllocateAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllocateAddress, put = setStaticF_AllocateAddress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllocateAddress;

  /// @brief Field AssignPrivateIpAddresses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssignPrivateIpAddresses, put = setStaticF_AssignPrivateIpAddresses))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AssignPrivateIpAddresses;

  /// @brief Field AssociateAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssociateAddress, put = setStaticF_AssociateAddress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AssociateAddress;

  /// @brief Field AssociateDhcpOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssociateDhcpOptions, put = setStaticF_AssociateDhcpOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AssociateDhcpOptions;

  /// @brief Field AssociateRouteTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssociateRouteTable, put = setStaticF_AssociateRouteTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AssociateRouteTable;

  /// @brief Field AttachInternetGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AttachInternetGateway, put = setStaticF_AttachInternetGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AttachInternetGateway;

  /// @brief Field AttachNetworkInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AttachNetworkInterface, put = setStaticF_AttachNetworkInterface))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AttachNetworkInterface;

  /// @brief Field AttachVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AttachVolume, put = setStaticF_AttachVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AttachVolume;

  /// @brief Field AttachVpnGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AttachVpnGateway, put = setStaticF_AttachVpnGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AttachVpnGateway;

  /// @brief Field AuthorizeSecurityGroupEgress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorizeSecurityGroupEgress,
                             put = setStaticF_AuthorizeSecurityGroupEgress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AuthorizeSecurityGroupEgress;

  /// @brief Field AuthorizeSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorizeSecurityGroupIngress,
                             put = setStaticF_AuthorizeSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AuthorizeSecurityGroupIngress;

  /// @brief Field BundleInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BundleInstance, put = setStaticF_BundleInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* BundleInstance;

  /// @brief Field CancelBundleTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelBundleTask, put = setStaticF_CancelBundleTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelBundleTask;

  /// @brief Field CancelConversionTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelConversionTask, put = setStaticF_CancelConversionTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelConversionTask;

  /// @brief Field CancelExportTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelExportTask, put = setStaticF_CancelExportTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelExportTask;

  /// @brief Field CancelReservedInstancesListing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelReservedInstancesListing,
                             put = setStaticF_CancelReservedInstancesListing))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelReservedInstancesListing;

  /// @brief Field CancelSpotInstanceRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelSpotInstanceRequests,
                             put = setStaticF_CancelSpotInstanceRequests))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelSpotInstanceRequests;

  /// @brief Field ConfirmProductInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConfirmProductInstance, put = setStaticF_ConfirmProductInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ConfirmProductInstance;

  /// @brief Field CopyImage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CopyImage, put = setStaticF_CopyImage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CopyImage;

  /// @brief Field CopySnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CopySnapshot, put = setStaticF_CopySnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CopySnapshot;

  /// @brief Field CreateCustomerGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateCustomerGateway, put = setStaticF_CreateCustomerGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateCustomerGateway;

  /// @brief Field CreateDhcpOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDhcpOptions, put = setStaticF_CreateDhcpOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDhcpOptions;

  /// @brief Field CreateImage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateImage, put = setStaticF_CreateImage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateImage;

  /// @brief Field CreateInstanceExportTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateInstanceExportTask, put = setStaticF_CreateInstanceExportTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateInstanceExportTask;

  /// @brief Field CreateInternetGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateInternetGateway, put = setStaticF_CreateInternetGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateInternetGateway;

  /// @brief Field CreateKeyPair, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateKeyPair, put = setStaticF_CreateKeyPair))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateKeyPair;

  /// @brief Field CreateNetworkAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateNetworkAcl, put = setStaticF_CreateNetworkAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateNetworkAcl;

  /// @brief Field CreateNetworkAclEntry, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateNetworkAclEntry, put = setStaticF_CreateNetworkAclEntry))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateNetworkAclEntry;

  /// @brief Field CreateNetworkInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateNetworkInterface, put = setStaticF_CreateNetworkInterface))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateNetworkInterface;

  /// @brief Field CreatePlacementGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatePlacementGroup, put = setStaticF_CreatePlacementGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreatePlacementGroup;

  /// @brief Field CreateReservedInstancesListing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateReservedInstancesListing,
                             put = setStaticF_CreateReservedInstancesListing))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateReservedInstancesListing;

  /// @brief Field CreateRoute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateRoute, put = setStaticF_CreateRoute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateRoute;

  /// @brief Field CreateRouteTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateRouteTable, put = setStaticF_CreateRouteTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateRouteTable;

  /// @brief Field CreateSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSecurityGroup, put = setStaticF_CreateSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSecurityGroup;

  /// @brief Field CreateSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSnapshot, put = setStaticF_CreateSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSnapshot;

  /// @brief Field CreateSpotDatafeedSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSpotDatafeedSubscription,
                             put = setStaticF_CreateSpotDatafeedSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSpotDatafeedSubscription;

  /// @brief Field CreateSubnet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSubnet, put = setStaticF_CreateSubnet))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSubnet;

  /// @brief Field CreateTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateTags, put = setStaticF_CreateTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateTags;

  /// @brief Field CreateVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVolume, put = setStaticF_CreateVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVolume;

  /// @brief Field CreateVpc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVpc, put = setStaticF_CreateVpc))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVpc;

  /// @brief Field CreateVpcPeeringConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVpcPeeringConnection,
                             put = setStaticF_CreateVpcPeeringConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVpcPeeringConnection;

  /// @brief Field CreateVpnConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVpnConnection, put = setStaticF_CreateVpnConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVpnConnection;

  /// @brief Field CreateVpnConnectionRoute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVpnConnectionRoute, put = setStaticF_CreateVpnConnectionRoute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVpnConnectionRoute;

  /// @brief Field CreateVpnGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateVpnGateway, put = setStaticF_CreateVpnGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateVpnGateway;

  /// @brief Field DeactivateLicense, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeactivateLicense, put = setStaticF_DeactivateLicense))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeactivateLicense;

  /// @brief Field DeleteCustomerGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteCustomerGateway, put = setStaticF_DeleteCustomerGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteCustomerGateway;

  /// @brief Field DeleteDhcpOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDhcpOptions, put = setStaticF_DeleteDhcpOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDhcpOptions;

  /// @brief Field DeleteInternetGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteInternetGateway, put = setStaticF_DeleteInternetGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteInternetGateway;

  /// @brief Field DeleteKeyPair, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteKeyPair, put = setStaticF_DeleteKeyPair))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteKeyPair;

  /// @brief Field DeleteNetworkAcl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteNetworkAcl, put = setStaticF_DeleteNetworkAcl))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteNetworkAcl;

  /// @brief Field DeleteNetworkAclEntry, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteNetworkAclEntry, put = setStaticF_DeleteNetworkAclEntry))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteNetworkAclEntry;

  /// @brief Field DeleteNetworkInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteNetworkInterface, put = setStaticF_DeleteNetworkInterface))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteNetworkInterface;

  /// @brief Field DeletePlacementGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeletePlacementGroup, put = setStaticF_DeletePlacementGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeletePlacementGroup;

  /// @brief Field DeleteRoute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteRoute, put = setStaticF_DeleteRoute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteRoute;

  /// @brief Field DeleteRouteTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteRouteTable, put = setStaticF_DeleteRouteTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteRouteTable;

  /// @brief Field DeleteSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSecurityGroup, put = setStaticF_DeleteSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSecurityGroup;

  /// @brief Field DeleteSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSnapshot, put = setStaticF_DeleteSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSnapshot;

  /// @brief Field DeleteSpotDatafeedSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSpotDatafeedSubscription,
                             put = setStaticF_DeleteSpotDatafeedSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSpotDatafeedSubscription;

  /// @brief Field DeleteSubnet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSubnet, put = setStaticF_DeleteSubnet))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSubnet;

  /// @brief Field DeleteTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTags, put = setStaticF_DeleteTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTags;

  /// @brief Field DeleteVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVolume, put = setStaticF_DeleteVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVolume;

  /// @brief Field DeleteVpc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVpc, put = setStaticF_DeleteVpc))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVpc;

  /// @brief Field DeleteVpcPeeringConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVpcPeeringConnection,
                             put = setStaticF_DeleteVpcPeeringConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVpcPeeringConnection;

  /// @brief Field DeleteVpnConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVpnConnection, put = setStaticF_DeleteVpnConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVpnConnection;

  /// @brief Field DeleteVpnConnectionRoute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVpnConnectionRoute, put = setStaticF_DeleteVpnConnectionRoute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVpnConnectionRoute;

  /// @brief Field DeleteVpnGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVpnGateway, put = setStaticF_DeleteVpnGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVpnGateway;

  /// @brief Field DeregisterImage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeregisterImage, put = setStaticF_DeregisterImage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeregisterImage;

  /// @brief Field DescribeAccountAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAccountAttributes, put = setStaticF_DescribeAccountAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAccountAttributes;

  /// @brief Field DescribeAddresses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAddresses, put = setStaticF_DescribeAddresses))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAddresses;

  /// @brief Field DescribeAvailabilityZones, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAvailabilityZones, put = setStaticF_DescribeAvailabilityZones))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAvailabilityZones;

  /// @brief Field DescribeBundleTasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeBundleTasks, put = setStaticF_DescribeBundleTasks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeBundleTasks;

  /// @brief Field DescribeConversionTasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeConversionTasks, put = setStaticF_DescribeConversionTasks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeConversionTasks;

  /// @brief Field DescribeCustomerGateways, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCustomerGateways, put = setStaticF_DescribeCustomerGateways))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCustomerGateways;

  /// @brief Field DescribeDhcpOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDhcpOptions, put = setStaticF_DescribeDhcpOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDhcpOptions;

  /// @brief Field DescribeExportTasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeExportTasks, put = setStaticF_DescribeExportTasks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeExportTasks;

  /// @brief Field DescribeImageAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeImageAttribute, put = setStaticF_DescribeImageAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeImageAttribute;

  /// @brief Field DescribeImages, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeImages, put = setStaticF_DescribeImages))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeImages;

  /// @brief Field DescribeInstanceAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeInstanceAttribute, put = setStaticF_DescribeInstanceAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeInstanceAttribute;

  /// @brief Field DescribeInstanceStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeInstanceStatus, put = setStaticF_DescribeInstanceStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeInstanceStatus;

  /// @brief Field DescribeInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeInstances, put = setStaticF_DescribeInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeInstances;

  /// @brief Field DescribeInternetGateways, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeInternetGateways, put = setStaticF_DescribeInternetGateways))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeInternetGateways;

  /// @brief Field DescribeKeyPairs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeKeyPairs, put = setStaticF_DescribeKeyPairs))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeKeyPairs;

  /// @brief Field DescribeLicenses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLicenses, put = setStaticF_DescribeLicenses))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLicenses;

  /// @brief Field DescribeNetworkAcls, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeNetworkAcls, put = setStaticF_DescribeNetworkAcls))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeNetworkAcls;

  /// @brief Field DescribeNetworkInterfaceAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeNetworkInterfaceAttribute,
                             put = setStaticF_DescribeNetworkInterfaceAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeNetworkInterfaceAttribute;

  /// @brief Field DescribeNetworkInterfaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeNetworkInterfaces, put = setStaticF_DescribeNetworkInterfaces))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeNetworkInterfaces;

  /// @brief Field DescribePlacementGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribePlacementGroups, put = setStaticF_DescribePlacementGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribePlacementGroups;

  /// @brief Field DescribeRegions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeRegions, put = setStaticF_DescribeRegions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeRegions;

  /// @brief Field DescribeReservedInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedInstances, put = setStaticF_DescribeReservedInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedInstances;

  /// @brief Field DescribeReservedInstancesListings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedInstancesListings,
                             put = setStaticF_DescribeReservedInstancesListings))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedInstancesListings;

  /// @brief Field DescribeReservedInstancesModifications, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedInstancesModifications,
                             put = setStaticF_DescribeReservedInstancesModifications))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedInstancesModifications;

  /// @brief Field DescribeReservedInstancesOfferings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeReservedInstancesOfferings,
                             put = setStaticF_DescribeReservedInstancesOfferings))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeReservedInstancesOfferings;

  /// @brief Field DescribeRouteTables, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeRouteTables, put = setStaticF_DescribeRouteTables))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeRouteTables;

  /// @brief Field DescribeSecurityGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSecurityGroups, put = setStaticF_DescribeSecurityGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSecurityGroups;

  /// @brief Field DescribeSnapshotAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSnapshotAttribute, put = setStaticF_DescribeSnapshotAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSnapshotAttribute;

  /// @brief Field DescribeSnapshots, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSnapshots, put = setStaticF_DescribeSnapshots))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSnapshots;

  /// @brief Field DescribeSpotDatafeedSubscription, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSpotDatafeedSubscription,
                             put = setStaticF_DescribeSpotDatafeedSubscription))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSpotDatafeedSubscription;

  /// @brief Field DescribeSpotInstanceRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSpotInstanceRequests,
                             put = setStaticF_DescribeSpotInstanceRequests))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSpotInstanceRequests;

  /// @brief Field DescribeSpotPriceHistory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSpotPriceHistory, put = setStaticF_DescribeSpotPriceHistory))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSpotPriceHistory;

  /// @brief Field DescribeSubnets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSubnets, put = setStaticF_DescribeSubnets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSubnets;

  /// @brief Field DescribeTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTags, put = setStaticF_DescribeTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTags;

  /// @brief Field DescribeVolumeAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVolumeAttribute, put = setStaticF_DescribeVolumeAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVolumeAttribute;

  /// @brief Field DescribeVolumeStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVolumeStatus, put = setStaticF_DescribeVolumeStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVolumeStatus;

  /// @brief Field DescribeVolumes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVolumes, put = setStaticF_DescribeVolumes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVolumes;

  /// @brief Field DescribeVpcAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVpcAttribute, put = setStaticF_DescribeVpcAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVpcAttribute;

  /// @brief Field DescribeVpcPeeringConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVpcPeeringConnection,
                             put = setStaticF_DescribeVpcPeeringConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVpcPeeringConnection;

  /// @brief Field DescribeVpcs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVpcs, put = setStaticF_DescribeVpcs))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVpcs;

  /// @brief Field DescribeVpnConnections, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVpnConnections, put = setStaticF_DescribeVpnConnections))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVpnConnections;

  /// @brief Field DescribeVpnGateways, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVpnGateways, put = setStaticF_DescribeVpnGateways))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVpnGateways;

  /// @brief Field DetachInternetGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DetachInternetGateway, put = setStaticF_DetachInternetGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DetachInternetGateway;

  /// @brief Field DetachNetworkInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DetachNetworkInterface, put = setStaticF_DetachNetworkInterface))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DetachNetworkInterface;

  /// @brief Field DetachVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DetachVolume, put = setStaticF_DetachVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DetachVolume;

  /// @brief Field DetachVpnGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DetachVpnGateway, put = setStaticF_DetachVpnGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DetachVpnGateway;

  /// @brief Field DisableVgwRoutePropagation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisableVgwRoutePropagation,
                             put = setStaticF_DisableVgwRoutePropagation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisableVgwRoutePropagation;

  /// @brief Field DisassociateAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisassociateAddress, put = setStaticF_DisassociateAddress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisassociateAddress;

  /// @brief Field DisassociateRouteTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisassociateRouteTable, put = setStaticF_DisassociateRouteTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisassociateRouteTable;

  /// @brief Field EnableVgwRoutePropagation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableVgwRoutePropagation, put = setStaticF_EnableVgwRoutePropagation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableVgwRoutePropagation;

  /// @brief Field EnableVolumeIO, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableVolumeIO, put = setStaticF_EnableVolumeIO))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableVolumeIO;

  /// @brief Field GetConsoleOutput, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetConsoleOutput, put = setStaticF_GetConsoleOutput))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetConsoleOutput;

  /// @brief Field GetPasswordData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetPasswordData, put = setStaticF_GetPasswordData))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetPasswordData;

  /// @brief Field ImportInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ImportInstance, put = setStaticF_ImportInstance))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ImportInstance;

  /// @brief Field ImportKeyPair, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ImportKeyPair, put = setStaticF_ImportKeyPair))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ImportKeyPair;

  /// @brief Field ImportVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ImportVolume, put = setStaticF_ImportVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ImportVolume;

  /// @brief Field ModifyImageAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyImageAttribute, put = setStaticF_ModifyImageAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyImageAttribute;

  /// @brief Field ModifyInstanceAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyInstanceAttribute, put = setStaticF_ModifyInstanceAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyInstanceAttribute;

  /// @brief Field ModifyNetworkInterfaceAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyNetworkInterfaceAttribute,
                             put = setStaticF_ModifyNetworkInterfaceAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyNetworkInterfaceAttribute;

  /// @brief Field ModifyReservedInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyReservedInstances, put = setStaticF_ModifyReservedInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyReservedInstances;

  /// @brief Field ModifySnapshotAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifySnapshotAttribute, put = setStaticF_ModifySnapshotAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifySnapshotAttribute;

  /// @brief Field ModifyVolumeAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyVolumeAttribute, put = setStaticF_ModifyVolumeAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyVolumeAttribute;

  /// @brief Field ModifyVpcAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyVpcAttribute, put = setStaticF_ModifyVpcAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyVpcAttribute;

  /// @brief Field MonitorInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MonitorInstances, put = setStaticF_MonitorInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* MonitorInstances;

  /// @brief Field PurchaseReservedInstancesOffering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PurchaseReservedInstancesOffering,
                             put = setStaticF_PurchaseReservedInstancesOffering))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PurchaseReservedInstancesOffering;

  /// @brief Field RebootInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RebootInstances, put = setStaticF_RebootInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RebootInstances;

  /// @brief Field RegisterImage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterImage, put = setStaticF_RegisterImage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterImage;

  /// @brief Field RejectVpcPeeringConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RejectVpcPeeringConnection,
                             put = setStaticF_RejectVpcPeeringConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RejectVpcPeeringConnection;

  /// @brief Field ReleaseAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReleaseAddress, put = setStaticF_ReleaseAddress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReleaseAddress;

  /// @brief Field ReplaceNetworkAclAssociation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReplaceNetworkAclAssociation,
                             put = setStaticF_ReplaceNetworkAclAssociation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReplaceNetworkAclAssociation;

  /// @brief Field ReplaceNetworkAclEntry, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReplaceNetworkAclEntry, put = setStaticF_ReplaceNetworkAclEntry))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReplaceNetworkAclEntry;

  /// @brief Field ReplaceRoute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReplaceRoute, put = setStaticF_ReplaceRoute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReplaceRoute;

  /// @brief Field ReplaceRouteTableAssociation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReplaceRouteTableAssociation,
                             put = setStaticF_ReplaceRouteTableAssociation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReplaceRouteTableAssociation;

  /// @brief Field ReportInstanceStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReportInstanceStatus, put = setStaticF_ReportInstanceStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ReportInstanceStatus;

  /// @brief Field RequestSpotInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RequestSpotInstances, put = setStaticF_RequestSpotInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RequestSpotInstances;

  /// @brief Field ResetImageAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResetImageAttribute, put = setStaticF_ResetImageAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResetImageAttribute;

  /// @brief Field ResetInstanceAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResetInstanceAttribute, put = setStaticF_ResetInstanceAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResetInstanceAttribute;

  /// @brief Field ResetNetworkInterfaceAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResetNetworkInterfaceAttribute,
                             put = setStaticF_ResetNetworkInterfaceAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResetNetworkInterfaceAttribute;

  /// @brief Field ResetSnapshotAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResetSnapshotAttribute, put = setStaticF_ResetSnapshotAttribute))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResetSnapshotAttribute;

  /// @brief Field RevokeSecurityGroupEgress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevokeSecurityGroupEgress, put = setStaticF_RevokeSecurityGroupEgress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RevokeSecurityGroupEgress;

  /// @brief Field RevokeSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevokeSecurityGroupIngress,
                             put = setStaticF_RevokeSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RevokeSecurityGroupIngress;

  /// @brief Field RunInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RunInstances, put = setStaticF_RunInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RunInstances;

  /// @brief Field StartInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartInstances, put = setStaticF_StartInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartInstances;

  /// @brief Field StopInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StopInstances, put = setStaticF_StopInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StopInstances;

  /// @brief Field TerminateInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TerminateInstances, put = setStaticF_TerminateInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* TerminateInstances;

  /// @brief Field UnassignPrivateIpAddresses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnassignPrivateIpAddresses,
                             put = setStaticF_UnassignPrivateIpAddresses))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UnassignPrivateIpAddresses;

  /// @brief Field UnmonitorInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnmonitorInstances, put = setStaticF_UnmonitorInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UnmonitorInstances;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AcceptVpcPeeringConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ActivateLicense();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllEC2Actions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllocateAddress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AssignPrivateIpAddresses();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AssociateAddress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AssociateDhcpOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AssociateRouteTable();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AttachInternetGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AttachNetworkInterface();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AttachVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AttachVpnGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AuthorizeSecurityGroupEgress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AuthorizeSecurityGroupIngress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_BundleInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelBundleTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelConversionTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelExportTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelReservedInstancesListing();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelSpotInstanceRequests();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ConfirmProductInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CopyImage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CopySnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateCustomerGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDhcpOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateImage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateInstanceExportTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateInternetGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateKeyPair();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateNetworkAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateNetworkAclEntry();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateNetworkInterface();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreatePlacementGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateReservedInstancesListing();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateRoute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateRouteTable();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSpotDatafeedSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSubnet();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVpc();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVpcPeeringConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVpnConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVpnConnectionRoute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateVpnGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeactivateLicense();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteCustomerGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDhcpOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteInternetGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteKeyPair();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteNetworkAcl();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteNetworkAclEntry();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteNetworkInterface();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeletePlacementGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteRoute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteRouteTable();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSpotDatafeedSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSubnet();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVpc();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVpcPeeringConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVpnConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVpnConnectionRoute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVpnGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeregisterImage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAccountAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAddresses();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAvailabilityZones();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeBundleTasks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeConversionTasks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCustomerGateways();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDhcpOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeExportTasks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeImageAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeImages();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeInstanceAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeInstanceStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeInternetGateways();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeKeyPairs();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLicenses();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeNetworkAcls();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeNetworkInterfaceAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeNetworkInterfaces();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribePlacementGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeRegions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedInstancesListings();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedInstancesModifications();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeReservedInstancesOfferings();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeRouteTables();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSecurityGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSnapshotAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSnapshots();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSpotDatafeedSubscription();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSpotInstanceRequests();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSpotPriceHistory();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSubnets();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVolumeAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVolumeStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVolumes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVpcAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVpcPeeringConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVpcs();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVpnConnections();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVpnGateways();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DetachInternetGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DetachNetworkInterface();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DetachVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DetachVpnGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisableVgwRoutePropagation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisassociateAddress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisassociateRouteTable();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableVgwRoutePropagation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableVolumeIO();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetConsoleOutput();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetPasswordData();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ImportInstance();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ImportKeyPair();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ImportVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyImageAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyInstanceAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyNetworkInterfaceAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyReservedInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifySnapshotAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyVolumeAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyVpcAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_MonitorInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PurchaseReservedInstancesOffering();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RebootInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterImage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RejectVpcPeeringConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReleaseAddress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReplaceNetworkAclAssociation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReplaceNetworkAclEntry();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReplaceRoute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReplaceRouteTableAssociation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ReportInstanceStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RequestSpotInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResetImageAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResetInstanceAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResetNetworkInterfaceAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResetSnapshotAttribute();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RevokeSecurityGroupEgress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RevokeSecurityGroupIngress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RunInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StopInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_TerminateInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UnassignPrivateIpAddresses();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UnmonitorInstances();

  static inline void setStaticF_AcceptVpcPeeringConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ActivateLicense(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllEC2Actions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllocateAddress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AssignPrivateIpAddresses(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AssociateAddress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AssociateDhcpOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AssociateRouteTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AttachInternetGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AttachNetworkInterface(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AttachVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AttachVpnGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AuthorizeSecurityGroupEgress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AuthorizeSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_BundleInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelBundleTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelConversionTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelExportTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelReservedInstancesListing(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelSpotInstanceRequests(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ConfirmProductInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CopyImage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CopySnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateCustomerGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDhcpOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateImage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateInstanceExportTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateInternetGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateKeyPair(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateNetworkAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateNetworkAclEntry(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateNetworkInterface(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreatePlacementGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateReservedInstancesListing(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateRoute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateRouteTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSpotDatafeedSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSubnet(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVpc(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVpcPeeringConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVpnConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVpnConnectionRoute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateVpnGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeactivateLicense(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteCustomerGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDhcpOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteInternetGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteKeyPair(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteNetworkAcl(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteNetworkAclEntry(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteNetworkInterface(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeletePlacementGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteRoute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteRouteTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSpotDatafeedSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSubnet(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVpc(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVpcPeeringConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVpnConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVpnConnectionRoute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVpnGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeregisterImage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAccountAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAddresses(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAvailabilityZones(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeBundleTasks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeConversionTasks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCustomerGateways(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDhcpOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeExportTasks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeImageAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeImages(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeInstanceAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeInstanceStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeInternetGateways(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeKeyPairs(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLicenses(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeNetworkAcls(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeNetworkInterfaceAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeNetworkInterfaces(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribePlacementGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeRegions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedInstancesListings(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedInstancesModifications(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeReservedInstancesOfferings(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeRouteTables(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSecurityGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSnapshotAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSnapshots(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSpotDatafeedSubscription(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSpotInstanceRequests(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSpotPriceHistory(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSubnets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVolumeAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVolumeStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVolumes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVpcAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVpcPeeringConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVpcs(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVpnConnections(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVpnGateways(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DetachInternetGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DetachNetworkInterface(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DetachVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DetachVpnGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisableVgwRoutePropagation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisassociateAddress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisassociateRouteTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableVgwRoutePropagation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableVolumeIO(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetConsoleOutput(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetPasswordData(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ImportInstance(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ImportKeyPair(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ImportVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyImageAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyInstanceAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyNetworkInterfaceAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyReservedInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifySnapshotAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyVolumeAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyVpcAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_MonitorInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PurchaseReservedInstancesOffering(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RebootInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterImage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RejectVpcPeeringConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReleaseAddress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReplaceNetworkAclAssociation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReplaceNetworkAclEntry(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReplaceRoute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReplaceRouteTableAssociation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ReportInstanceStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RequestSpotInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResetImageAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResetInstanceAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResetNetworkInterfaceAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResetSnapshotAttribute(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RevokeSecurityGroupEgress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RevokeSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RunInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StopInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_TerminateInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UnassignPrivateIpAddresses(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UnmonitorInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EC2ActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EC2ActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EC2ActionIdentifiers(EC2ActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EC2ActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EC2ActionIdentifiers(EC2ActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::EC2ActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::EC2ActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::EC2ActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "EC2ActionIdentifiers");
