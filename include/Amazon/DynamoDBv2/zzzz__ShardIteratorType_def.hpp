#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShardIteratorType)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ShardIteratorType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ShardIteratorType);
// Type: Amazon.DynamoDBv2::ShardIteratorType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ShardIteratorType*
class CORDL_TYPE ShardIteratorType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field AFTER_SEQUENCE_NUMBER, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AFTER_SEQUENCE_NUMBER, put = setStaticF_AFTER_SEQUENCE_NUMBER))::Amazon::DynamoDBv2::ShardIteratorType* AFTER_SEQUENCE_NUMBER;

  /// @brief Field AT_SEQUENCE_NUMBER, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AT_SEQUENCE_NUMBER, put = setStaticF_AT_SEQUENCE_NUMBER))::Amazon::DynamoDBv2::ShardIteratorType* AT_SEQUENCE_NUMBER;

  /// @brief Field LATEST, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LATEST, put = setStaticF_LATEST))::Amazon::DynamoDBv2::ShardIteratorType* LATEST;

  /// @brief Field TRIM_HORIZON, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TRIM_HORIZON, put = setStaticF_TRIM_HORIZON))::Amazon::DynamoDBv2::ShardIteratorType* TRIM_HORIZON;

  /// @brief Method FindValue, addr 0x12141b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ShardIteratorType* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ShardIteratorType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1214148, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ShardIteratorType* getStaticF_AFTER_SEQUENCE_NUMBER();

  static inline ::Amazon::DynamoDBv2::ShardIteratorType* getStaticF_AT_SEQUENCE_NUMBER();

  static inline ::Amazon::DynamoDBv2::ShardIteratorType* getStaticF_LATEST();

  static inline ::Amazon::DynamoDBv2::ShardIteratorType* getStaticF_TRIM_HORIZON();

  /// @brief Method op_Implicit, addr 0x121421c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ShardIteratorType* op_Implicit___Amazon__DynamoDBv2__ShardIteratorType_(::StringW value);

  static inline void setStaticF_AFTER_SEQUENCE_NUMBER(::Amazon::DynamoDBv2::ShardIteratorType* value);

  static inline void setStaticF_AT_SEQUENCE_NUMBER(::Amazon::DynamoDBv2::ShardIteratorType* value);

  static inline void setStaticF_LATEST(::Amazon::DynamoDBv2::ShardIteratorType* value);

  static inline void setStaticF_TRIM_HORIZON(::Amazon::DynamoDBv2::ShardIteratorType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShardIteratorType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShardIteratorType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShardIteratorType(ShardIteratorType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShardIteratorType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShardIteratorType(ShardIteratorType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ShardIteratorType, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ShardIteratorType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ShardIteratorType*, "Amazon.DynamoDBv2", "ShardIteratorType");
