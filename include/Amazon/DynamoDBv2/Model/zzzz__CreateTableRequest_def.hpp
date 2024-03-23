#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateTableRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeDefinition;
}
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndex;
}
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class LocalSecondaryIndex;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
namespace Amazon::DynamoDBv2::Model {
class SSESpecification;
}
namespace Amazon::DynamoDBv2::Model {
class StreamSpecification;
}
namespace Amazon::DynamoDBv2::Model {
class Tag;
}
namespace Amazon::DynamoDBv2 {
class BillingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class CreateTableRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::CreateTableRequest);
// Type: Amazon.DynamoDBv2.Model::CreateTableRequest
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::CreateTableRequest*
class CORDL_TYPE CreateTableRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_AttributeDefinitions, put = set_AttributeDefinitions))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* AttributeDefinitions;

  __declspec(property(get = get_BillingMode, put = set_BillingMode))::Amazon::DynamoDBv2::BillingMode* BillingMode;

  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_KeySchema, put = set_KeySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* KeySchema;

  __declspec(property(get = get_LocalSecondaryIndexes,
                      put = set_LocalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* LocalSecondaryIndexes;

  __declspec(property(get = get_ProvisionedThroughput, put = set_ProvisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ProvisionedThroughput;

  __declspec(property(get = get_SSESpecification, put = set_SSESpecification))::Amazon::DynamoDBv2::Model::SSESpecification* SSESpecification;

  __declspec(property(get = get_StreamSpecification, put = set_StreamSpecification))::Amazon::DynamoDBv2::Model::StreamSpecification* StreamSpecification;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_Tags, put = set_Tags))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* Tags;

  /// @brief Field _attributeDefinitions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeDefinitions,
                      put = __cordl_internal_set__attributeDefinitions))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* _attributeDefinitions;

  /// @brief Field _billingMode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__billingMode, put = __cordl_internal_set__billingMode))::Amazon::DynamoDBv2::BillingMode* _billingMode;

  /// @brief Field _globalSecondaryIndexes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__globalSecondaryIndexes,
                      put = __cordl_internal_set__globalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* _globalSecondaryIndexes;

  /// @brief Field _keySchema, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__keySchema, put = __cordl_internal_set__keySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* _keySchema;

  /// @brief Field _localSecondaryIndexes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__localSecondaryIndexes,
                      put = __cordl_internal_set__localSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* _localSecondaryIndexes;

  /// @brief Field _provisionedThroughput, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughput, put = __cordl_internal_set__provisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* _provisionedThroughput;

  /// @brief Field _sseSpecification, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sseSpecification, put = __cordl_internal_set__sseSpecification))::Amazon::DynamoDBv2::Model::SSESpecification* _sseSpecification;

  /// @brief Field _streamSpecification, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__streamSpecification, put = __cordl_internal_set__streamSpecification))::Amazon::DynamoDBv2::Model::StreamSpecification* _streamSpecification;

  /// @brief Field _tableName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _tags, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* _tags;

  /// @brief Method IsSetAttributeDefinitions, addr 0x1228c04, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributeDefinitions();

  /// @brief Method IsSetBillingMode, addr 0x1228c68, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBillingMode();

  /// @brief Method IsSetGlobalSecondaryIndexes, addr 0x1228cd8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexes();

  /// @brief Method IsSetKeySchema, addr 0x1228d3c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeySchema();

  /// @brief Method IsSetLocalSecondaryIndexes, addr 0x1228da0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLocalSecondaryIndexes();

  /// @brief Method IsSetProvisionedThroughput, addr 0x1228e04, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughput();

  /// @brief Method IsSetSSESpecification, addr 0x1228e24, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSSESpecification();

  /// @brief Method IsSetStreamSpecification, addr 0x1228e44, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamSpecification();

  /// @brief Method IsSetTableName, addr 0x1228e64, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetTags, addr 0x1228e84, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTags();

  static inline ::Amazon::DynamoDBv2::Model::CreateTableRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::CreateTableRequest* New_ctor(::StringW tableName, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* keySchema);

  static inline ::Amazon::DynamoDBv2::Model::CreateTableRequest* New_ctor(::StringW tableName, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* keySchema,
                                                                          ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* attributeDefinitions,
                                                                          ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*& __cordl_internal_get__attributeDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*> const& __cordl_internal_get__attributeDefinitions() const;

  constexpr ::Amazon::DynamoDBv2::BillingMode*& __cordl_internal_get__billingMode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& __cordl_internal_get__billingMode() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*& __cordl_internal_get__globalSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*> const&
  __cordl_internal_get__globalSecondaryIndexes() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& __cordl_internal_get__keySchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const& __cordl_internal_get__keySchema() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*& __cordl_internal_get__localSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*> const& __cordl_internal_get__localSecondaryIndexes() const;

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& __cordl_internal_get__provisionedThroughput();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const& __cordl_internal_get__provisionedThroughput() const;

  constexpr ::Amazon::DynamoDBv2::Model::SSESpecification*& __cordl_internal_get__sseSpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSESpecification*> const& __cordl_internal_get__sseSpecification() const;

  constexpr ::Amazon::DynamoDBv2::Model::StreamSpecification*& __cordl_internal_get__streamSpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamSpecification*> const& __cordl_internal_get__streamSpecification() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>*& __cordl_internal_get__tags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>*> const& __cordl_internal_get__tags() const;

  constexpr void __cordl_internal_set__attributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  constexpr void __cordl_internal_set__billingMode(::Amazon::DynamoDBv2::BillingMode* value);

  constexpr void __cordl_internal_set__globalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value);

  constexpr void __cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  constexpr void __cordl_internal_set__localSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value);

  constexpr void __cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  constexpr void __cordl_internal_set__sseSpecification(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  constexpr void __cordl_internal_set__streamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__tags(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* value);

  /// @brief Method .ctor, addr 0x12167f4, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x122888c, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* keySchema);

  /// @brief Method .ctor, addr 0x1228a34, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* keySchema,
                    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* attributeDefinitions,
                    ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput);

  /// @brief Method get_AttributeDefinitions, addr 0x1228bf4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* get_AttributeDefinitions();

  /// @brief Method get_BillingMode, addr 0x1228c58, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BillingMode* get_BillingMode();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x1228cc8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_KeySchema, addr 0x1228d2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* get_KeySchema();

  /// @brief Method get_LocalSecondaryIndexes, addr 0x1228d90, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* get_LocalSecondaryIndexes();

  /// @brief Method get_ProvisionedThroughput, addr 0x1228df4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* get_ProvisionedThroughput();

  /// @brief Method get_SSESpecification, addr 0x1228e14, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SSESpecification* get_SSESpecification();

  /// @brief Method get_StreamSpecification, addr 0x1228e34, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::StreamSpecification* get_StreamSpecification();

  /// @brief Method get_TableName, addr 0x1228e54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_Tags, addr 0x1228e74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* get_Tags();

  /// @brief Method set_AttributeDefinitions, addr 0x1228bfc, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  /// @brief Method set_BillingMode, addr 0x1228c60, size 0x8, virtual false, abstract: false, final false
  inline void set_BillingMode(::Amazon::DynamoDBv2::BillingMode* value);

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x1228cd0, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value);

  /// @brief Method set_KeySchema, addr 0x1228d34, size 0x8, virtual false, abstract: false, final false
  inline void set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  /// @brief Method set_LocalSecondaryIndexes, addr 0x1228d98, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value);

  /// @brief Method set_ProvisionedThroughput, addr 0x1228dfc, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  /// @brief Method set_SSESpecification, addr 0x1228e1c, size 0x8, virtual false, abstract: false, final false
  inline void set_SSESpecification(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  /// @brief Method set_StreamSpecification, addr 0x1228e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  /// @brief Method set_TableName, addr 0x1228e5c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_Tags, addr 0x1228e7c, size 0x8, virtual false, abstract: false, final false
  inline void set_Tags(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateTableRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateTableRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateTableRequest(CreateTableRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateTableRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateTableRequest(CreateTableRequest const&) = delete;

  /// @brief Field _attributeDefinitions, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* ____attributeDefinitions;

  /// @brief Field _billingMode, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BillingMode* ____billingMode;

  /// @brief Field _globalSecondaryIndexes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* ____globalSecondaryIndexes;

  /// @brief Field _keySchema, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* ____keySchema;

  /// @brief Field _localSecondaryIndexes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* ____localSecondaryIndexes;

  /// @brief Field _provisionedThroughput, offset: 0x60, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ____provisionedThroughput;

  /// @brief Field _sseSpecification, offset: 0x68, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SSESpecification* ____sseSpecification;

  /// @brief Field _streamSpecification, offset: 0x70, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::StreamSpecification* ____streamSpecification;

  /// @brief Field _tableName, offset: 0x78, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _tags, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* ____tags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::CreateTableRequest, 0x88>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____attributeDefinitions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____billingMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____globalSecondaryIndexes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____keySchema) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____localSecondaryIndexes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____provisionedThroughput) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____sseSpecification) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____streamSpecification) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____tableName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateTableRequest, ____tags) == 0x80, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::CreateTableRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::CreateTableRequest*, "Amazon.DynamoDBv2.Model", "CreateTableRequest");
