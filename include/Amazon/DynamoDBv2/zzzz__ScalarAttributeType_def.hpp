#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScalarAttributeType)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ScalarAttributeType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ScalarAttributeType);
// Type: Amazon.DynamoDBv2::ScalarAttributeType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ScalarAttributeType*
class CORDL_TYPE ScalarAttributeType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field B, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_B, put = setStaticF_B))::Amazon::DynamoDBv2::ScalarAttributeType* B;

  /// @brief Field N, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_N, put = setStaticF_N))::Amazon::DynamoDBv2::ScalarAttributeType* N;

  /// @brief Field S, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S, put = setStaticF_S))::Amazon::DynamoDBv2::ScalarAttributeType* S;

  /// @brief Method FindValue, addr 0x1212fb0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ScalarAttributeType* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ScalarAttributeType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1212f48, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ScalarAttributeType* getStaticF_B();

  static inline ::Amazon::DynamoDBv2::ScalarAttributeType* getStaticF_N();

  static inline ::Amazon::DynamoDBv2::ScalarAttributeType* getStaticF_S();

  /// @brief Method op_Implicit, addr 0x121301c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ScalarAttributeType* op_Implicit___Amazon__DynamoDBv2__ScalarAttributeType_(::StringW value);

  static inline void setStaticF_B(::Amazon::DynamoDBv2::ScalarAttributeType* value);

  static inline void setStaticF_N(::Amazon::DynamoDBv2::ScalarAttributeType* value);

  static inline void setStaticF_S(::Amazon::DynamoDBv2::ScalarAttributeType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScalarAttributeType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScalarAttributeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScalarAttributeType(ScalarAttributeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScalarAttributeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScalarAttributeType(ScalarAttributeType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ScalarAttributeType, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ScalarAttributeType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ScalarAttributeType*, "Amazon.DynamoDBv2", "ScalarAttributeType");
