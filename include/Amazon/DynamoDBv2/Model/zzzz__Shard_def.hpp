#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Shard)
namespace Amazon::DynamoDBv2::Model {
class SequenceNumberRange;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Shard;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Shard);
// Type: Amazon.DynamoDBv2.Model::Shard
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Shard*
class CORDL_TYPE Shard : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ParentShardId, put = set_ParentShardId))::StringW ParentShardId;

  __declspec(property(get = get_SequenceNumberRange, put = set_SequenceNumberRange))::Amazon::DynamoDBv2::Model::SequenceNumberRange* SequenceNumberRange;

  __declspec(property(get = get_ShardId, put = set_ShardId))::StringW ShardId;

  /// @brief Field _parentShardId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parentShardId, put = __cordl_internal_set__parentShardId))::StringW _parentShardId;

  /// @brief Field _sequenceNumberRange, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sequenceNumberRange, put = __cordl_internal_set__sequenceNumberRange))::Amazon::DynamoDBv2::Model::SequenceNumberRange* _sequenceNumberRange;

  /// @brief Field _shardId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__shardId, put = __cordl_internal_set__shardId))::StringW _shardId;

  /// @brief Method IsSetParentShardId, addr 0x1050f4c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetParentShardId();

  /// @brief Method IsSetSequenceNumberRange, addr 0x1050f6c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSequenceNumberRange();

  /// @brief Method IsSetShardId, addr 0x1050f8c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetShardId();

  static inline ::Amazon::DynamoDBv2::Model::Shard* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__parentShardId() const;

  constexpr ::StringW& __cordl_internal_get__parentShardId();

  constexpr ::Amazon::DynamoDBv2::Model::SequenceNumberRange*& __cordl_internal_get__sequenceNumberRange();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SequenceNumberRange*> const& __cordl_internal_get__sequenceNumberRange() const;

  constexpr ::StringW const& __cordl_internal_get__shardId() const;

  constexpr ::StringW& __cordl_internal_get__shardId();

  constexpr void __cordl_internal_set__parentShardId(::StringW value);

  constexpr void __cordl_internal_set__sequenceNumberRange(::Amazon::DynamoDBv2::Model::SequenceNumberRange* value);

  constexpr void __cordl_internal_set__shardId(::StringW value);

  /// @brief Method .ctor, addr 0x1050f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ParentShardId, addr 0x1050f3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ParentShardId();

  /// @brief Method get_SequenceNumberRange, addr 0x1050f5c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SequenceNumberRange* get_SequenceNumberRange();

  /// @brief Method get_ShardId, addr 0x1050f7c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ShardId();

  /// @brief Method set_ParentShardId, addr 0x1050f44, size 0x8, virtual false, abstract: false, final false
  inline void set_ParentShardId(::StringW value);

  /// @brief Method set_SequenceNumberRange, addr 0x1050f64, size 0x8, virtual false, abstract: false, final false
  inline void set_SequenceNumberRange(::Amazon::DynamoDBv2::Model::SequenceNumberRange* value);

  /// @brief Method set_ShardId, addr 0x1050f84, size 0x8, virtual false, abstract: false, final false
  inline void set_ShardId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Shard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shard(Shard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shard(Shard const&) = delete;

  /// @brief Field _parentShardId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____parentShardId;

  /// @brief Field _sequenceNumberRange, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SequenceNumberRange* ____sequenceNumberRange;

  /// @brief Field _shardId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____shardId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Shard, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Shard, ____parentShardId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Shard, ____sequenceNumberRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Shard, ____shardId) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Shard);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Shard*, "Amazon.DynamoDBv2.Model", "Shard");
