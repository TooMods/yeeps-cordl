#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoolAsNConverter)
namespace Amazon::DynamoDBv2::DataModel {
class IPropertyConverter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2 {
class BoolConverterV1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class BoolAsNConverter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::BoolAsNConverter);
// Type: Amazon.DynamoDBv2::BoolAsNConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::BoolAsNConverter*
class CORDL_TYPE BoolAsNConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field boolType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_boolType, put = setStaticF_boolType))::System::Type* boolType;

  /// @brief Field v1Converter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_v1Converter, put = setStaticF_v1Converter))::Amazon::DynamoDBv2::BoolConverterV1* v1Converter;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
  constexpr operator ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*() noexcept;

  /// @brief Method FromEntry, addr 0x120f288, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Object* FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry);

  static inline ::Amazon::DynamoDBv2::BoolAsNConverter* New_ctor();

  /// @brief Method ToEntry, addr 0x120f220, size 0x68, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToEntry(::System::Object* value);

  /// @brief Method .ctor, addr 0x120f2f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_boolType();

  static inline ::Amazon::DynamoDBv2::BoolConverterV1* getStaticF_v1Converter();

  /// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
  constexpr ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* i___Amazon__DynamoDBv2__DataModel__IPropertyConverter() noexcept;

  static inline void setStaticF_boolType(::System::Type* value);

  static inline void setStaticF_v1Converter(::Amazon::DynamoDBv2::BoolConverterV1* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolAsNConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolAsNConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolAsNConverter(BoolAsNConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolAsNConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolAsNConverter(BoolAsNConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::BoolAsNConverter, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::BoolAsNConverter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::BoolAsNConverter*, "Amazon.DynamoDBv2", "BoolAsNConverter");
