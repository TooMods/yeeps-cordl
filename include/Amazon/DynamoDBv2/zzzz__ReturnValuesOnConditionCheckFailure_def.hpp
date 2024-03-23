#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReturnValuesOnConditionCheckFailure)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ReturnValuesOnConditionCheckFailure;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure);
// Type: Amazon.DynamoDBv2::ReturnValuesOnConditionCheckFailure
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ReturnValuesOnConditionCheckFailure*
class CORDL_TYPE ReturnValuesOnConditionCheckFailure : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ALL_OLD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL_OLD, put = setStaticF_ALL_OLD))::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* ALL_OLD;

  /// @brief Field NONE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NONE, put = setStaticF_NONE))::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* NONE;

  /// @brief Method FindValue, addr 0x1212c00, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1212b98, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* getStaticF_ALL_OLD();

  static inline ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* getStaticF_NONE();

  /// @brief Method op_Implicit, addr 0x1212c6c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* op_Implicit___Amazon__DynamoDBv2__ReturnValuesOnConditionCheckFailure_(::StringW value);

  static inline void setStaticF_ALL_OLD(::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* value);

  static inline void setStaticF_NONE(::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReturnValuesOnConditionCheckFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReturnValuesOnConditionCheckFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReturnValuesOnConditionCheckFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure*, "Amazon.DynamoDBv2", "ReturnValuesOnConditionCheckFailure");
