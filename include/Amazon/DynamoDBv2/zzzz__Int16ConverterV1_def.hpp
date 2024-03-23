#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__Converter_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int16ConverterV1)
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class Int16ConverterV1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Int16ConverterV1);
// Type: Amazon.DynamoDBv2::Int16ConverterV1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::Int16ConverterV1*
class CORDL_TYPE Int16ConverterV1 : public ::Amazon::DynamoDBv2::Converter_1<int16_t> {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Int16ConverterV1* New_ctor();

  /// @brief Method TryFrom, addr 0x120bc08, size 0x8c, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<int16_t> result);

  /// @brief Method TryTo, addr 0x120bb34, size 0xd4, virtual true, abstract: false, final false
  inline bool TryTo(int16_t value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p);

  /// @brief Method .ctor, addr 0x120bc94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Int16ConverterV1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Int16ConverterV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Int16ConverterV1(Int16ConverterV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Int16ConverterV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Int16ConverterV1(Int16ConverterV1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Int16ConverterV1, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::Int16ConverterV1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Int16ConverterV1*, "Amazon.DynamoDBv2", "Int16ConverterV1");
