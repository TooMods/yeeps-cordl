#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConditionalOperator)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ConditionalOperator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ConditionalOperator);
// Type: Amazon.DynamoDBv2::ConditionalOperator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ConditionalOperator*
class CORDL_TYPE ConditionalOperator : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field AND, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AND, put = setStaticF_AND))::Amazon::DynamoDBv2::ConditionalOperator* AND;

  /// @brief Field OR, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OR, put = setStaticF_OR))::Amazon::DynamoDBv2::ConditionalOperator* OR;

  /// @brief Method FindValue, addr 0x1210a3c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ConditionalOperator* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ConditionalOperator* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x12109d4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ConditionalOperator* getStaticF_AND();

  static inline ::Amazon::DynamoDBv2::ConditionalOperator* getStaticF_OR();

  /// @brief Method op_Implicit, addr 0x1210aa8, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ConditionalOperator* op_Implicit___Amazon__DynamoDBv2__ConditionalOperator_(::StringW value);

  static inline void setStaticF_AND(::Amazon::DynamoDBv2::ConditionalOperator* value);

  static inline void setStaticF_OR(::Amazon::DynamoDBv2::ConditionalOperator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalOperator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalOperator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalOperator(ConditionalOperator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalOperator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalOperator(ConditionalOperator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ConditionalOperator, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ConditionalOperator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ConditionalOperator*, "Amazon.DynamoDBv2", "ConditionalOperator");
