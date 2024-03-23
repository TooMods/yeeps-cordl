#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__Converter_1_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DecimalConverterV1)
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace System {
struct Decimal;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class DecimalConverterV1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DecimalConverterV1);
// Type: Amazon.DynamoDBv2::DecimalConverterV1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::DecimalConverterV1*
class CORDL_TYPE DecimalConverterV1 : public ::Amazon::DynamoDBv2::Converter_1<::System::Decimal> {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DecimalConverterV1* New_ctor();

  /// @brief Method TryFrom, addr 0x120c7c8, size 0xc0, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<::System::Decimal> result);

  /// @brief Method TryTo, addr 0x120c6cc, size 0xfc, virtual true, abstract: false, final false
  inline bool TryTo(::System::Decimal value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p);

  /// @brief Method .ctor, addr 0x120c888, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalConverterV1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecimalConverterV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalConverterV1(DecimalConverterV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalConverterV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalConverterV1(DecimalConverterV1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DecimalConverterV1, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::DecimalConverterV1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DecimalConverterV1*, "Amazon.DynamoDBv2", "DecimalConverterV1");
