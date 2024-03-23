#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyType)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class KeyType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::KeyType);
// Type: Amazon.DynamoDBv2::KeyType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::KeyType*
class CORDL_TYPE KeyType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field HASH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HASH, put = setStaticF_HASH))::Amazon::DynamoDBv2::KeyType* HASH;

  /// @brief Field RANGE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RANGE, put = setStaticF_RANGE))::Amazon::DynamoDBv2::KeyType* RANGE;

  /// @brief Method FindValue, addr 0x1211d10, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::KeyType* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::KeyType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1211ca8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::KeyType* getStaticF_HASH();

  static inline ::Amazon::DynamoDBv2::KeyType* getStaticF_RANGE();

  /// @brief Method op_Implicit, addr 0x1211d7c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::KeyType* op_Implicit___Amazon__DynamoDBv2__KeyType_(::StringW value);

  static inline void setStaticF_HASH(::Amazon::DynamoDBv2::KeyType* value);

  static inline void setStaticF_RANGE(::Amazon::DynamoDBv2::KeyType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyType(KeyType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyType(KeyType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::KeyType, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::KeyType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::KeyType*, "Amazon.DynamoDBv2", "KeyType");
