#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__Converter_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BoolConverterV1)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBBool;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class BoolConverterV1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::BoolConverterV1);
// Type: Amazon.DynamoDBv2::BoolConverterV1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::BoolConverterV1*
class CORDL_TYPE BoolConverterV1 : public ::Amazon::DynamoDBv2::Converter_1<bool> {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::BoolConverterV1* New_ctor();

  /// @brief Method TryFrom, addr 0x120d604, size 0x20, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* b, ::System::Type* targetType, ByRef<bool> result);

  /// @brief Method TryFrom, addr 0x120d624, size 0x7c, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<bool> result);

  /// @brief Method TryTo, addr 0x120d550, size 0xb4, virtual true, abstract: false, final false
  inline bool TryTo(bool value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p);

  /// @brief Method .ctor, addr 0x120d6a0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolConverterV1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolConverterV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolConverterV1(BoolConverterV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolConverterV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolConverterV1(BoolConverterV1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::BoolConverterV1, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::BoolConverterV1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::BoolConverterV1*, "Amazon.DynamoDBv2", "BoolConverterV1");
