#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamoDBNull)
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBNull;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull);
// Type: Amazon.DynamoDBv2.DocumentModel::DynamoDBNull
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::DynamoDBNull*
class CORDL_TYPE DynamoDBNull : public ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* Null;

  /// @brief Method Clone, addr 0x16537e0, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method ConvertToAttributeValue, addr 0x1653774, size 0x6c, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method Equals, addr 0x165383c, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x16538b4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* New_ctor();

  /// @brief Method .ctor, addr 0x165376c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* getStaticF_Null();

  static inline void setStaticF_Null(::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBNull(DynamoDBNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBNull(DynamoDBNull const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull*, "Amazon.DynamoDBv2.DocumentModel", "DynamoDBNull");
