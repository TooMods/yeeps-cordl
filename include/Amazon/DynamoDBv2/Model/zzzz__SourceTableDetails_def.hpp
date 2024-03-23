#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SourceTableDetails)
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
namespace Amazon::DynamoDBv2 {
class BillingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class SourceTableDetails;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::SourceTableDetails);
// Type: Amazon.DynamoDBv2.Model::SourceTableDetails
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::SourceTableDetails*
class CORDL_TYPE SourceTableDetails : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BillingMode, put = set_BillingMode))::Amazon::DynamoDBv2::BillingMode* BillingMode;

  __declspec(property(get = get_ItemCount, put = set_ItemCount)) int64_t ItemCount;

  __declspec(property(get = get_KeySchema, put = set_KeySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* KeySchema;

  __declspec(property(get = get_ProvisionedThroughput, put = set_ProvisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ProvisionedThroughput;

  __declspec(property(get = get_TableArn, put = set_TableArn))::StringW TableArn;

  __declspec(property(get = get_TableCreationDateTime, put = set_TableCreationDateTime))::System::DateTime TableCreationDateTime;

  __declspec(property(get = get_TableId, put = set_TableId))::StringW TableId;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_TableSizeBytes, put = set_TableSizeBytes)) int64_t TableSizeBytes;

  /// @brief Field _billingMode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__billingMode, put = __cordl_internal_set__billingMode))::Amazon::DynamoDBv2::BillingMode* _billingMode;

  /// @brief Field _itemCount, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__itemCount, put = __cordl_internal_set__itemCount))::System::Nullable_1<int64_t> _itemCount;

  /// @brief Field _keySchema, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__keySchema, put = __cordl_internal_set__keySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* _keySchema;

  /// @brief Field _provisionedThroughput, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughput, put = __cordl_internal_set__provisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* _provisionedThroughput;

  /// @brief Field _tableArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tableArn, put = __cordl_internal_set__tableArn))::StringW _tableArn;

  /// @brief Field _tableCreationDateTime, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__tableCreationDateTime, put = __cordl_internal_set__tableCreationDateTime))::System::Nullable_1<::System::DateTime> _tableCreationDateTime;

  /// @brief Field _tableId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__tableId, put = __cordl_internal_set__tableId))::StringW _tableId;

  /// @brief Field _tableName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _tableSizeBytes, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__tableSizeBytes, put = __cordl_internal_set__tableSizeBytes))::System::Nullable_1<int64_t> _tableSizeBytes;

  /// @brief Method IsSetBillingMode, addr 0x1050fb4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBillingMode();

  /// @brief Method IsSetItemCount, addr 0x10510c0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetItemCount();

  /// @brief Method IsSetKeySchema, addr 0x105110c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeySchema();

  /// @brief Method IsSetProvisionedThroughput, addr 0x1051170, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughput();

  /// @brief Method IsSetTableArn, addr 0x1051190, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableArn();

  /// @brief Method IsSetTableCreationDateTime, addr 0x105124c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTableCreationDateTime();

  /// @brief Method IsSetTableId, addr 0x1051298, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableId();

  /// @brief Method IsSetTableName, addr 0x10512b8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetTableSizeBytes, addr 0x1051374, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTableSizeBytes();

  static inline ::Amazon::DynamoDBv2::Model::SourceTableDetails* New_ctor();

  constexpr ::Amazon::DynamoDBv2::BillingMode*& __cordl_internal_get__billingMode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& __cordl_internal_get__billingMode() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__itemCount() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__itemCount();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& __cordl_internal_get__keySchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const& __cordl_internal_get__keySchema() const;

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& __cordl_internal_get__provisionedThroughput();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const& __cordl_internal_get__provisionedThroughput() const;

  constexpr ::StringW const& __cordl_internal_get__tableArn() const;

  constexpr ::StringW& __cordl_internal_get__tableArn();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__tableCreationDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__tableCreationDateTime();

  constexpr ::StringW const& __cordl_internal_get__tableId() const;

  constexpr ::StringW& __cordl_internal_get__tableId();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__tableSizeBytes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__tableSizeBytes();

  constexpr void __cordl_internal_set__billingMode(::Amazon::DynamoDBv2::BillingMode* value);

  constexpr void __cordl_internal_set__itemCount(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  constexpr void __cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  constexpr void __cordl_internal_set__tableArn(::StringW value);

  constexpr void __cordl_internal_set__tableCreationDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__tableId(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__tableSizeBytes(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x10513b0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BillingMode, addr 0x1050fa4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BillingMode* get_BillingMode();

  /// @brief Method get_ItemCount, addr 0x1051014, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ItemCount();

  /// @brief Method get_KeySchema, addr 0x10510fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* get_KeySchema();

  /// @brief Method get_ProvisionedThroughput, addr 0x1051160, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* get_ProvisionedThroughput();

  /// @brief Method get_TableArn, addr 0x1051180, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableArn();

  /// @brief Method get_TableCreationDateTime, addr 0x10511a0, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_TableCreationDateTime();

  /// @brief Method get_TableId, addr 0x1051288, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableId();

  /// @brief Method get_TableName, addr 0x10512a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TableSizeBytes, addr 0x10512c8, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_TableSizeBytes();

  /// @brief Method set_BillingMode, addr 0x1050fac, size 0x8, virtual false, abstract: false, final false
  inline void set_BillingMode(::Amazon::DynamoDBv2::BillingMode* value);

  /// @brief Method set_ItemCount, addr 0x1051050, size 0x70, virtual false, abstract: false, final false
  inline void set_ItemCount(int64_t value);

  /// @brief Method set_KeySchema, addr 0x1051104, size 0x8, virtual false, abstract: false, final false
  inline void set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  /// @brief Method set_ProvisionedThroughput, addr 0x1051168, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  /// @brief Method set_TableArn, addr 0x1051188, size 0x8, virtual false, abstract: false, final false
  inline void set_TableArn(::StringW value);

  /// @brief Method set_TableCreationDateTime, addr 0x10511dc, size 0x70, virtual false, abstract: false, final false
  inline void set_TableCreationDateTime(::System::DateTime value);

  /// @brief Method set_TableId, addr 0x1051290, size 0x8, virtual false, abstract: false, final false
  inline void set_TableId(::StringW value);

  /// @brief Method set_TableName, addr 0x10512b0, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TableSizeBytes, addr 0x1051304, size 0x70, virtual false, abstract: false, final false
  inline void set_TableSizeBytes(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceTableDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SourceTableDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SourceTableDetails(SourceTableDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SourceTableDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SourceTableDetails(SourceTableDetails const&) = delete;

  /// @brief Field _billingMode, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BillingMode* ____billingMode;

  /// @brief Field _itemCount, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____itemCount;

  /// @brief Field _keySchema, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* ____keySchema;

  /// @brief Field _provisionedThroughput, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ____provisionedThroughput;

  /// @brief Field _tableArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____tableArn;

  /// @brief Field _tableCreationDateTime, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____tableCreationDateTime;

  /// @brief Field _tableId, offset: 0x50, size: 0x8, def value: None
  ::StringW ____tableId;

  /// @brief Field _tableName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _tableSizeBytes, offset: 0x60, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____tableSizeBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::SourceTableDetails, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____billingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____itemCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____keySchema) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____provisionedThroughput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____tableArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____tableCreationDateTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____tableId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____tableName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableDetails, ____tableSizeBytes) == 0x60, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::SourceTableDetails);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::SourceTableDetails*, "Amazon.DynamoDBv2.Model", "SourceTableDetails");
