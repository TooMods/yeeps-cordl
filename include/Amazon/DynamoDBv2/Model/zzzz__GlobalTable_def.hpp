#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GlobalTable)
namespace Amazon::DynamoDBv2::Model {
class Replica;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GlobalTable;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GlobalTable);
// Type: Amazon.DynamoDBv2.Model::GlobalTable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GlobalTable*
class CORDL_TYPE GlobalTable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_GlobalTableName, put = set_GlobalTableName))::StringW GlobalTableName;

  __declspec(property(get = get_ReplicationGroup, put = set_ReplicationGroup))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* ReplicationGroup;

  /// @brief Field _globalTableName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableName, put = __cordl_internal_set__globalTableName))::StringW _globalTableName;

  /// @brief Field _replicationGroup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__replicationGroup,
                      put = __cordl_internal_set__replicationGroup))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* _replicationGroup;

  /// @brief Method IsSetGlobalTableName, addr 0x104989c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableName();

  /// @brief Method IsSetReplicationGroup, addr 0x10498bc, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicationGroup();

  static inline ::Amazon::DynamoDBv2::Model::GlobalTable* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__globalTableName() const;

  constexpr ::StringW& __cordl_internal_get__globalTableName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*& __cordl_internal_get__replicationGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>*> const& __cordl_internal_get__replicationGroup() const;

  constexpr void __cordl_internal_set__globalTableName(::StringW value);

  constexpr void __cordl_internal_set__replicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* value);

  /// @brief Method .ctor, addr 0x1049910, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTableName, addr 0x104988c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableName();

  /// @brief Method get_ReplicationGroup, addr 0x10498ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* get_ReplicationGroup();

  /// @brief Method set_GlobalTableName, addr 0x1049894, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableName(::StringW value);

  /// @brief Method set_ReplicationGroup, addr 0x10498b4, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicationGroup(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalTable(GlobalTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalTable(GlobalTable const&) = delete;

  /// @brief Field _globalTableName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____globalTableName;

  /// @brief Field _replicationGroup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Replica*>* ____replicationGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GlobalTable, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTable, ____globalTableName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTable, ____replicationGroup) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GlobalTable);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GlobalTable*, "Amazon.DynamoDBv2.Model", "GlobalTable");
