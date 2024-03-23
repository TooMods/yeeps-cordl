#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConsumedCapacity)
namespace Amazon::DynamoDBv2::Model {
class Capacity;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ConsumedCapacity);
// Type: Amazon.DynamoDBv2.Model::ConsumedCapacity
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ConsumedCapacity*
class CORDL_TYPE ConsumedCapacity : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CapacityUnits, put = set_CapacityUnits)) double_t CapacityUnits;

  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_LocalSecondaryIndexes,
                      put = set_LocalSecondaryIndexes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* LocalSecondaryIndexes;

  __declspec(property(get = get_ReadCapacityUnits, put = set_ReadCapacityUnits)) double_t ReadCapacityUnits;

  __declspec(property(get = get_Table, put = set_Table))::Amazon::DynamoDBv2::Model::Capacity* Table;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_WriteCapacityUnits, put = set_WriteCapacityUnits)) double_t WriteCapacityUnits;

  /// @brief Field _capacityUnits, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__capacityUnits, put = __cordl_internal_set__capacityUnits))::System::Nullable_1<double_t> _capacityUnits;

  /// @brief Field _globalSecondaryIndexes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__globalSecondaryIndexes,
                      put = __cordl_internal_set__globalSecondaryIndexes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* _globalSecondaryIndexes;

  /// @brief Field _localSecondaryIndexes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__localSecondaryIndexes,
                      put = __cordl_internal_set__localSecondaryIndexes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* _localSecondaryIndexes;

  /// @brief Field _readCapacityUnits, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__readCapacityUnits, put = __cordl_internal_set__readCapacityUnits))::System::Nullable_1<double_t> _readCapacityUnits;

  /// @brief Field _table, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::Amazon::DynamoDBv2::Model::Capacity* _table;

  /// @brief Field _tableName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _writeCapacityUnits, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__writeCapacityUnits, put = __cordl_internal_set__writeCapacityUnits))::System::Nullable_1<double_t> _writeCapacityUnits;

  /// @brief Method IsSetCapacityUnits, addr 0x1227f1c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCapacityUnits();

  /// @brief Method IsSetGlobalSecondaryIndexes, addr 0x1227f68, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexes();

  /// @brief Method IsSetLocalSecondaryIndexes, addr 0x1227fd0, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetLocalSecondaryIndexes();

  /// @brief Method IsSetReadCapacityUnits, addr 0x12280d4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReadCapacityUnits();

  /// @brief Method IsSetTable, addr 0x1228120, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTable();

  /// @brief Method IsSetTableName, addr 0x1228140, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetWriteCapacityUnits, addr 0x12281fc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetWriteCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::ConsumedCapacity* New_ctor();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__capacityUnits() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__capacityUnits();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>*& __cordl_internal_get__globalSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>*> const&
  __cordl_internal_get__globalSecondaryIndexes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>*& __cordl_internal_get__localSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>*> const&
  __cordl_internal_get__localSecondaryIndexes() const;

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__readCapacityUnits() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__readCapacityUnits();

  constexpr ::Amazon::DynamoDBv2::Model::Capacity*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Capacity*> const& __cordl_internal_get__table() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__writeCapacityUnits() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__writeCapacityUnits();

  constexpr void __cordl_internal_set__capacityUnits(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__globalSecondaryIndexes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* value);

  constexpr void __cordl_internal_set__localSecondaryIndexes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* value);

  constexpr void __cordl_internal_set__readCapacityUnits(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__table(::Amazon::DynamoDBv2::Model::Capacity* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__writeCapacityUnits(::System::Nullable_1<double_t> value);

  /// @brief Method .ctor, addr 0x1228238, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CapacityUnits, addr 0x1227e70, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_CapacityUnits();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x1227f58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_LocalSecondaryIndexes, addr 0x1227fc0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* get_LocalSecondaryIndexes();

  /// @brief Method get_ReadCapacityUnits, addr 0x1228028, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_ReadCapacityUnits();

  /// @brief Method get_Table, addr 0x1228110, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Capacity* get_Table();

  /// @brief Method get_TableName, addr 0x1228130, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_WriteCapacityUnits, addr 0x1228150, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_WriteCapacityUnits();

  /// @brief Method set_CapacityUnits, addr 0x1227eac, size 0x70, virtual false, abstract: false, final false
  inline void set_CapacityUnits(double_t value);

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x1227f60, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* value);

  /// @brief Method set_LocalSecondaryIndexes, addr 0x1227fc8, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* value);

  /// @brief Method set_ReadCapacityUnits, addr 0x1228064, size 0x70, virtual false, abstract: false, final false
  inline void set_ReadCapacityUnits(double_t value);

  /// @brief Method set_Table, addr 0x1228118, size 0x8, virtual false, abstract: false, final false
  inline void set_Table(::Amazon::DynamoDBv2::Model::Capacity* value);

  /// @brief Method set_TableName, addr 0x1228138, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_WriteCapacityUnits, addr 0x122818c, size 0x70, virtual false, abstract: false, final false
  inline void set_WriteCapacityUnits(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsumedCapacity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsumedCapacity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsumedCapacity(ConsumedCapacity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsumedCapacity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsumedCapacity(ConsumedCapacity const&) = delete;

  /// @brief Field _capacityUnits, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____capacityUnits;

  /// @brief Field _globalSecondaryIndexes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* ____globalSecondaryIndexes;

  /// @brief Field _localSecondaryIndexes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Capacity*>* ____localSecondaryIndexes;

  /// @brief Field _readCapacityUnits, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____readCapacityUnits;

  /// @brief Field _table, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Capacity* ____table;

  /// @brief Field _tableName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _writeCapacityUnits, offset: 0x50, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____writeCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ConsumedCapacity, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ConsumedCapacity, ____capacityUnits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ConsumedCapacity, ____globalSecondaryIndexes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ConsumedCapacity, ____localSecondaryIndexes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ConsumedCapacity, ____readCapacityUnits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ConsumedCapacity, ____table) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ConsumedCapacity, ____tableName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ConsumedCapacity, ____writeCapacityUnits) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ConsumedCapacity);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ConsumedCapacity*, "Amazon.DynamoDBv2.Model", "ConsumedCapacity");
