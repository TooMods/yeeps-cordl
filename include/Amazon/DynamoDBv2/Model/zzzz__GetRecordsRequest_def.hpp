#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBStreamsRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetRecordsRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GetRecordsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GetRecordsRequest);
// Type: Amazon.DynamoDBv2.Model::GetRecordsRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GetRecordsRequest*
class CORDL_TYPE GetRecordsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest {
public:
  // Declarations
  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_ShardIterator, put = set_ShardIterator))::StringW ShardIterator;

  /// @brief Field _limit, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Field _shardIterator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__shardIterator, put = __cordl_internal_set__shardIterator))::StringW _shardIterator;

  /// @brief Method IsSetLimit, addr 0x1048e78, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  /// @brief Method IsSetShardIterator, addr 0x1048ec4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetShardIterator();

  static inline ::Amazon::DynamoDBv2::Model::GetRecordsRequest* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr ::StringW const& __cordl_internal_get__shardIterator() const;

  constexpr ::StringW& __cordl_internal_get__shardIterator();

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__shardIterator(::StringW value);

  /// @brief Method .ctor, addr 0x1048ed4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Limit, addr 0x1048dd4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_ShardIterator, addr 0x1048eb4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ShardIterator();

  /// @brief Method set_Limit, addr 0x1048e10, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_ShardIterator, addr 0x1048ebc, size 0x8, virtual false, abstract: false, final false
  inline void set_ShardIterator(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetRecordsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetRecordsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetRecordsRequest(GetRecordsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetRecordsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetRecordsRequest(GetRecordsRequest const&) = delete;

  /// @brief Field _limit, offset: 0x34, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  /// @brief Field _shardIterator, offset: 0x40, size: 0x8, def value: None
  ::StringW ____shardIterator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GetRecordsRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetRecordsRequest, ____limit) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetRecordsRequest, ____shardIterator) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GetRecordsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GetRecordsRequest*, "Amazon.DynamoDBv2.Model", "GetRecordsRequest");
