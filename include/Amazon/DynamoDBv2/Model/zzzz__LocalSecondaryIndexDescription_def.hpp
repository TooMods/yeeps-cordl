#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalSecondaryIndexDescription)
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class Projection;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class LocalSecondaryIndexDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription);
// Type: Amazon.DynamoDBv2.Model::LocalSecondaryIndexDescription
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::LocalSecondaryIndexDescription*
class CORDL_TYPE LocalSecondaryIndexDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexArn, put = set_IndexArn))::StringW IndexArn;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_IndexSizeBytes, put = set_IndexSizeBytes)) int64_t IndexSizeBytes;

  __declspec(property(get = get_ItemCount, put = set_ItemCount)) int64_t ItemCount;

  __declspec(property(get = get_KeySchema, put = set_KeySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* KeySchema;

  __declspec(property(get = get_Projection, put = set_Projection))::Amazon::DynamoDBv2::Model::Projection* Projection;

  /// @brief Field _indexArn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexArn, put = __cordl_internal_set__indexArn))::StringW _indexArn;

  /// @brief Field _indexName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _indexSizeBytes, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__indexSizeBytes, put = __cordl_internal_set__indexSizeBytes))::System::Nullable_1<int64_t> _indexSizeBytes;

  /// @brief Field _itemCount, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__itemCount, put = __cordl_internal_set__itemCount))::System::Nullable_1<int64_t> _itemCount;

  /// @brief Field _keySchema, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__keySchema, put = __cordl_internal_set__keySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* _keySchema;

  /// @brief Field _projection, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__projection, put = __cordl_internal_set__projection))::Amazon::DynamoDBv2::Model::Projection* _projection;

  /// @brief Method IsSetIndexArn, addr 0x104b838, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexArn();

  /// @brief Method IsSetIndexName, addr 0x104b858, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetIndexSizeBytes, addr 0x104b914, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetIndexSizeBytes();

  /// @brief Method IsSetItemCount, addr 0x104b9fc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetItemCount();

  /// @brief Method IsSetKeySchema, addr 0x104ba48, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeySchema();

  /// @brief Method IsSetProjection, addr 0x104baac, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjection();

  static inline ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexArn() const;

  constexpr ::StringW& __cordl_internal_get__indexArn();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__indexSizeBytes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__indexSizeBytes();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__itemCount() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__itemCount();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& __cordl_internal_get__keySchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const& __cordl_internal_get__keySchema() const;

  constexpr ::Amazon::DynamoDBv2::Model::Projection*& __cordl_internal_get__projection();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Projection*> const& __cordl_internal_get__projection() const;

  constexpr void __cordl_internal_set__indexArn(::StringW value);

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__indexSizeBytes(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__itemCount(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  constexpr void __cordl_internal_set__projection(::Amazon::DynamoDBv2::Model::Projection* value);

  /// @brief Method .ctor, addr 0x104babc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexArn, addr 0x104b828, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexArn();

  /// @brief Method get_IndexName, addr 0x104b848, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_IndexSizeBytes, addr 0x104b868, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_IndexSizeBytes();

  /// @brief Method get_ItemCount, addr 0x104b950, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ItemCount();

  /// @brief Method get_KeySchema, addr 0x104ba38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* get_KeySchema();

  /// @brief Method get_Projection, addr 0x104ba9c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Projection* get_Projection();

  /// @brief Method set_IndexArn, addr 0x104b830, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexArn(::StringW value);

  /// @brief Method set_IndexName, addr 0x104b850, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_IndexSizeBytes, addr 0x104b8a4, size 0x70, virtual false, abstract: false, final false
  inline void set_IndexSizeBytes(int64_t value);

  /// @brief Method set_ItemCount, addr 0x104b98c, size 0x70, virtual false, abstract: false, final false
  inline void set_ItemCount(int64_t value);

  /// @brief Method set_KeySchema, addr 0x104ba40, size 0x8, virtual false, abstract: false, final false
  inline void set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  /// @brief Method set_Projection, addr 0x104baa4, size 0x8, virtual false, abstract: false, final false
  inline void set_Projection(::Amazon::DynamoDBv2::Model::Projection* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalSecondaryIndexDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalSecondaryIndexDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalSecondaryIndexDescription(LocalSecondaryIndexDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalSecondaryIndexDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalSecondaryIndexDescription(LocalSecondaryIndexDescription const&) = delete;

  /// @brief Field _indexArn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexArn;

  /// @brief Field _indexName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _indexSizeBytes, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____indexSizeBytes;

  /// @brief Field _itemCount, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____itemCount;

  /// @brief Field _keySchema, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* ____keySchema;

  /// @brief Field _projection, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Projection* ____projection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription, ____indexArn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription, ____indexName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription, ____indexSizeBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription, ____itemCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription, ____keySchema) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription, ____projection) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*, "Amazon.DynamoDBv2.Model", "LocalSecondaryIndexDescription");
