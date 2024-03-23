#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalSecondaryIndexDescription)
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class Projection;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughputDescription;
}
namespace Amazon::DynamoDBv2 {
class IndexStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription);
// Type: Amazon.DynamoDBv2.Model::GlobalSecondaryIndexDescription
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GlobalSecondaryIndexDescription*
class CORDL_TYPE GlobalSecondaryIndexDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Backfilling, put = set_Backfilling)) bool Backfilling;

  __declspec(property(get = get_IndexArn, put = set_IndexArn))::StringW IndexArn;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_IndexSizeBytes, put = set_IndexSizeBytes)) int64_t IndexSizeBytes;

  __declspec(property(get = get_IndexStatus, put = set_IndexStatus))::Amazon::DynamoDBv2::IndexStatus* IndexStatus;

  __declspec(property(get = get_ItemCount, put = set_ItemCount)) int64_t ItemCount;

  __declspec(property(get = get_KeySchema, put = set_KeySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* KeySchema;

  __declspec(property(get = get_Projection, put = set_Projection))::Amazon::DynamoDBv2::Model::Projection* Projection;

  __declspec(property(get = get_ProvisionedThroughput, put = set_ProvisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* ProvisionedThroughput;

  /// @brief Field _backfilling, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__backfilling, put = __cordl_internal_set__backfilling))::System::Nullable_1<bool> _backfilling;

  /// @brief Field _indexArn, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__indexArn, put = __cordl_internal_set__indexArn))::StringW _indexArn;

  /// @brief Field _indexName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _indexSizeBytes, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__indexSizeBytes, put = __cordl_internal_set__indexSizeBytes))::System::Nullable_1<int64_t> _indexSizeBytes;

  /// @brief Field _indexStatus, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__indexStatus, put = __cordl_internal_set__indexStatus))::Amazon::DynamoDBv2::IndexStatus* _indexStatus;

  /// @brief Field _itemCount, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__itemCount, put = __cordl_internal_set__itemCount))::System::Nullable_1<int64_t> _itemCount;

  /// @brief Field _keySchema, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__keySchema, put = __cordl_internal_set__keySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* _keySchema;

  /// @brief Field _projection, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__projection, put = __cordl_internal_set__projection))::Amazon::DynamoDBv2::Model::Projection* _projection;

  /// @brief Field _provisionedThroughput, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughput,
                      put = __cordl_internal_set__provisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* _provisionedThroughput;

  /// @brief Method IsSetBackfilling, addr 0x1049308, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBackfilling();

  /// @brief Method IsSetIndexArn, addr 0x1049354, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexArn();

  /// @brief Method IsSetIndexName, addr 0x1049374, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetIndexSizeBytes, addr 0x1049430, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetIndexSizeBytes();

  /// @brief Method IsSetIndexStatus, addr 0x104947c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetIndexStatus();

  /// @brief Method IsSetItemCount, addr 0x1049588, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetItemCount();

  /// @brief Method IsSetKeySchema, addr 0x10495d4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeySchema();

  /// @brief Method IsSetProjection, addr 0x1049638, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjection();

  /// @brief Method IsSetProvisionedThroughput, addr 0x1049658, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughput();

  static inline ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__backfilling() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__backfilling();

  constexpr ::StringW const& __cordl_internal_get__indexArn() const;

  constexpr ::StringW& __cordl_internal_get__indexArn();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__indexSizeBytes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__indexSizeBytes();

  constexpr ::Amazon::DynamoDBv2::IndexStatus*& __cordl_internal_get__indexStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IndexStatus*> const& __cordl_internal_get__indexStatus() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__itemCount() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__itemCount();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& __cordl_internal_get__keySchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const& __cordl_internal_get__keySchema() const;

  constexpr ::Amazon::DynamoDBv2::Model::Projection*& __cordl_internal_get__projection();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Projection*> const& __cordl_internal_get__projection() const;

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*& __cordl_internal_get__provisionedThroughput();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*> const& __cordl_internal_get__provisionedThroughput() const;

  constexpr void __cordl_internal_set__backfilling(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__indexArn(::StringW value);

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__indexSizeBytes(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__indexStatus(::Amazon::DynamoDBv2::IndexStatus* value);

  constexpr void __cordl_internal_set__itemCount(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  constexpr void __cordl_internal_set__projection(::Amazon::DynamoDBv2::Model::Projection* value);

  constexpr void __cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* value);

  /// @brief Method .ctor, addr 0x1049668, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Backfilling, addr 0x1049264, size 0x3c, virtual false, abstract: false, final false
  inline bool get_Backfilling();

  /// @brief Method get_IndexArn, addr 0x1049344, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexArn();

  /// @brief Method get_IndexName, addr 0x1049364, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_IndexSizeBytes, addr 0x1049384, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_IndexSizeBytes();

  /// @brief Method get_IndexStatus, addr 0x104946c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::IndexStatus* get_IndexStatus();

  /// @brief Method get_ItemCount, addr 0x10494dc, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ItemCount();

  /// @brief Method get_KeySchema, addr 0x10495c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* get_KeySchema();

  /// @brief Method get_Projection, addr 0x1049628, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Projection* get_Projection();

  /// @brief Method get_ProvisionedThroughput, addr 0x1049648, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* get_ProvisionedThroughput();

  /// @brief Method set_Backfilling, addr 0x10492a0, size 0x68, virtual false, abstract: false, final false
  inline void set_Backfilling(bool value);

  /// @brief Method set_IndexArn, addr 0x104934c, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexArn(::StringW value);

  /// @brief Method set_IndexName, addr 0x104936c, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_IndexSizeBytes, addr 0x10493c0, size 0x70, virtual false, abstract: false, final false
  inline void set_IndexSizeBytes(int64_t value);

  /// @brief Method set_IndexStatus, addr 0x1049474, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexStatus(::Amazon::DynamoDBv2::IndexStatus* value);

  /// @brief Method set_ItemCount, addr 0x1049518, size 0x70, virtual false, abstract: false, final false
  inline void set_ItemCount(int64_t value);

  /// @brief Method set_KeySchema, addr 0x10495cc, size 0x8, virtual false, abstract: false, final false
  inline void set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  /// @brief Method set_Projection, addr 0x1049630, size 0x8, virtual false, abstract: false, final false
  inline void set_Projection(::Amazon::DynamoDBv2::Model::Projection* value);

  /// @brief Method set_ProvisionedThroughput, addr 0x1049650, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalSecondaryIndexDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalSecondaryIndexDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalSecondaryIndexDescription(GlobalSecondaryIndexDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalSecondaryIndexDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalSecondaryIndexDescription(GlobalSecondaryIndexDescription const&) = delete;

  /// @brief Field _backfilling, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____backfilling;

  /// @brief Field _indexArn, offset: 0x18, size: 0x8, def value: None
  ::StringW ____indexArn;

  /// @brief Field _indexName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _indexSizeBytes, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____indexSizeBytes;

  /// @brief Field _indexStatus, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::IndexStatus* ____indexStatus;

  /// @brief Field _itemCount, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____itemCount;

  /// @brief Field _keySchema, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* ____keySchema;

  /// @brief Field _projection, offset: 0x58, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Projection* ____projection;

  /// @brief Field _provisionedThroughput, offset: 0x60, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* ____provisionedThroughput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____backfilling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____indexArn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____indexName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____indexSizeBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____indexStatus) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____itemCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____keySchema) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____projection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription, ____provisionedThroughput) == 0x60, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*, "Amazon.DynamoDBv2.Model", "GlobalSecondaryIndexDescription");
