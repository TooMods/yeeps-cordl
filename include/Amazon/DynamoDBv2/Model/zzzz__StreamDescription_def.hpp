#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StreamDescription)
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class Shard;
}
namespace Amazon::DynamoDBv2 {
class StreamStatus;
}
namespace Amazon::DynamoDBv2 {
class StreamViewType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class StreamDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::StreamDescription);
// Type: Amazon.DynamoDBv2.Model::StreamDescription
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::StreamDescription*
class CORDL_TYPE StreamDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CreationRequestDateTime, put = set_CreationRequestDateTime))::System::DateTime CreationRequestDateTime;

  __declspec(property(get = get_KeySchema, put = set_KeySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* KeySchema;

  __declspec(property(get = get_LastEvaluatedShardId, put = set_LastEvaluatedShardId))::StringW LastEvaluatedShardId;

  __declspec(property(get = get_Shards, put = set_Shards))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* Shards;

  __declspec(property(get = get_StreamArn, put = set_StreamArn))::StringW StreamArn;

  __declspec(property(get = get_StreamLabel, put = set_StreamLabel))::StringW StreamLabel;

  __declspec(property(get = get_StreamStatus, put = set_StreamStatus))::Amazon::DynamoDBv2::StreamStatus* StreamStatus;

  __declspec(property(get = get_StreamViewType, put = set_StreamViewType))::Amazon::DynamoDBv2::StreamViewType* StreamViewType;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _creationRequestDateTime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__creationRequestDateTime, put = __cordl_internal_set__creationRequestDateTime))::System::Nullable_1<::System::DateTime> _creationRequestDateTime;

  /// @brief Field _keySchema, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keySchema, put = __cordl_internal_set__keySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* _keySchema;

  /// @brief Field _lastEvaluatedShardId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lastEvaluatedShardId, put = __cordl_internal_set__lastEvaluatedShardId))::StringW _lastEvaluatedShardId;

  /// @brief Field _shards, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__shards, put = __cordl_internal_set__shards))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* _shards;

  /// @brief Field _streamArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__streamArn, put = __cordl_internal_set__streamArn))::StringW _streamArn;

  /// @brief Field _streamLabel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__streamLabel, put = __cordl_internal_set__streamLabel))::StringW _streamLabel;

  /// @brief Field _streamStatus, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__streamStatus, put = __cordl_internal_set__streamStatus))::Amazon::DynamoDBv2::StreamStatus* _streamStatus;

  /// @brief Field _streamViewType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__streamViewType, put = __cordl_internal_set__streamViewType))::Amazon::DynamoDBv2::StreamViewType* _streamViewType;

  /// @brief Field _tableName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetCreationRequestDateTime, addr 0x1051a28, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCreationRequestDateTime();

  /// @brief Method IsSetKeySchema, addr 0x1051a74, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeySchema();

  /// @brief Method IsSetLastEvaluatedShardId, addr 0x1051ad8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastEvaluatedShardId();

  /// @brief Method IsSetShards, addr 0x1051af8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetShards();

  /// @brief Method IsSetStreamArn, addr 0x1051b5c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamArn();

  /// @brief Method IsSetStreamLabel, addr 0x1051b7c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamLabel();

  /// @brief Method IsSetStreamStatus, addr 0x1051b9c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStreamStatus();

  /// @brief Method IsSetStreamViewType, addr 0x1051c0c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStreamViewType();

  /// @brief Method IsSetTableName, addr 0x1051c7c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::StreamDescription* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__creationRequestDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__creationRequestDateTime();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& __cordl_internal_get__keySchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const& __cordl_internal_get__keySchema() const;

  constexpr ::StringW const& __cordl_internal_get__lastEvaluatedShardId() const;

  constexpr ::StringW& __cordl_internal_get__lastEvaluatedShardId();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*& __cordl_internal_get__shards();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*> const& __cordl_internal_get__shards() const;

  constexpr ::StringW const& __cordl_internal_get__streamArn() const;

  constexpr ::StringW& __cordl_internal_get__streamArn();

  constexpr ::StringW const& __cordl_internal_get__streamLabel() const;

  constexpr ::StringW& __cordl_internal_get__streamLabel();

  constexpr ::Amazon::DynamoDBv2::StreamStatus*& __cordl_internal_get__streamStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::StreamStatus*> const& __cordl_internal_get__streamStatus() const;

  constexpr ::Amazon::DynamoDBv2::StreamViewType*& __cordl_internal_get__streamViewType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::StreamViewType*> const& __cordl_internal_get__streamViewType() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__creationRequestDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  constexpr void __cordl_internal_set__lastEvaluatedShardId(::StringW value);

  constexpr void __cordl_internal_set__shards(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* value);

  constexpr void __cordl_internal_set__streamArn(::StringW value);

  constexpr void __cordl_internal_set__streamLabel(::StringW value);

  constexpr void __cordl_internal_set__streamStatus(::Amazon::DynamoDBv2::StreamStatus* value);

  constexpr void __cordl_internal_set__streamViewType(::Amazon::DynamoDBv2::StreamViewType* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1051c8c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CreationRequestDateTime, addr 0x105197c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_CreationRequestDateTime();

  /// @brief Method get_KeySchema, addr 0x1051a64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* get_KeySchema();

  /// @brief Method get_LastEvaluatedShardId, addr 0x1051ac8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastEvaluatedShardId();

  /// @brief Method get_Shards, addr 0x1051ae8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* get_Shards();

  /// @brief Method get_StreamArn, addr 0x1051b4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamArn();

  /// @brief Method get_StreamLabel, addr 0x1051b6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamLabel();

  /// @brief Method get_StreamStatus, addr 0x1051b8c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::StreamStatus* get_StreamStatus();

  /// @brief Method get_StreamViewType, addr 0x1051bfc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::StreamViewType* get_StreamViewType();

  /// @brief Method get_TableName, addr 0x1051c6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_CreationRequestDateTime, addr 0x10519b8, size 0x70, virtual false, abstract: false, final false
  inline void set_CreationRequestDateTime(::System::DateTime value);

  /// @brief Method set_KeySchema, addr 0x1051a6c, size 0x8, virtual false, abstract: false, final false
  inline void set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  /// @brief Method set_LastEvaluatedShardId, addr 0x1051ad0, size 0x8, virtual false, abstract: false, final false
  inline void set_LastEvaluatedShardId(::StringW value);

  /// @brief Method set_Shards, addr 0x1051af0, size 0x8, virtual false, abstract: false, final false
  inline void set_Shards(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* value);

  /// @brief Method set_StreamArn, addr 0x1051b54, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamArn(::StringW value);

  /// @brief Method set_StreamLabel, addr 0x1051b74, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamLabel(::StringW value);

  /// @brief Method set_StreamStatus, addr 0x1051b94, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamStatus(::Amazon::DynamoDBv2::StreamStatus* value);

  /// @brief Method set_StreamViewType, addr 0x1051c04, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamViewType(::Amazon::DynamoDBv2::StreamViewType* value);

  /// @brief Method set_TableName, addr 0x1051c74, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamDescription(StreamDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamDescription(StreamDescription const&) = delete;

  /// @brief Field _creationRequestDateTime, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____creationRequestDateTime;

  /// @brief Field _keySchema, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* ____keySchema;

  /// @brief Field _lastEvaluatedShardId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____lastEvaluatedShardId;

  /// @brief Field _shards, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* ____shards;

  /// @brief Field _streamArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____streamArn;

  /// @brief Field _streamLabel, offset: 0x40, size: 0x8, def value: None
  ::StringW ____streamLabel;

  /// @brief Field _streamStatus, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::StreamStatus* ____streamStatus;

  /// @brief Field _streamViewType, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::StreamViewType* ____streamViewType;

  /// @brief Field _tableName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::StreamDescription, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____creationRequestDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____keySchema) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____lastEvaluatedShardId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____shards) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____streamArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____streamLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____streamStatus) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____streamViewType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamDescription, ____tableName) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::StreamDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::StreamDescription*, "Amazon.DynamoDBv2.Model", "StreamDescription");
