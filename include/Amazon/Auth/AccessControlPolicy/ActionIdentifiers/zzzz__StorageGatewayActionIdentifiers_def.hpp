#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StorageGatewayActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class StorageGatewayActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::StorageGatewayActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::StorageGatewayActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::StorageGatewayActionIdentifiers*
class CORDL_TYPE StorageGatewayActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field ActivateGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ActivateGateway, put = setStaticF_ActivateGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ActivateGateway;

  /// @brief Field AddCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddCache, put = setStaticF_AddCache))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddCache;

  /// @brief Field AddUploadBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddUploadBuffer, put = setStaticF_AddUploadBuffer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddUploadBuffer;

  /// @brief Field AddWorkingStorage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddWorkingStorage, put = setStaticF_AddWorkingStorage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddWorkingStorage;

  /// @brief Field AllStorageGatewayActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllStorageGatewayActions, put = setStaticF_AllStorageGatewayActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllStorageGatewayActions;

  /// @brief Field CancelArchival, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelArchival, put = setStaticF_CancelArchival))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelArchival;

  /// @brief Field CancelRetrieval, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelRetrieval, put = setStaticF_CancelRetrieval))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelRetrieval;

  /// @brief Field CreateCachediSCSIVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateCachediSCSIVolume, put = setStaticF_CreateCachediSCSIVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateCachediSCSIVolume;

  /// @brief Field CreateSnapshot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSnapshot, put = setStaticF_CreateSnapshot))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSnapshot;

  /// @brief Field CreateSnapshotFromVolumeRecoveryPoint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateSnapshotFromVolumeRecoveryPoint,
                             put = setStaticF_CreateSnapshotFromVolumeRecoveryPoint))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateSnapshotFromVolumeRecoveryPoint;

  /// @brief Field CreateStorediSCSIVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateStorediSCSIVolume, put = setStaticF_CreateStorediSCSIVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateStorediSCSIVolume;

  /// @brief Field CreateTapes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateTapes, put = setStaticF_CreateTapes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateTapes;

  /// @brief Field DeleteBandwidthRateLimit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteBandwidthRateLimit, put = setStaticF_DeleteBandwidthRateLimit))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteBandwidthRateLimit;

  /// @brief Field DeleteChapCredentials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteChapCredentials, put = setStaticF_DeleteChapCredentials))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteChapCredentials;

  /// @brief Field DeleteGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteGateway, put = setStaticF_DeleteGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteGateway;

  /// @brief Field DeleteSnapshotSchedule, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSnapshotSchedule, put = setStaticF_DeleteSnapshotSchedule))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSnapshotSchedule;

  /// @brief Field DeleteTape, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTape, put = setStaticF_DeleteTape))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTape;

  /// @brief Field DeleteTapeArchive, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTapeArchive, put = setStaticF_DeleteTapeArchive))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTapeArchive;

  /// @brief Field DeleteVolume, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVolume, put = setStaticF_DeleteVolume))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVolume;

  /// @brief Field DescribeBandwidthRateLimit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeBandwidthRateLimit,
                             put = setStaticF_DescribeBandwidthRateLimit))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeBandwidthRateLimit;

  /// @brief Field DescribeCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCache, put = setStaticF_DescribeCache))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCache;

  /// @brief Field DescribeCachediSCSIVolumes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCachediSCSIVolumes,
                             put = setStaticF_DescribeCachediSCSIVolumes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCachediSCSIVolumes;

  /// @brief Field DescribeChapCredentials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeChapCredentials, put = setStaticF_DescribeChapCredentials))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeChapCredentials;

  /// @brief Field DescribeGatewayInformation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeGatewayInformation,
                             put = setStaticF_DescribeGatewayInformation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeGatewayInformation;

  /// @brief Field DescribeMaintenanceStartTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeMaintenanceStartTime,
                             put = setStaticF_DescribeMaintenanceStartTime))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeMaintenanceStartTime;

  /// @brief Field DescribeSnapshotSchedule, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSnapshotSchedule, put = setStaticF_DescribeSnapshotSchedule))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSnapshotSchedule;

  /// @brief Field DescribeStorediSCSIVolumes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStorediSCSIVolumes,
                             put = setStaticF_DescribeStorediSCSIVolumes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStorediSCSIVolumes;

  /// @brief Field DescribeTapeArchives, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTapeArchives, put = setStaticF_DescribeTapeArchives))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTapeArchives;

  /// @brief Field DescribeTapeRecoveryPoints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTapeRecoveryPoints,
                             put = setStaticF_DescribeTapeRecoveryPoints))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTapeRecoveryPoints;

  /// @brief Field DescribeTapes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTapes, put = setStaticF_DescribeTapes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTapes;

  /// @brief Field DescribeUploadBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeUploadBuffer, put = setStaticF_DescribeUploadBuffer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeUploadBuffer;

  /// @brief Field DescribeVTLDevices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVTLDevices, put = setStaticF_DescribeVTLDevices))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVTLDevices;

  /// @brief Field DescribeWorkingStorage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeWorkingStorage, put = setStaticF_DescribeWorkingStorage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeWorkingStorage;

  /// @brief Field DisableGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisableGateway, put = setStaticF_DisableGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisableGateway;

  /// @brief Field ListGateways, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListGateways, put = setStaticF_ListGateways))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListGateways;

  /// @brief Field ListLocalDisks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListLocalDisks, put = setStaticF_ListLocalDisks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListLocalDisks;

  /// @brief Field ListVolumeRecoveryPoints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListVolumeRecoveryPoints, put = setStaticF_ListVolumeRecoveryPoints))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListVolumeRecoveryPoints;

  /// @brief Field ListVolumes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListVolumes, put = setStaticF_ListVolumes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListVolumes;

  /// @brief Field RetrieveTapeArchive, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RetrieveTapeArchive, put = setStaticF_RetrieveTapeArchive))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RetrieveTapeArchive;

  /// @brief Field RetrieveTapeRecoveryPoint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RetrieveTapeRecoveryPoint, put = setStaticF_RetrieveTapeRecoveryPoint))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RetrieveTapeRecoveryPoint;

  /// @brief Field ShutdownGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShutdownGateway, put = setStaticF_ShutdownGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ShutdownGateway;

  /// @brief Field StartGateway, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartGateway, put = setStaticF_StartGateway))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartGateway;

  /// @brief Field UpdateBandwidthRateLimit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateBandwidthRateLimit, put = setStaticF_UpdateBandwidthRateLimit))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateBandwidthRateLimit;

  /// @brief Field UpdateChapCredentials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateChapCredentials, put = setStaticF_UpdateChapCredentials))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateChapCredentials;

  /// @brief Field UpdateGatewayInformation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateGatewayInformation, put = setStaticF_UpdateGatewayInformation))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateGatewayInformation;

  /// @brief Field UpdateGatewaySoftwareNow, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateGatewaySoftwareNow, put = setStaticF_UpdateGatewaySoftwareNow))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateGatewaySoftwareNow;

  /// @brief Field UpdateMaintenanceStartTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateMaintenanceStartTime,
                             put = setStaticF_UpdateMaintenanceStartTime))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateMaintenanceStartTime;

  /// @brief Field UpdateSnapshotSchedule, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateSnapshotSchedule, put = setStaticF_UpdateSnapshotSchedule))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateSnapshotSchedule;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ActivateGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddCache();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddUploadBuffer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddWorkingStorage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllStorageGatewayActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelArchival();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelRetrieval();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateCachediSCSIVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSnapshot();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateSnapshotFromVolumeRecoveryPoint();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateStorediSCSIVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateTapes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteBandwidthRateLimit();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteChapCredentials();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSnapshotSchedule();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTape();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTapeArchive();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVolume();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeBandwidthRateLimit();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCache();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCachediSCSIVolumes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeChapCredentials();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeGatewayInformation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeMaintenanceStartTime();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSnapshotSchedule();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStorediSCSIVolumes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTapeArchives();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTapeRecoveryPoints();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTapes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeUploadBuffer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVTLDevices();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeWorkingStorage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisableGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListGateways();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListLocalDisks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListVolumeRecoveryPoints();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListVolumes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RetrieveTapeArchive();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RetrieveTapeRecoveryPoint();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ShutdownGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartGateway();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateBandwidthRateLimit();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateChapCredentials();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateGatewayInformation();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateGatewaySoftwareNow();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateMaintenanceStartTime();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateSnapshotSchedule();

  static inline void setStaticF_ActivateGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddCache(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddUploadBuffer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddWorkingStorage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllStorageGatewayActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelArchival(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelRetrieval(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateCachediSCSIVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSnapshot(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateSnapshotFromVolumeRecoveryPoint(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateStorediSCSIVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateTapes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteBandwidthRateLimit(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteChapCredentials(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSnapshotSchedule(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTape(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTapeArchive(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVolume(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeBandwidthRateLimit(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCache(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCachediSCSIVolumes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeChapCredentials(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeGatewayInformation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeMaintenanceStartTime(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSnapshotSchedule(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStorediSCSIVolumes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTapeArchives(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTapeRecoveryPoints(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTapes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeUploadBuffer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVTLDevices(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeWorkingStorage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisableGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListGateways(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListLocalDisks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListVolumeRecoveryPoints(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListVolumes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RetrieveTapeArchive(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RetrieveTapeRecoveryPoint(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ShutdownGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartGateway(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateBandwidthRateLimit(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateChapCredentials(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateGatewayInformation(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateGatewaySoftwareNow(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateMaintenanceStartTime(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateSnapshotSchedule(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StorageGatewayActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StorageGatewayActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StorageGatewayActionIdentifiers(StorageGatewayActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StorageGatewayActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StorageGatewayActionIdentifiers(StorageGatewayActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::StorageGatewayActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::StorageGatewayActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::StorageGatewayActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "StorageGatewayActionIdentifiers");
