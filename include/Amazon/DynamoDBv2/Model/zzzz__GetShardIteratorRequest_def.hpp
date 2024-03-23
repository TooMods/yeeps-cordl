#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBStreamsRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetShardIteratorRequest)
namespace Amazon::DynamoDBv2 {
class ShardIteratorType;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GetShardIteratorRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest);
// Type: Amazon.DynamoDBv2.Model::GetShardIteratorRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GetShardIteratorRequest*
class CORDL_TYPE GetShardIteratorRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest {
public:
  // Declarations
  __declspec(property(get = get_SequenceNumber, put = set_SequenceNumber))::StringW SequenceNumber;

  __declspec(property(get = get_ShardId, put = set_ShardId))::StringW ShardId;

  __declspec(property(get = get_ShardIteratorType, put = set_ShardIteratorType))::Amazon::DynamoDBv2::ShardIteratorType* ShardIteratorType;

  __declspec(property(get = get_StreamArn, put = set_StreamArn))::StringW StreamArn;

  /// @brief Field _sequenceNumber, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sequenceNumber, put = __cordl_internal_set__sequenceNumber))::StringW _sequenceNumber;

  /// @brief Field _shardId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__shardId, put = __cordl_internal_set__shardId))::StringW _shardId;

  /// @brief Field _shardIteratorType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__shardIteratorType, put = __cordl_internal_set__shardIteratorType))::Amazon::DynamoDBv2::ShardIteratorType* _shardIteratorType;

  /// @brief Field _streamArn, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__streamArn, put = __cordl_internal_set__streamArn))::StringW _streamArn;

  /// @brief Method IsSetSequenceNumber, addr 0x1048fec, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSequenceNumber();

  /// @brief Method IsSetShardId, addr 0x104900c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetShardId();

  /// @brief Method IsSetShardIteratorType, addr 0x104902c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetShardIteratorType();

  /// @brief Method IsSetStreamArn, addr 0x104909c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamArn();

  static inline ::Amazon::DynamoDBv2::Model::GetShardIteratorRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__sequenceNumber() const;

  constexpr ::StringW& __cordl_internal_get__sequenceNumber();

  constexpr ::StringW const& __cordl_internal_get__shardId() const;

  constexpr ::StringW& __cordl_internal_get__shardId();

  constexpr ::Amazon::DynamoDBv2::ShardIteratorType*& __cordl_internal_get__shardIteratorType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ShardIteratorType*> const& __cordl_internal_get__shardIteratorType() const;

  constexpr ::StringW const& __cordl_internal_get__streamArn() const;

  constexpr ::StringW& __cordl_internal_get__streamArn();

  constexpr void __cordl_internal_set__sequenceNumber(::StringW value);

  constexpr void __cordl_internal_set__shardId(::StringW value);

  constexpr void __cordl_internal_set__shardIteratorType(::Amazon::DynamoDBv2::ShardIteratorType* value);

  constexpr void __cordl_internal_set__streamArn(::StringW value);

  /// @brief Method .ctor, addr 0x10490ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SequenceNumber, addr 0x1048fdc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SequenceNumber();

  /// @brief Method get_ShardId, addr 0x1048ffc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ShardId();

  /// @brief Method get_ShardIteratorType, addr 0x104901c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ShardIteratorType* get_ShardIteratorType();

  /// @brief Method get_StreamArn, addr 0x104908c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamArn();

  /// @brief Method set_SequenceNumber, addr 0x1048fe4, size 0x8, virtual false, abstract: false, final false
  inline void set_SequenceNumber(::StringW value);

  /// @brief Method set_ShardId, addr 0x1049004, size 0x8, virtual false, abstract: false, final false
  inline void set_ShardId(::StringW value);

  /// @brief Method set_ShardIteratorType, addr 0x1049024, size 0x8, virtual false, abstract: false, final false
  inline void set_ShardIteratorType(::Amazon::DynamoDBv2::ShardIteratorType* value);

  /// @brief Method set_StreamArn, addr 0x1049094, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetShardIteratorRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetShardIteratorRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetShardIteratorRequest(GetShardIteratorRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetShardIteratorRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetShardIteratorRequest(GetShardIteratorRequest const&) = delete;

  /// @brief Field _sequenceNumber, offset: 0x38, size: 0x8, def value: None
  ::StringW ____sequenceNumber;

  /// @brief Field _shardId, offset: 0x40, size: 0x8, def value: None
  ::StringW ____shardId;

  /// @brief Field _shardIteratorType, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ShardIteratorType* ____shardIteratorType;

  /// @brief Field _streamArn, offset: 0x50, size: 0x8, def value: None
  ::StringW ____streamArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GetShardIteratorRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest, ____sequenceNumber) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest, ____shardId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest, ____shardIteratorType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest, ____streamArn) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest*, "Amazon.DynamoDBv2.Model", "GetShardIteratorRequest");
