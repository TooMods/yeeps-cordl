#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GlobalTableDescription)
namespace Amazon::DynamoDBv2::Model {
class ReplicaDescription;
}
namespace Amazon::DynamoDBv2 {
class GlobalTableStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GlobalTableDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GlobalTableDescription);
// Type: Amazon.DynamoDBv2.Model::GlobalTableDescription
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GlobalTableDescription*
class CORDL_TYPE GlobalTableDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CreationDateTime, put = set_CreationDateTime))::System::DateTime CreationDateTime;

  __declspec(property(get = get_GlobalTableArn, put = set_GlobalTableArn))::StringW GlobalTableArn;

  __declspec(property(get = get_GlobalTableName, put = set_GlobalTableName))::StringW GlobalTableName;

  __declspec(property(get = get_GlobalTableStatus, put = set_GlobalTableStatus))::Amazon::DynamoDBv2::GlobalTableStatus* GlobalTableStatus;

  __declspec(property(get = get_ReplicationGroup, put = set_ReplicationGroup))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* ReplicationGroup;

  /// @brief Field _creationDateTime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__creationDateTime, put = __cordl_internal_set__creationDateTime))::System::Nullable_1<::System::DateTime> _creationDateTime;

  /// @brief Field _globalTableArn, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableArn, put = __cordl_internal_set__globalTableArn))::StringW _globalTableArn;

  /// @brief Field _globalTableName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableName, put = __cordl_internal_set__globalTableName))::StringW _globalTableName;

  /// @brief Field _globalTableStatus, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableStatus, put = __cordl_internal_set__globalTableStatus))::Amazon::DynamoDBv2::GlobalTableStatus* _globalTableStatus;

  /// @brief Field _replicationGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__replicationGroup,
                      put = __cordl_internal_set__replicationGroup))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* _replicationGroup;

  /// @brief Method IsSetCreationDateTime, addr 0x1049a60, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCreationDateTime();

  /// @brief Method IsSetGlobalTableArn, addr 0x1049aac, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableArn();

  /// @brief Method IsSetGlobalTableName, addr 0x1049acc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableName();

  /// @brief Method IsSetGlobalTableStatus, addr 0x1049aec, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableStatus();

  /// @brief Method IsSetReplicationGroup, addr 0x1049b5c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicationGroup();

  static inline ::Amazon::DynamoDBv2::Model::GlobalTableDescription* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__creationDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__creationDateTime();

  constexpr ::StringW const& __cordl_internal_get__globalTableArn() const;

  constexpr ::StringW& __cordl_internal_get__globalTableArn();

  constexpr ::StringW const& __cordl_internal_get__globalTableName() const;

  constexpr ::StringW& __cordl_internal_get__globalTableName();

  constexpr ::Amazon::DynamoDBv2::GlobalTableStatus*& __cordl_internal_get__globalTableStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::GlobalTableStatus*> const& __cordl_internal_get__globalTableStatus() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*& __cordl_internal_get__replicationGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*> const& __cordl_internal_get__replicationGroup() const;

  constexpr void __cordl_internal_set__creationDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__globalTableArn(::StringW value);

  constexpr void __cordl_internal_set__globalTableName(::StringW value);

  constexpr void __cordl_internal_set__globalTableStatus(::Amazon::DynamoDBv2::GlobalTableStatus* value);

  constexpr void __cordl_internal_set__replicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* value);

  /// @brief Method .ctor, addr 0x1049bb0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CreationDateTime, addr 0x10499b4, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_CreationDateTime();

  /// @brief Method get_GlobalTableArn, addr 0x1049a9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableArn();

  /// @brief Method get_GlobalTableName, addr 0x1049abc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableName();

  /// @brief Method get_GlobalTableStatus, addr 0x1049adc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::GlobalTableStatus* get_GlobalTableStatus();

  /// @brief Method get_ReplicationGroup, addr 0x1049b4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* get_ReplicationGroup();

  /// @brief Method set_CreationDateTime, addr 0x10499f0, size 0x70, virtual false, abstract: false, final false
  inline void set_CreationDateTime(::System::DateTime value);

  /// @brief Method set_GlobalTableArn, addr 0x1049aa4, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableArn(::StringW value);

  /// @brief Method set_GlobalTableName, addr 0x1049ac4, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableName(::StringW value);

  /// @brief Method set_GlobalTableStatus, addr 0x1049ae4, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableStatus(::Amazon::DynamoDBv2::GlobalTableStatus* value);

  /// @brief Method set_ReplicationGroup, addr 0x1049b54, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalTableDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalTableDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalTableDescription(GlobalTableDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalTableDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalTableDescription(GlobalTableDescription const&) = delete;

  /// @brief Field _creationDateTime, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____creationDateTime;

  /// @brief Field _globalTableArn, offset: 0x20, size: 0x8, def value: None
  ::StringW ____globalTableArn;

  /// @brief Field _globalTableName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____globalTableName;

  /// @brief Field _globalTableStatus, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::GlobalTableStatus* ____globalTableStatus;

  /// @brief Field _replicationGroup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* ____replicationGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GlobalTableDescription, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableDescription, ____creationDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableDescription, ____globalTableArn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableDescription, ____globalTableName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableDescription, ____globalTableStatus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableDescription, ____replicationGroup) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GlobalTableDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GlobalTableDescription*, "Amazon.DynamoDBv2.Model", "GlobalTableDescription");
