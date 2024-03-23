#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__DateTimeConverterV1_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConverterV2)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class DateTimeConverterV2;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DateTimeConverterV2);
// Type: Amazon.DynamoDBv2::DateTimeConverterV2
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::DateTimeConverterV2*
class CORDL_TYPE DateTimeConverterV2 : public ::Amazon::DynamoDBv2::DateTimeConverterV1 {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DateTimeConverterV2* New_ctor();

  /// @brief Method .ctor, addr 0x120e7dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeConverterV2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverterV2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeConverterV2(DateTimeConverterV2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverterV2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeConverterV2(DateTimeConverterV2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DateTimeConverterV2, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::DateTimeConverterV2);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DateTimeConverterV2*, "Amazon.DynamoDBv2", "DateTimeConverterV2");
