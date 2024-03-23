#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DynamoDBActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class DynamoDBActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DynamoDBActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::DynamoDBActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::DynamoDBActionIdentifiers*
class CORDL_TYPE DynamoDBActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllDynamoDBActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllDynamoDBActions, put = setStaticF_AllDynamoDBActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllDynamoDBActions;

  /// @brief Field BatchGetItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BatchGetItem, put = setStaticF_BatchGetItem))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* BatchGetItem;

  /// @brief Field BatchWriteItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BatchWriteItem, put = setStaticF_BatchWriteItem))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* BatchWriteItem;

  /// @brief Field CreateTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateTable, put = setStaticF_CreateTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateTable;

  /// @brief Field DeleteItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteItem, put = setStaticF_DeleteItem))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteItem;

  /// @brief Field DeleteTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTable, put = setStaticF_DeleteTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTable;

  /// @brief Field DescribeTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTable, put = setStaticF_DescribeTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTable;

  /// @brief Field GetItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetItem, put = setStaticF_GetItem))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetItem;

  /// @brief Field ListTables, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListTables, put = setStaticF_ListTables))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListTables;

  /// @brief Field PutItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutItem, put = setStaticF_PutItem))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutItem;

  /// @brief Field Query, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Query, put = setStaticF_Query))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Query;

  /// @brief Field Scan, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Scan, put = setStaticF_Scan))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Scan;

  /// @brief Field UpdateItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateItem, put = setStaticF_UpdateItem))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateItem;

  /// @brief Field UpdateTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateTable, put = setStaticF_UpdateTable))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateTable;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllDynamoDBActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_BatchGetItem();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_BatchWriteItem();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateTable();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteItem();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTable();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTable();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetItem();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListTables();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutItem();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Query();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Scan();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateItem();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateTable();

  static inline void setStaticF_AllDynamoDBActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_BatchGetItem(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_BatchWriteItem(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteItem(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetItem(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListTables(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutItem(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Query(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Scan(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateItem(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateTable(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBActionIdentifiers(DynamoDBActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBActionIdentifiers(DynamoDBActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DynamoDBActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DynamoDBActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DynamoDBActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "DynamoDBActionIdentifiers");
