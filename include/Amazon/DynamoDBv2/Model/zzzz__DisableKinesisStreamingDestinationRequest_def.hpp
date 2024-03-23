#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisableKinesisStreamingDestinationRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DisableKinesisStreamingDestinationRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest);
// Type: Amazon.DynamoDBv2.Model::DisableKinesisStreamingDestinationRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DisableKinesisStreamingDestinationRequest*
class CORDL_TYPE DisableKinesisStreamingDestinationRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_StreamArn, put = set_StreamArn))::StringW StreamArn;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _streamArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__streamArn, put = __cordl_internal_set__streamArn))::StringW _streamArn;

  /// @brief Field _tableName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetStreamArn, addr 0x122a928, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamArn();

  /// @brief Method IsSetTableName, addr 0x122a948, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__streamArn() const;

  constexpr ::StringW& __cordl_internal_get__streamArn();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__streamArn(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x122a958, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_StreamArn, addr 0x122a918, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamArn();

  /// @brief Method get_TableName, addr 0x122a938, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_StreamArn, addr 0x122a920, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamArn(::StringW value);

  /// @brief Method set_TableName, addr 0x122a940, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableKinesisStreamingDestinationRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableKinesisStreamingDestinationRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableKinesisStreamingDestinationRequest(DisableKinesisStreamingDestinationRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableKinesisStreamingDestinationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableKinesisStreamingDestinationRequest(DisableKinesisStreamingDestinationRequest const&) = delete;

  /// @brief Field _streamArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____streamArn;

  /// @brief Field _tableName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest, ____streamArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest, ____tableName) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DisableKinesisStreamingDestinationRequest*, "Amazon.DynamoDBv2.Model", "DisableKinesisStreamingDestinationRequest");
