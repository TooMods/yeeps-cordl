#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnableKinesisStreamingDestinationResponse)
namespace Amazon::DynamoDBv2 {
class DestinationStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class EnableKinesisStreamingDestinationResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse);
// Type: Amazon.DynamoDBv2.Model::EnableKinesisStreamingDestinationResponse
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::EnableKinesisStreamingDestinationResponse*
class CORDL_TYPE EnableKinesisStreamingDestinationResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_DestinationStatus, put = set_DestinationStatus))::Amazon::DynamoDBv2::DestinationStatus* DestinationStatus;

  __declspec(property(get = get_StreamArn, put = set_StreamArn))::StringW StreamArn;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _destinationStatus, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationStatus, put = __cordl_internal_set__destinationStatus))::Amazon::DynamoDBv2::DestinationStatus* _destinationStatus;

  /// @brief Field _streamArn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__streamArn, put = __cordl_internal_set__streamArn))::StringW _streamArn;

  /// @brief Field _tableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetDestinationStatus, addr 0x122aa94, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetDestinationStatus();

  /// @brief Method IsSetStreamArn, addr 0x122ab04, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamArn();

  /// @brief Method IsSetTableName, addr 0x122ab24, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::DestinationStatus*& __cordl_internal_get__destinationStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DestinationStatus*> const& __cordl_internal_get__destinationStatus() const;

  constexpr ::StringW const& __cordl_internal_get__streamArn() const;

  constexpr ::StringW& __cordl_internal_get__streamArn();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__destinationStatus(::Amazon::DynamoDBv2::DestinationStatus* value);

  constexpr void __cordl_internal_set__streamArn(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x122ab34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DestinationStatus, addr 0x122aa84, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DestinationStatus* get_DestinationStatus();

  /// @brief Method get_StreamArn, addr 0x122aaf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamArn();

  /// @brief Method get_TableName, addr 0x122ab14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_DestinationStatus, addr 0x122aa8c, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationStatus(::Amazon::DynamoDBv2::DestinationStatus* value);

  /// @brief Method set_StreamArn, addr 0x122aafc, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamArn(::StringW value);

  /// @brief Method set_TableName, addr 0x122ab1c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableKinesisStreamingDestinationResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableKinesisStreamingDestinationResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableKinesisStreamingDestinationResponse(EnableKinesisStreamingDestinationResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableKinesisStreamingDestinationResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableKinesisStreamingDestinationResponse(EnableKinesisStreamingDestinationResponse const&) = delete;

  /// @brief Field _destinationStatus, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DestinationStatus* ____destinationStatus;

  /// @brief Field _streamArn, offset: 0x30, size: 0x8, def value: None
  ::StringW ____streamArn;

  /// @brief Field _tableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse, ____destinationStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse, ____streamArn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse, ____tableName) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::EnableKinesisStreamingDestinationResponse*, "Amazon.DynamoDBv2.Model", "EnableKinesisStreamingDestinationResponse");
