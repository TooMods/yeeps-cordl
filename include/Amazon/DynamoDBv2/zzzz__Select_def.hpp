#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Select)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class Select;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Select);
// Type: Amazon.DynamoDBv2::Select
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::Select*
class CORDL_TYPE Select : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ALL_ATTRIBUTES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL_ATTRIBUTES, put = setStaticF_ALL_ATTRIBUTES))::Amazon::DynamoDBv2::Select* ALL_ATTRIBUTES;

  /// @brief Field ALL_PROJECTED_ATTRIBUTES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL_PROJECTED_ATTRIBUTES, put = setStaticF_ALL_PROJECTED_ATTRIBUTES))::Amazon::DynamoDBv2::Select* ALL_PROJECTED_ATTRIBUTES;

  /// @brief Field COUNT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_COUNT, put = setStaticF_COUNT))::Amazon::DynamoDBv2::Select* COUNT;

  /// @brief Field SPECIFIC_ATTRIBUTES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SPECIFIC_ATTRIBUTES, put = setStaticF_SPECIFIC_ATTRIBUTES))::Amazon::DynamoDBv2::Select* SPECIFIC_ATTRIBUTES;

  /// @brief Method FindValue, addr 0x12131bc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Select* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::Select* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1213154, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::Select* getStaticF_ALL_ATTRIBUTES();

  static inline ::Amazon::DynamoDBv2::Select* getStaticF_ALL_PROJECTED_ATTRIBUTES();

  static inline ::Amazon::DynamoDBv2::Select* getStaticF_COUNT();

  static inline ::Amazon::DynamoDBv2::Select* getStaticF_SPECIFIC_ATTRIBUTES();

  /// @brief Method op_Implicit, addr 0x1213228, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Select* op_Implicit___Amazon__DynamoDBv2__Select_(::StringW value);

  static inline void setStaticF_ALL_ATTRIBUTES(::Amazon::DynamoDBv2::Select* value);

  static inline void setStaticF_ALL_PROJECTED_ATTRIBUTES(::Amazon::DynamoDBv2::Select* value);

  static inline void setStaticF_COUNT(::Amazon::DynamoDBv2::Select* value);

  static inline void setStaticF_SPECIFIC_ATTRIBUTES(::Amazon::DynamoDBv2::Select* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Select();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Select", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Select(Select&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Select", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Select(Select const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Select, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::Select);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Select*, "Amazon.DynamoDBv2", "Select");
