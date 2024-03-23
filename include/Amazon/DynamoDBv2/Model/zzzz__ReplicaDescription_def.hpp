#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReplicaDescription)
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughputOverride;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexDescription;
}
namespace Amazon::DynamoDBv2 {
class ReplicaStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaDescription);
// Type: Amazon.DynamoDBv2.Model::ReplicaDescription
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaDescription*
class CORDL_TYPE ReplicaDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_KMSMasterKeyId, put = set_KMSMasterKeyId))::StringW KMSMasterKeyId;

  __declspec(property(get = get_ProvisionedThroughputOverride, put = set_ProvisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* ProvisionedThroughputOverride;

  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  __declspec(property(get = get_ReplicaInaccessibleDateTime, put = set_ReplicaInaccessibleDateTime))::System::DateTime ReplicaInaccessibleDateTime;

  __declspec(property(get = get_ReplicaStatus, put = set_ReplicaStatus))::Amazon::DynamoDBv2::ReplicaStatus* ReplicaStatus;

  __declspec(property(get = get_ReplicaStatusDescription, put = set_ReplicaStatusDescription))::StringW ReplicaStatusDescription;

  __declspec(property(get = get_ReplicaStatusPercentProgress, put = set_ReplicaStatusPercentProgress))::StringW ReplicaStatusPercentProgress;

  /// @brief Field _globalSecondaryIndexes, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__globalSecondaryIndexes,
      put = __cordl_internal_set__globalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* _globalSecondaryIndexes;

  /// @brief Field _kmsMasterKeyId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__kmsMasterKeyId, put = __cordl_internal_set__kmsMasterKeyId))::StringW _kmsMasterKeyId;

  /// @brief Field _provisionedThroughputOverride, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughputOverride,
                      put = __cordl_internal_set__provisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* _provisionedThroughputOverride;

  /// @brief Field _regionName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Field _replicaInaccessibleDateTime, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__replicaInaccessibleDateTime,
                      put = __cordl_internal_set__replicaInaccessibleDateTime))::System::Nullable_1<::System::DateTime> _replicaInaccessibleDateTime;

  /// @brief Field _replicaStatus, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaStatus, put = __cordl_internal_set__replicaStatus))::Amazon::DynamoDBv2::ReplicaStatus* _replicaStatus;

  /// @brief Field _replicaStatusDescription, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaStatusDescription, put = __cordl_internal_set__replicaStatusDescription))::StringW _replicaStatusDescription;

  /// @brief Field _replicaStatusPercentProgress, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaStatusPercentProgress, put = __cordl_internal_set__replicaStatusPercentProgress))::StringW _replicaStatusPercentProgress;

  /// @brief Method IsSetGlobalSecondaryIndexes, addr 0x104e8c8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexes();

  /// @brief Method IsSetKMSMasterKeyId, addr 0x104e92c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKMSMasterKeyId();

  /// @brief Method IsSetProvisionedThroughputOverride, addr 0x104e94c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughputOverride();

  /// @brief Method IsSetRegionName, addr 0x104e96c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  /// @brief Method IsSetReplicaInaccessibleDateTime, addr 0x104ea28, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReplicaInaccessibleDateTime();

  /// @brief Method IsSetReplicaStatus, addr 0x104ea74, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReplicaStatus();

  /// @brief Method IsSetReplicaStatusDescription, addr 0x104eae4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaStatusDescription();

  /// @brief Method IsSetReplicaStatusPercentProgress, addr 0x104eb04, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaStatusPercentProgress();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaDescription* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*& __cordl_internal_get__globalSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*> const&
  __cordl_internal_get__globalSecondaryIndexes() const;

  constexpr ::StringW const& __cordl_internal_get__kmsMasterKeyId() const;

  constexpr ::StringW& __cordl_internal_get__kmsMasterKeyId();

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*& __cordl_internal_get__provisionedThroughputOverride();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*> const& __cordl_internal_get__provisionedThroughputOverride() const;

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__replicaInaccessibleDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__replicaInaccessibleDateTime();

  constexpr ::Amazon::DynamoDBv2::ReplicaStatus*& __cordl_internal_get__replicaStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReplicaStatus*> const& __cordl_internal_get__replicaStatus() const;

  constexpr ::StringW const& __cordl_internal_get__replicaStatusDescription() const;

  constexpr ::StringW& __cordl_internal_get__replicaStatusDescription();

  constexpr ::StringW const& __cordl_internal_get__replicaStatusPercentProgress() const;

  constexpr ::StringW& __cordl_internal_get__replicaStatusPercentProgress();

  constexpr void __cordl_internal_set__globalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* value);

  constexpr void __cordl_internal_set__kmsMasterKeyId(::StringW value);

  constexpr void __cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value);

  constexpr void __cordl_internal_set__regionName(::StringW value);

  constexpr void __cordl_internal_set__replicaInaccessibleDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__replicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value);

  constexpr void __cordl_internal_set__replicaStatusDescription(::StringW value);

  constexpr void __cordl_internal_set__replicaStatusPercentProgress(::StringW value);

  /// @brief Method .ctor, addr 0x104eb14, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x104e8b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_KMSMasterKeyId, addr 0x104e91c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KMSMasterKeyId();

  /// @brief Method get_ProvisionedThroughputOverride, addr 0x104e93c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* get_ProvisionedThroughputOverride();

  /// @brief Method get_RegionName, addr 0x104e95c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method get_ReplicaInaccessibleDateTime, addr 0x104e97c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_ReplicaInaccessibleDateTime();

  /// @brief Method get_ReplicaStatus, addr 0x104ea64, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReplicaStatus* get_ReplicaStatus();

  /// @brief Method get_ReplicaStatusDescription, addr 0x104ead4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ReplicaStatusDescription();

  /// @brief Method get_ReplicaStatusPercentProgress, addr 0x104eaf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ReplicaStatusPercentProgress();

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x104e8c0, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* value);

  /// @brief Method set_KMSMasterKeyId, addr 0x104e924, size 0x8, virtual false, abstract: false, final false
  inline void set_KMSMasterKeyId(::StringW value);

  /// @brief Method set_ProvisionedThroughputOverride, addr 0x104e944, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value);

  /// @brief Method set_RegionName, addr 0x104e964, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

  /// @brief Method set_ReplicaInaccessibleDateTime, addr 0x104e9b8, size 0x70, virtual false, abstract: false, final false
  inline void set_ReplicaInaccessibleDateTime(::System::DateTime value);

  /// @brief Method set_ReplicaStatus, addr 0x104ea6c, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value);

  /// @brief Method set_ReplicaStatusDescription, addr 0x104eadc, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaStatusDescription(::StringW value);

  /// @brief Method set_ReplicaStatusPercentProgress, addr 0x104eafc, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaStatusPercentProgress(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaDescription(ReplicaDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaDescription(ReplicaDescription const&) = delete;

  /// @brief Field _globalSecondaryIndexes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* ____globalSecondaryIndexes;

  /// @brief Field _kmsMasterKeyId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____kmsMasterKeyId;

  /// @brief Field _provisionedThroughputOverride, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* ____provisionedThroughputOverride;

  /// @brief Field _regionName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____regionName;

  /// @brief Field _replicaInaccessibleDateTime, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____replicaInaccessibleDateTime;

  /// @brief Field _replicaStatus, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReplicaStatus* ____replicaStatus;

  /// @brief Field _replicaStatusDescription, offset: 0x48, size: 0x8, def value: None
  ::StringW ____replicaStatusDescription;

  /// @brief Field _replicaStatusPercentProgress, offset: 0x50, size: 0x8, def value: None
  ::StringW ____replicaStatusPercentProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaDescription, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____globalSecondaryIndexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____kmsMasterKeyId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____provisionedThroughputOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____regionName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____replicaInaccessibleDateTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____replicaStatus) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____replicaStatusDescription) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaDescription, ____replicaStatusPercentProgress) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaDescription*, "Amazon.DynamoDBv2.Model", "ReplicaDescription");
