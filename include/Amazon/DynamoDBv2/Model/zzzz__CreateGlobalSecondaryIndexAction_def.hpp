#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateGlobalSecondaryIndexAction)
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class Projection;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class CreateGlobalSecondaryIndexAction;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction);
// Type: Amazon.DynamoDBv2.Model::CreateGlobalSecondaryIndexAction
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::CreateGlobalSecondaryIndexAction*
class CORDL_TYPE CreateGlobalSecondaryIndexAction : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_KeySchema, put = set_KeySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* KeySchema;

  __declspec(property(get = get_Projection, put = set_Projection))::Amazon::DynamoDBv2::Model::Projection* Projection;

  __declspec(property(get = get_ProvisionedThroughput, put = set_ProvisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ProvisionedThroughput;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _keySchema, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__keySchema, put = __cordl_internal_set__keySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* _keySchema;

  /// @brief Field _projection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__projection, put = __cordl_internal_set__projection))::Amazon::DynamoDBv2::Model::Projection* _projection;

  /// @brief Field _provisionedThroughput, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughput, put = __cordl_internal_set__provisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* _provisionedThroughput;

  /// @brief Method IsSetIndexName, addr 0x12284cc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetKeySchema, addr 0x12284ec, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeySchema();

  /// @brief Method IsSetProjection, addr 0x1228550, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjection();

  /// @brief Method IsSetProvisionedThroughput, addr 0x1228570, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughput();

  static inline ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& __cordl_internal_get__keySchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const& __cordl_internal_get__keySchema() const;

  constexpr ::Amazon::DynamoDBv2::Model::Projection*& __cordl_internal_get__projection();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Projection*> const& __cordl_internal_get__projection() const;

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& __cordl_internal_get__provisionedThroughput();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const& __cordl_internal_get__provisionedThroughput() const;

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  constexpr void __cordl_internal_set__projection(::Amazon::DynamoDBv2::Model::Projection* value);

  constexpr void __cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  /// @brief Method .ctor, addr 0x1228580, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x12284bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_KeySchema, addr 0x12284dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* get_KeySchema();

  /// @brief Method get_Projection, addr 0x1228540, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Projection* get_Projection();

  /// @brief Method get_ProvisionedThroughput, addr 0x1228560, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* get_ProvisionedThroughput();

  /// @brief Method set_IndexName, addr 0x12284c4, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_KeySchema, addr 0x12284e4, size 0x8, virtual false, abstract: false, final false
  inline void set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  /// @brief Method set_Projection, addr 0x1228548, size 0x8, virtual false, abstract: false, final false
  inline void set_Projection(::Amazon::DynamoDBv2::Model::Projection* value);

  /// @brief Method set_ProvisionedThroughput, addr 0x1228568, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateGlobalSecondaryIndexAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateGlobalSecondaryIndexAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateGlobalSecondaryIndexAction(CreateGlobalSecondaryIndexAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateGlobalSecondaryIndexAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateGlobalSecondaryIndexAction(CreateGlobalSecondaryIndexAction const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _keySchema, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* ____keySchema;

  /// @brief Field _projection, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Projection* ____projection;

  /// @brief Field _provisionedThroughput, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ____provisionedThroughput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction, ____keySchema) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction, ____projection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction, ____provisionedThroughput) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*, "Amazon.DynamoDBv2.Model", "CreateGlobalSecondaryIndexAction");
