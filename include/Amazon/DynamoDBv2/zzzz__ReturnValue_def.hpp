#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReturnValue)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ReturnValue;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ReturnValue);
// Type: Amazon.DynamoDBv2::ReturnValue
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ReturnValue*
class CORDL_TYPE ReturnValue : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ALL_NEW, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL_NEW, put = setStaticF_ALL_NEW))::Amazon::DynamoDBv2::ReturnValue* ALL_NEW;

  /// @brief Field ALL_OLD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL_OLD, put = setStaticF_ALL_OLD))::Amazon::DynamoDBv2::ReturnValue* ALL_OLD;

  /// @brief Field NONE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NONE, put = setStaticF_NONE))::Amazon::DynamoDBv2::ReturnValue* NONE;

  /// @brief Field UPDATED_NEW, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UPDATED_NEW, put = setStaticF_UPDATED_NEW))::Amazon::DynamoDBv2::ReturnValue* UPDATED_NEW;

  /// @brief Field UPDATED_OLD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UPDATED_OLD, put = setStaticF_UPDATED_OLD))::Amazon::DynamoDBv2::ReturnValue* UPDATED_OLD;

  /// @brief Method FindValue, addr 0x121298c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReturnValue* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReturnValue* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1212924, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReturnValue* getStaticF_ALL_NEW();

  static inline ::Amazon::DynamoDBv2::ReturnValue* getStaticF_ALL_OLD();

  static inline ::Amazon::DynamoDBv2::ReturnValue* getStaticF_NONE();

  static inline ::Amazon::DynamoDBv2::ReturnValue* getStaticF_UPDATED_NEW();

  static inline ::Amazon::DynamoDBv2::ReturnValue* getStaticF_UPDATED_OLD();

  /// @brief Method op_Implicit, addr 0x12129f8, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReturnValue* op_Implicit___Amazon__DynamoDBv2__ReturnValue_(::StringW value);

  static inline void setStaticF_ALL_NEW(::Amazon::DynamoDBv2::ReturnValue* value);

  static inline void setStaticF_ALL_OLD(::Amazon::DynamoDBv2::ReturnValue* value);

  static inline void setStaticF_NONE(::Amazon::DynamoDBv2::ReturnValue* value);

  static inline void setStaticF_UPDATED_NEW(::Amazon::DynamoDBv2::ReturnValue* value);

  static inline void setStaticF_UPDATED_OLD(::Amazon::DynamoDBv2::ReturnValue* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReturnValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReturnValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReturnValue(ReturnValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReturnValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReturnValue(ReturnValue const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ReturnValue, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ReturnValue);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ReturnValue*, "Amazon.DynamoDBv2", "ReturnValue");
