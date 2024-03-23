#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBStreamsRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DescribeStreamRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeStreamRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeStreamRequest);
// Type: Amazon.DynamoDBv2.Model::DescribeStreamRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeStreamRequest*
class CORDL_TYPE DescribeStreamRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest {
public:
  // Declarations
  __declspec(property(get = get_ExclusiveStartShardId, put = set_ExclusiveStartShardId))::StringW ExclusiveStartShardId;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_StreamArn, put = set_StreamArn))::StringW StreamArn;

  /// @brief Field _exclusiveStartShardId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__exclusiveStartShardId, put = __cordl_internal_set__exclusiveStartShardId))::StringW _exclusiveStartShardId;

  /// @brief Field _limit, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Field _streamArn, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__streamArn, put = __cordl_internal_set__streamArn))::StringW _streamArn;

  /// @brief Method IsSetExclusiveStartShardId, addr 0x122a6d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExclusiveStartShardId();

  /// @brief Method IsSetLimit, addr 0x122a78c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  /// @brief Method IsSetStreamArn, addr 0x122a7d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamArn();

  static inline ::Amazon::DynamoDBv2::Model::DescribeStreamRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__exclusiveStartShardId() const;

  constexpr ::StringW& __cordl_internal_get__exclusiveStartShardId();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr ::StringW const& __cordl_internal_get__streamArn() const;

  constexpr ::StringW& __cordl_internal_get__streamArn();

  constexpr void __cordl_internal_set__exclusiveStartShardId(::StringW value);

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__streamArn(::StringW value);

  /// @brief Method .ctor, addr 0x12236d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExclusiveStartShardId, addr 0x122a6c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExclusiveStartShardId();

  /// @brief Method get_Limit, addr 0x122a6e8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_StreamArn, addr 0x122a7c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamArn();

  /// @brief Method set_ExclusiveStartShardId, addr 0x122a6d0, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveStartShardId(::StringW value);

  /// @brief Method set_Limit, addr 0x122a724, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_StreamArn, addr 0x122a7d0, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeStreamRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeStreamRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeStreamRequest(DescribeStreamRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeStreamRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeStreamRequest(DescribeStreamRequest const&) = delete;

  /// @brief Field _exclusiveStartShardId, offset: 0x38, size: 0x8, def value: None
  ::StringW ____exclusiveStartShardId;

  /// @brief Field _limit, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  /// @brief Field _streamArn, offset: 0x48, size: 0x8, def value: None
  ::StringW ____streamArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeStreamRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeStreamRequest, ____exclusiveStartShardId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeStreamRequest, ____limit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeStreamRequest, ____streamArn) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeStreamRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeStreamRequest*, "Amazon.DynamoDBv2.Model", "DescribeStreamRequest");
