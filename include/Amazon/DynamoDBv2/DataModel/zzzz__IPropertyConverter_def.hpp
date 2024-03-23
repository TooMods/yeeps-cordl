#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyConverter)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class IPropertyConverter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::IPropertyConverter);
// Type: Amazon.DynamoDBv2.DataModel::IPropertyConverter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::IPropertyConverter*
class CORDL_TYPE IPropertyConverter {
public:
  // Declarations
  /// @brief Method FromEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry);

  /// @brief Method ToEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToEntry(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPropertyConverter(IPropertyConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyConverter(IPropertyConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::IPropertyConverter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::IPropertyConverter*, "Amazon.DynamoDBv2.DataModel", "IPropertyConverter");
