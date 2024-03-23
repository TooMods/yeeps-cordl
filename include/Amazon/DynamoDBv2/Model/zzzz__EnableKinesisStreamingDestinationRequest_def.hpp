#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnableKinesisStreamingDestinationRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class EnableKinesisStreamingDestinationRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest);
// Type: Amazon.DynamoDBv2.Model::EnableKinesisStreamingDestinationRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::EnableKinesisStreamingDestinationRequest*
class CORDL_TYPE EnableKinesisStreamingDestinationRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_StreamArn, put = set_StreamArn))::StringW StreamArn;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _streamArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__streamArn, put = __cordl_internal_set__streamArn))::StringW _streamArn;

  /// @brief Field _tableName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetStreamArn, addr 0x122aa4c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamArn();

  /// @brief Method IsSetTableName, addr 0x122aa6c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__streamArn() const;

  constexpr ::StringW& __cordl_internal_get__streamArn();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__streamArn(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x122aa7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_StreamArn, addr 0x122aa3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamArn();

  /// @brief Method get_TableName, addr 0x122aa5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_StreamArn, addr 0x122aa44, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamArn(::StringW value);

  /// @brief Method set_TableName, addr 0x122aa64, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableKinesisStreamingDestinationRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableKinesisStreamingDestinationRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableKinesisStreamingDestinationRequest(EnableKinesisStreamingDestinationRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableKinesisStreamingDestinationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableKinesisStreamingDestinationRequest(EnableKinesisStreamingDestinationRequest const&) = delete;

  /// @brief Field _streamArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____streamArn;

  /// @brief Field _tableName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest, ____streamArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest, ____tableName) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationRequest*, "Amazon.DynamoDBv2.Model", "EnableKinesisStreamingDestinationRequest");
