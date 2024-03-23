#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TableAutoScalingDescription)
namespace Amazon::DynamoDBv2::Model {
class ReplicaAutoScalingDescription;
}
namespace Amazon::DynamoDBv2 {
class TableStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TableAutoScalingDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription);
// Type: Amazon.DynamoDBv2.Model::TableAutoScalingDescription
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TableAutoScalingDescription*
class CORDL_TYPE TableAutoScalingDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Replicas, put = set_Replicas))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* Replicas;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_TableStatus, put = set_TableStatus))::Amazon::DynamoDBv2::TableStatus* TableStatus;

  /// @brief Field _replicas, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__replicas,
                      put = __cordl_internal_set__replicas))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* _replicas;

  /// @brief Field _tableName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _tableStatus, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableStatus, put = __cordl_internal_set__tableStatus))::Amazon::DynamoDBv2::TableStatus* _tableStatus;

  /// @brief Method IsSetReplicas, addr 0x1052398, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicas();

  /// @brief Method IsSetTableName, addr 0x10523fc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetTableStatus, addr 0x105241c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetTableStatus();

  static inline ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*& __cordl_internal_get__replicas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*> const& __cordl_internal_get__replicas() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::Amazon::DynamoDBv2::TableStatus*& __cordl_internal_get__tableStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::TableStatus*> const& __cordl_internal_get__tableStatus() const;

  constexpr void __cordl_internal_set__replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__tableStatus(::Amazon::DynamoDBv2::TableStatus* value);

  /// @brief Method .ctor, addr 0x105247c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Replicas, addr 0x1052388, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* get_Replicas();

  /// @brief Method get_TableName, addr 0x10523ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TableStatus, addr 0x105240c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::TableStatus* get_TableStatus();

  /// @brief Method set_Replicas, addr 0x1052390, size 0x8, virtual false, abstract: false, final false
  inline void set_Replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* value);

  /// @brief Method set_TableName, addr 0x10523f4, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TableStatus, addr 0x1052414, size 0x8, virtual false, abstract: false, final false
  inline void set_TableStatus(::Amazon::DynamoDBv2::TableStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableAutoScalingDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableAutoScalingDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableAutoScalingDescription(TableAutoScalingDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableAutoScalingDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableAutoScalingDescription(TableAutoScalingDescription const&) = delete;

  /// @brief Field _replicas, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* ____replicas;

  /// @brief Field _tableName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _tableStatus, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::TableStatus* ____tableStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription, ____replicas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription, ____tableName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription, ____tableStatus) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*, "Amazon.DynamoDBv2.Model", "TableAutoScalingDescription");
