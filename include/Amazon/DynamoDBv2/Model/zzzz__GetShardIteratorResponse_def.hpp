#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetShardIteratorResponse)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GetShardIteratorResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GetShardIteratorResponse);
// Type: Amazon.DynamoDBv2.Model::GetShardIteratorResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GetShardIteratorResponse*
class CORDL_TYPE GetShardIteratorResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ShardIterator, put = set_ShardIterator))::StringW ShardIterator;

  /// @brief Field _shardIterator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__shardIterator, put = __cordl_internal_set__shardIterator))::StringW _shardIterator;

  /// @brief Method IsSetShardIterator, addr 0x10490c4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetShardIterator();

  static inline ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__shardIterator() const;

  constexpr ::StringW& __cordl_internal_get__shardIterator();

  constexpr void __cordl_internal_set__shardIterator(::StringW value);

  /// @brief Method .ctor, addr 0x10490d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ShardIterator, addr 0x10490b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ShardIterator();

  /// @brief Method set_ShardIterator, addr 0x10490bc, size 0x8, virtual false, abstract: false, final false
  inline void set_ShardIterator(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetShardIteratorResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetShardIteratorResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetShardIteratorResponse(GetShardIteratorResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetShardIteratorResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetShardIteratorResponse(GetShardIteratorResponse const&) = delete;

  /// @brief Field _shardIterator, offset: 0x28, size: 0x8, def value: None
  ::StringW ____shardIterator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetShardIteratorResponse, ____shardIterator) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GetShardIteratorResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*, "Amazon.DynamoDBv2.Model", "GetShardIteratorResponse");
