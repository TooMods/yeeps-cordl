#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributeAction)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class AttributeAction;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::AttributeAction);
// Type: Amazon.DynamoDBv2::AttributeAction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::AttributeAction*
class CORDL_TYPE AttributeAction : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ADD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ADD, put = setStaticF_ADD))::Amazon::DynamoDBv2::AttributeAction* ADD;

  /// @brief Field DELETE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DELETE, put = setStaticF_DELETE))::Amazon::DynamoDBv2::AttributeAction* DELETE;

  /// @brief Field PUT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PUT, put = setStaticF_PUT))::Amazon::DynamoDBv2::AttributeAction* PUT;

  /// @brief Method FindValue, addr 0x120f840, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::AttributeAction* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::AttributeAction* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x120f7d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::AttributeAction* getStaticF_ADD();

  static inline ::Amazon::DynamoDBv2::AttributeAction* getStaticF_DELETE();

  static inline ::Amazon::DynamoDBv2::AttributeAction* getStaticF_PUT();

  /// @brief Method op_Implicit, addr 0x120f8ac, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::AttributeAction* op_Implicit___Amazon__DynamoDBv2__AttributeAction_(::StringW value);

  static inline void setStaticF_ADD(::Amazon::DynamoDBv2::AttributeAction* value);

  static inline void setStaticF_DELETE(::Amazon::DynamoDBv2::AttributeAction* value);

  static inline void setStaticF_PUT(::Amazon::DynamoDBv2::AttributeAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeAction(AttributeAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeAction(AttributeAction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::AttributeAction, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::AttributeAction);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::AttributeAction*, "Amazon.DynamoDBv2", "AttributeAction");
