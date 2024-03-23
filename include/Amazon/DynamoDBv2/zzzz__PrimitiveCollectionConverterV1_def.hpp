#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__CollectionConverter_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PrimitiveCollectionConverterV1)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class PrimitiveCollectionConverterV1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1);
// Type: Amazon.DynamoDBv2::PrimitiveCollectionConverterV1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::PrimitiveCollectionConverterV1*
class CORDL_TYPE PrimitiveCollectionConverterV1 : public ::Amazon::DynamoDBv2::CollectionConverter {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1* New_ctor();

  /// @brief Method TryFrom, addr 0x120e118, size 0x94, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* l, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x120e060, size 0xb8, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* pl, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryTo, addr 0x120dfd8, size 0x88, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl);

  /// @brief Method .ctor, addr 0x120df64, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveCollectionConverterV1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveCollectionConverterV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveCollectionConverterV1(PrimitiveCollectionConverterV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveCollectionConverterV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveCollectionConverterV1(PrimitiveCollectionConverterV1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1, 0x20>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1*, "Amazon.DynamoDBv2", "PrimitiveCollectionConverterV1");
