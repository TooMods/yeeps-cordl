#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__Converter_1_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnumConverterV1)
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class EnumConverterV1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::EnumConverterV1);
// Type: Amazon.DynamoDBv2::EnumConverterV1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::EnumConverterV1*
class CORDL_TYPE EnumConverterV1 : public ::Amazon::DynamoDBv2::Converter_1<::System::Enum*> {
public:
  // Declarations
  /// @brief Method ConvertEnum, addr 0x120d2f4, size 0xf8, virtual false, abstract: false, final false
  inline ::bs_hook::EnumPtr ConvertEnum(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType);

  /// @brief Method ConvertEnum, addr 0x120d3ec, size 0x11c, virtual false, abstract: false, final false
  static inline ::bs_hook::EnumPtr ConvertEnum(::StringW s, ::System::Type* targetType);

  static inline ::Amazon::DynamoDBv2::EnumConverterV1* New_ctor();

  /// @brief Method TryFrom, addr 0x120d288, size 0x6c, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<::bs_hook::EnumPtr> result);

  /// @brief Method TryTo, addr 0x120d0f0, size 0x198, virtual true, abstract: false, final false
  inline bool TryTo(::bs_hook::EnumPtr value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p);

  /// @brief Method .ctor, addr 0x120d508, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumConverterV1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumConverterV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumConverterV1(EnumConverterV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumConverterV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumConverterV1(EnumConverterV1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::EnumConverterV1, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::EnumConverterV1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::EnumConverterV1*, "Amazon.DynamoDBv2", "EnumConverterV1");
